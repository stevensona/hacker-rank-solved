/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    if(head == nullptr)
        return head;
    if(position == 0) {
        auto n = head->next;
        delete head;
        return n;
    }
    auto it = head;
    while(position-- > 1)
        it = it->next;
    auto n = it->next->next;
    delete it->next;
    it->next = n;
    return head;
    
}