Node* findIntersection(Node *headA, Node *headB)
{
    //Write your code here
      Node*f=headA,*s=headB;
    int c=0;
    while(f!=s){
        if(c>2)
            return NULL;
        if(f->next)
            f=f->next;
        else{
            f=headB;
            c++;
        }
        if(s->next)
            s=s->next;
        else{
            s=headA;
            c++;
        }
    }
    return f;
    
}