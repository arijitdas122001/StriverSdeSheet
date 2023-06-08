ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1 || head==NULL)return head;
        ListNode*temp=head;
        int length=0;
        while(temp){
            length++;
            temp=temp->next;
        }
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*prev=dummy,*curr,*nxt;
        while(length>=k){
           curr=prev->next;
           nxt=curr->next;
           for(int i=1;i<k;i++){
            curr->next=nxt->next;
            nxt->next=prev->next;
            prev->next=nxt;
            nxt=curr->next;
           }
           prev=curr;
           length-=k;
        }
        return dummy->next;
    }