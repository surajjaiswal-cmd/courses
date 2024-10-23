#include <iostream>
using namespace std;
// 1. ceast a duble linked list.
// 2. convert a given array in doubly linked list.
// 3. insert node at x in doubly linkd list.

//==========================================================================================================
// 1. creat a duble  linked list.
// class node
// {
// public:
//     int value;
//     node *next;
//     node *prev;
//     node(int n) : value(n), next(nullptr), prev(nullptr) {}
// };
// class linkdlist
// {
// private:
//     node *head;

// public:
//     linkdlist() : head(nullptr) {}

//     void insertinfrist(int n)
//     {
//         if (head == nullptr)
//         {
//             head = new node(n);
//         }
//         else
//         {
//             node *temp = new node(n);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     void insertinend(int n)
//     {
//         node *tail = head;
//         if (head == nullptr)
//         {
//             head = new node(n);
//         }
//         else
//         {
//             while (tail->next != nullptr)
//             {
//                 tail = tail->next;
//             }
//             node *temp = new node(n);
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//     }

//     void showdata()
//     {
//         node *temp = head;
//         while (temp)
//         {
//             cout << temp->value << " ";
//             temp = temp->next;
//         }
//         cout << "\n";
//     }
// };
// int main()
// {
//     linkdlist list;
//     list.insertinend(40);
//     list.insertinfrist(30);
//     list.insertinfrist(20);
//     list.insertinfrist(10);
//     list.insertinfrist(5);
//     list.insertinend(50);
//     list.insertinend(60);
//     list.insertinend(70);
//     list.insertinfrist(4);
//     list.showdata();

//     return 0;
// }
//=========================================================================================================
// 2. convert a given array in doubly linked list.
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;
//     node(int a) : data(a), next(nullptr), prev(nullptr) {}

//     node *creatlist(int arr[], int size)
//     {
//         node *head = nullptr;
//         node *tail = nullptr;
//         for (int i = 0; i < size; i++)
//         {

//             if (head == nullptr)
//             {
//                 head = new node(arr[i]);
//                 tail = head;
//             }
//             else
//             {
//                 node *temp = new node(arr[i]);
//                 tail->next = temp;
//                 temp->prev = tail;
//                 tail = temp;
//             }
//         }
//         return head;
//     }
// };
// int main()
// {
//     node *head = nullptr;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     head = head->creatlist(arr, 7);

//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
//======================================================================================================
// 3. insert node at x in doubly linkd list.
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int a) : data(a), next(nullptr), prev(nullptr) {}

    void insertinfrist(int n, node *&head)
    {
        node *temp = new node(n);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    void insertinend(int n, node *&head)
    {
        node *tail = head;
        while (tail->next != nullptr)
        {
            tail = tail->next;
        }
        node *temp = new node(n);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

    node *creatlist(int arr[], int size)
    {
        node *head = nullptr;
        node *tail = nullptr;
        for (int i = 0; i < size; i++)
        {

            if (head == nullptr)
            {
                head = new node(arr[i]);
                tail = head;
            }
            else
            {
                node *temp = new node(arr[i]);
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
        }
        return head;
    }
};
int main()
{
    node *head = nullptr;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr);
    head = head->creatlist(arr, 7);

    int x = 6;
    if (x == 0)
    {
        head->insertinfrist(1, head);
    }
    else
    {
        node *tail = head;
        for (int i = 1; i < x; i++)
        {
            tail = tail->next;
        }
        if (tail->next == nullptr)
        {
            head->insertinend(2, head);
        }
        else
        {
            node *tamp1 = new node(3);
            tamp1->prev = tail;
            tamp1->next = tail->next;
            tail->next->prev = tamp1->next;
            tail->next = tamp1;
        }
    }
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}