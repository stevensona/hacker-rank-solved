/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void left(node * root) {
    if(root->left != nullptr) left(root->left);
    std::cout << root->data << ' ';
}
void right(node * root) {
    std::cout << root->data << ' ';
    if(root->right != nullptr) right(root->right);
}

void top_view(node * root)
{
    if(root == nullptr) return;
    left(root->left);
    std::cout << root->data << ' ';
    right(root->right);  

}
