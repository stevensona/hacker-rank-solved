/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    auto tail = new Node(), it = head;
    tail->data = data;
    if(head == nullptr)
        return tail;
    while(it->next != nullptr)
        it = it->next;
    it->next = tail;
    return head;

}