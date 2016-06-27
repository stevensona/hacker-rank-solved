/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    if(head == nullptr)
        return;
    while(head != nullptr) {
        cout << head->data << '\n';
        head = head->next;
    }
}
