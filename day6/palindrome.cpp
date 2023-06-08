 LinkedListNode<int>*reverse(LinkedListNode<int>*root){
        LinkedListNode<int>*prev=NULL,*nxt=NULL,*curr=root;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int>*slow=head;
        LinkedListNode<int>*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        LinkedListNode<int>*middlepoint=reverse(slow);
        LinkedListNode<int>*ptr1=head,*ptr2=middlepoint;
        while(ptr2){
            if(ptr1->data!=ptr2->data){
                return false;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return true;

}