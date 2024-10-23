
// is binary search tree or not
#include <iostream>
#include <climits>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};
node *insert(node *root, int key)
{
    if (!root)
    {
        root = new node(key);
        return root;
    }
    if (root->data > key)
    {
        root->left = insert(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = insert(root->right, key);
    }
    else
        return root;
}
bool bst(node *root, int pre)
{
    if (root == nullptr)
        return 1;
    bool l = bst(root->left, pre);
    if (l == 0)
        return 0;
    if (root->data <= pre)
        return 0;
    pre = root->data;
    return bst(root->right, pre);
}

void traversal(node *root)
{
    if (!root)
        return;
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
}
int main()
{
    int arr[] = {7, 5, 64, 28, 28, 42, 84, 85, 3, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *root = nullptr;
    for (int i = 0; i < size; i++)
    {
        root = insert(root, arr[i]);
    }
    cout << "BST data in pre-order traversal \n";
    traversal(root);
    int pre = INT_MIN;
    if (bst(root, pre) == 0)
        cout << "\ngiven tree not a bst";
    else
        cout << "\ngiven tree is a bst";

    return 0;
}