#include <iostream>
using namespace std;
// 1. implemantation of  AVL tree.
//===========================================================================================
// 1. implemantation of  AVL tree.
class node
{
public:
    int data, hight;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        hight = 1;
        left = right = nullptr;
    }
};
int gethight(node *root)
{ // if root not exist
    if (root == nullptr)
        return 0;
    // if root exist
    return root->hight;
}
int getbalence(node *root)
{
    return gethight(root->left) - gethight(root->right);
}
node *rightrotation(node *root)
{
    node *center = root->left;
    node *centerright = center->right;
    center->right = root;
    root->left = centerright;
    root->hight = max(gethight(root->left), gethight(root->right)) + 1;
    center->hight = max(gethight(center->left), gethight(center->right)) + 1;
    return center;
}
node *leftrotation(node *root)
{
    node *center = root->right;
    node *centerleft = center->left;
    center->left = root;
    root->right = centerleft;
    root->hight = max(gethight(root->left), gethight(root->right)) + 1;
    center->hight = max(gethight(center->left), gethight(center->right)) + 1;
    return center;
}
node *insert(node *root, int key)
{ // if root not exist
    if (root == nullptr)
        return new node(key);
    // if rot exist
    if (root->data > key)
        root->left = insert(root->left, key);
    else if (root->data < key)
        root->right = insert(root->right, key);
    // if value same
    else
        return root;
    // calculating mex hight of root
    root->hight = max(gethight(root->left), gethight(root->right)) + 1;
    int balance = getbalence(root);

    // l l condition
    if (balance > 1 && key < root->left->data)
    {
        return rightrotation(root);
    }
    // r r condition
    else if (balance < -1 && key > root->right->data)
    {
        return leftrotation(root);
    }
    // l r condition
    else if (balance > 1 && key > root->left->data)
    {
        root->left = leftrotation(root->left);
        return rightrotation(root);
    }
    // r l condition
    else if (balance < -1 && key < root->right->data)
    {
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    else
        return root;
}
node *deletenode(node *root, int key)
{ // base condition
    if (root == nullptr)
        return nullptr;
    if (key < root->data)
        root->left = deletenode(root->left, key);
    else if (key > root->data)
        root->right = deletenode(root->right, key);
    else
    {
        // if left child exist
        if (!root->right)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        // if right child exist
        else if (!root->left)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        node *child = root->left;
        while (child->right)
        {
            child = child->right;
        }
        root->data = child->data;
        root->left = deletenode(root->left, child->data);
    }
    if (root == nullptr)
        return nullptr;

    root->hight = root->hight = max(gethight(root->left), gethight(root->right)) + 1;
    int balance = getbalence(root);
    if (balance > 1 && getbalence(root->left) >= 0)
        return rightrotation(root);
    else if (balance > 1 && getbalence(root->left) < 0)
    {
        root->left = leftrotation(root);
        return rightrotation(root);
    }
    else if (balance < -1 && getbalence(root->right) < 0)
        return leftrotation(root);
    else if (balance < -1 && getbalence(root->right) >= 0)
    {
        root->right = rightrotation(root);
        return leftrotation(root);
    }
    else
        return root;
}

void traversal(node *root)
{
    if (!root)
        return;

    cout << root->data << " ";
    traversal(root->left);
    traversal(root->right);
}

int main()
{
    int arr[] = {7, 5, 64, 28, 29, 42, 84, 85, 3, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *root = nullptr;
    for (int i = 0; i < size; i++)
    {
        root = insert(root, arr[i]);
    }
    cout << "AVL tree data in pre-traversal order\n";
    traversal(root);
    int key = 64;
    deletenode(root, key);
    cout << "\nAVL tree after delete a node \n";
    traversal(root);

    return 0;
}
