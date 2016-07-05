//https://www.hackerrank.com/challenges/reverse-a-linked-list
/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *p = nullptr;
    Node *c = head;
    Node *n;
    while(c != nullptr) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;    
}