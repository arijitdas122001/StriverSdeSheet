Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
     int carry=0;
        Node*dummynode=new Node(0);
        Node*ptr=dummynode;
        while(num1 || num2 || carry==1){
            int sum=0;
          if(num1!=NULL){
              sum+=num1->data;
              num1=num1->next;
          }
          if(num2!=NULL){
              sum+=num2->data;
              num2=num2->next;
          }
          sum+=carry;
         ptr->next=new Node((sum)%10);
         carry=sum/10;
         ptr=ptr->next;
        }
        return dummynode->next;
}
