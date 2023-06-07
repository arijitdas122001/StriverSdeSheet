LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
     LinkedListNode<int>*curr=head;
        LinkedListNode<int>*prev=NULL,*nxt=NULL;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        head=prev;
        return head;
}