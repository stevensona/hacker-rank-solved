/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    if(root == nullptr) return;
    std::cout << root->data << ' ';
    if(root->left != nullptr) preOrder(root->left);
    if(root->right != nullptr) preOrder(root->right);
}