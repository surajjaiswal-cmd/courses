#include <iostream>
using namespace std;
// 1. creat a BST.
// 2. serche a value in BST.
// 3. delete a node from bst.
//==========================================================================================
// 1. creat a BST.
//  class node
//  {
//  public:
//      int data;
//      node *left;
//      node *right;
//      node(int value)
//      {
//          data = value;
//          left = right = nullptr;
//      }
//  };
//  node *insert(node *root, int key)
//  {
//      if (!root)
//      {
//          root = new node(key);
//          return root;
//      }
//      if (root->data > key)
//      {
//          root->left = insert(root->left, key);
//      }
//      else if (root->data < key)
//      {
//          root->right = insert(root->right, key);
//      }
//      else
//          return root;
//  }
//  void traversal(node *root)
//  {
//      if (!root)
//          return;
//      traversal(root->left);
//      cout << root->data << " ";
//      traversal(root->right);
//  }
//  int main()
//  {
//      int arr[] = {7, 5, 64, 28, 28, 42, 84, 85, 3, 14};
//      int size = sizeof(arr) / sizeof(arr[0]);
//      node *root = nullptr;
//      for (int i = 0; i < size; i++)
//      {
//          root = insert(root, arr[i]);
//      }
//      cout << "BST data in pre-order traversal \n";
//      traversal(root);

//     return 0;
// }
//===============================================================================================
// 2. serche a value in BST.
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int value)
//     {
//         data = value;
//         left = right = nullptr;
//     }
// };
// node *insert(node *root, int key)
// {
//     if (!root)
//     {
//         root = new node(key);
//         return root;
//     }
//     if (root->data > key)
//     {
//         root->left = insert(root->left, key);
//     }
//     else if (root->data < key)
//     {
//         root->right = insert(root->right, key);
//     }
//     else
//         return root;
// }
// void traversal(node *root)
// {
//     if (!root)
//         return;
//     cout << root->data << " ";
//     traversal(root->left);
//     traversal(root->right);
// }
// bool present(node *root, int key)
// {
//     if (!root)
//         return 0;
//     if (root->data == key)
//         return 1;

//     if (key < root->data)

//         return present(root->left, key);

//     else

//         return present(root->right, key);
// }

// int main()
// {
//     int arr[] = {7, 5, 64, 28, 28, 42, 84, 85, 3, 14};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     node *root = nullptr;
//     for (int i = 0; i < size; i++)
//     {
//         root = insert(root, arr[i]);
//     }
//     cout << "BST data in pre-order traversal \n";
//     traversal(root);
//     cout << "\n";
//     int value =28;
//     int ans = present(root, value);
//     if (ans == 1)
//         cout << "value available\n";
//     else
//         cout << "value not available\n";

//     return 0;
// }
//==========================================================================================
// 3. delete a node from bst.
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
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    else
        return root;
}
void traversal(node *root)
{
    if (!root)
        return;
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
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
        // if both child exist
        // find the gretest element from left
        node *child = root->left;
        while (child->right)
        {
            child = child->right;
        }
        root->data = child->data;
        root->left = deletenode(root->left, child->data);
    }
    return root;
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
    cout << "\n";
    int value = 28;
    root = deletenode(root, value);
    cout << "BST data in pre-order traversal after delete \n";
    traversal(root);
    cout << "\n";

    return 0;
}