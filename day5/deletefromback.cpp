
Node *removeKthNode(Node *head, int K)
{
    // Write your code here.
    Node *dummynode = new Node(0);
    dummynode->next = head;
    Node *slow = dummynode, *fast = dummynode;
    for (int i = 1; i <= K; i++)
    {
        fast = fast->next;
    }
    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return dummynode->next;
}