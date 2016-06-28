
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include <cmath>

int height(node * root)
{
    if(root->left == root->right) return 0;
    if(root->left == nullptr) return 1 + height(root->right);
    if(root->right == nullptr) return 1 + height(root->left);
    return 1 + max(height(root->right), height(root->left));
}
  