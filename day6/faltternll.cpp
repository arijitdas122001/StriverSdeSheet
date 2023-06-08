    Node*merge(Node*root1,Node*root2){
        Node*dummynode=new Node(0);
        Node*curr=dummynode;
        while(root1!=NULL && root2!=NULL){
            if(root1->data<=root2->data){
                curr->bottom=root1;
                curr=curr->bottom;
                root1=root1->bottom;
            }
            else{
                curr->bottom=root2;
                 curr=curr->bottom;
                root2=root2->bottom;
            }
        }
        if(root1!=NULL){
            curr->bottom=root1;
        }
        else{
            curr->bottom=root2;
        }
        return dummynode->bottom;
    }
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL)return root;
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
}