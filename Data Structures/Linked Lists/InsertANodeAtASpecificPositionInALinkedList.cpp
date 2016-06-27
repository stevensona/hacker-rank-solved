/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    if(head == nullptr) {
        head = new Node();
        head->next = nullptr;
        head->data = data;
        return head;
    }
    if(position == 0) {
        auto node = new Node();
        node->data = data;
        node->next = head;
        return node;
    }
    auto it = head;
    while(position-- > 1) {
        it = it->next;
    }
    auto n = new Node();
    n->data = data;
    n->next = it->next;
    it->next = n;

    return head;
}
