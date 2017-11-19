listNode *insert_at_tail(listNode *head, int data)
{
    listNode *trav;
    trav = head;
    listNode *newNode = new listNode;
    newNode->value = data;
    newNode->next = NULL;
    
    if (!head)
    {
        head = newNode;
        return head;
    }
    while (trav->next)
    {
        trav = trav->next;
    }
    trav->next = newNode;
    return head;
}