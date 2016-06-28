/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {
    if(root == nullptr) return;
    if(root->left != nullptr) inOrder(root->left);
    std::cout << root->data << ' ';
    if(root->right != nullptr) inOrder(root->right);
}