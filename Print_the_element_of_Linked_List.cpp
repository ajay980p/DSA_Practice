
void printLinkedList(SinglyLinkedListNode* head)
{ 
    SinglyLinkedListNode *temp = NULL;
    temp = head;
    
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
