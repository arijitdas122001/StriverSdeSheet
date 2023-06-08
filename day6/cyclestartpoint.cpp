Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL)return NULL;
    Node*slow=head,*fast=head,*ptr1=head;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            while(ptr1!=slow){
                slow=slow->next;
                ptr1=ptr1->next;
            }
            return slow;
        }
    }
    return NULL;
}