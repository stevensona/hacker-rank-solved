/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root) {
    if(root == nullptr) return;
    if(root->left != nullptr) postOrder(root->left);
    if(root->right != nullptr) postOrder(root->right);
    std::cout << root->data << ' ';

}
