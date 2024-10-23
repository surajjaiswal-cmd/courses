#include <iostream>
#include <queue>
using namespace std;
// 1. implemantation of binary tree.
// 2. implemantation of binery tree brfore left branche and trevelsal.
// 3. level trevelsal in binary tree.

//=======================================================================================================
// 1. implemantation of binary tree.
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
int main()
{
    int x, frist, second;
    cout << "enter the root = ";
    cin >> x;
    queue<node *> tree;
    node *root = new node(x);
    tree.push(root);
    while (!tree.empty())
    {
        node *temp = tree.front();
        tree.pop();
        cout<<"enter the left of "<<temp->data<<" = ";
        cin >> frist;
        if (frist != -1)
        {
            temp->left = new node(frist);
            tree.push(temp->left);
        }
          cout<<"enter the right of "<<temp->data<<" = ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new node(second);
            tree.push(temp->right);
        }
    }
}
//=============================================================================================================================
// 2. implemantation of binary tree brfore left branches  and trevelsal..
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int n)
//     {
//         data = n;
//         left = right = nullptr;
//     }
// };
// node *tree()
// {
//     int x;
//     cin >> x;
//     if (x == -1)
//         return nullptr;
//     node *temp = new node(x);
//     cout << "ledt of " << x << " = ";
//     temp->left = tree();
//     cout << "right of " << x << " = ";
//     temp->right = tree();
//     return temp;
// }
// void pre_order(node *temp)
// {
//     if (temp == nullptr)
//         return;
//     cout << temp->data<<" ";
//     pre_order(temp->left);
//     pre_order(temp->right);
// }
// void in_order(node *temp)
// {
//     if (temp == nullptr)
//         return;
//     pre_order(temp->left);
//     cout << temp->data<<" ";
//     pre_order(temp->right);
// }
// void post_order(node *temp)
// {
//     if (temp == nullptr)
//         return;
//     pre_order(temp->left);
//     pre_order(temp->right);
//     cout << temp->data<<" ";
// }

// int main()
// {
//     cout << "enter the root value = ";
//     node *root;
//     root = tree();
//     cout << "pre order \n";
//     pre_order(root);
//     cout << "\nin order \n";
//     in_order(root);
//     cout << "\npost order \n";
//     post_order(root);

//     return 0;
// }
//===================================================================================================
// 3. level treversal in binary tree.
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
// void leveltraversal(node *start)
// {
//     if (start == nullptr)
//         return;
//     queue<node *> q;
//     q.push(start);
//     vector<int> v;

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         v.push_back(temp->data);

//         if (temp->left)
//             q.push(temp->left);
//         if (temp->right)
//             q.push(temp->right);
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }
// void total(node *root, int &size)
// {
//     if (root == nullptr)
//         return;
//     size++;
//     total(root->left, size);
//     total(root->right, size);
// }
// int getsize(node *root)
// {
//     int size = 0;
//     total(root, size);
//     return size;
// }
// int main()
// {
//     int x, frist, second;
//     cout << "enter the root = ";
//     cin >> x;
//     queue<node *> tree;
//     node *root = new node(x);
//     tree.push(root);
//     while (!tree.empty())
//     {
//         node *temp = tree.front();
//         tree.pop();
//         cout << "enter the left of " << temp->data << " = ";
//         cin >> frist;
//         if (frist != -1)
//         {
//             temp->left = new node(frist);
//             tree.push(temp->left);
//         }
//         cout << "enter the right of " << temp->data << " = ";
//         cin >> second;
//         if (second != -1)
//         {
//             temp->right = new node(second);
//             tree.push(temp->right);
//         }
//     }
//     // to print data of tree
//     cout << "level treversal = \n";
//     leveltraversal(root);
//     cout << endl;
//     cout << "size of tree is = ";
//     cout << getsize(root);
// }