 Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        Node*temp=head;
        Node*nxt=head;
        while(temp){
            nxt=temp->next;
            Node*newnode=new Node(temp->val);
            temp->next=newnode;
            newnode->next=nxt;
            temp=nxt;
        }
    Node*it=head;
        while(it){
            if(it->random){
            it->next->random=it->random->next;
            }
            it=it->next->next;
            
        }
        Node*itr=head;
        Node*nxt1;
        Node*dummy=new Node(0);
        Node*p1=dummy;
        dummy->next=head->next;
        while(itr){
            nxt1=itr->next->next;
            p1->next=itr->next;
            itr->next=nxt1;
            p1=p1->next;
            itr=nxt1;
        }
        return dummy->next;
    }
