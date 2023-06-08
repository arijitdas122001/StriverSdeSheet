bool detectCycle(Node *head)
{
	//	Write your code here
     if(head==NULL)return NULL;
        Node*slow=head;
        Node*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
}