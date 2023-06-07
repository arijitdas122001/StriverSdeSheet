Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL)return second;
        if(second==NULL)return first;
        Node<int>*head1=first,*head2=second;
        Node<int>*dummyhead=new Node<int>(0);
        Node<int>*curr=dummyhead;
        if(head1->data<=head2->data){
            curr->next=new Node<int>(head1->data);
            head1=head1->next;
            curr=curr->next;
        }else{
             curr->next=new Node<int>(head2->data);
            head2=head2->next;
            curr=curr->next;
        }
        while(head1 && head2){
           if(head1->data<=head2->data){
               curr->next=new Node<int>(head1->data);
            head1=head1->next;
           }
           else{
               curr->next=new Node<int>(head2->data);
              head2=head2->next;
           }
           curr=curr->next;
        }
        while(head1){
            curr->next=new Node<int>(head1->data);
            head1=head1->next;
            curr=curr->next;
        }
        while(head2){
           curr->next=new Node<int>(head2->data);
            head2=head2->next;
            curr=curr->next;
        }
      return dummyhead->next;
}
