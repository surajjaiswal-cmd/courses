#include <iostream>
using namespace std;
// 1. add a element in satrting of array.
// 2. add a element in end of array.
// 3. creat linkdlst by recurtion.
// 4. add a element in satrting of array by recurtion.
// 5. in a list insert a element at x.
// 6. creat a link list.

//================================================================================
// 1. add a element in satrting of array.
// class list
// {
// public:
//     int data;
//     list *next;
//     list(int n)
//     {
//         data = n;
//         next = NULL;
//     }
// };
// int main()
// {
//     list *head;
//     head = NULL;
//     int arr[] = {3, 2, 5, 6, 7, 8};
//     for (int i = 0; i < 6; i++)
//     {
//         if (head == NULL)
//         {
//             head = new list(arr[i]);
//         }
//         else
//         {
//             list *temp;
//             temp = new list(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     list *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }
// //================================================================================
// // 2. add a element in end of array.
// class list
// {
// public:
//     int data;
//     list *next;

//     list(int n)
//     {
//         data = n;
//         next = NULL;
//     }
// };
// int main()
// {
//     list *head;
//     head = NULL;
//     list *tail;
//     tail = head;
//     int arr[] = {2, 3, 4, 5, 6, 7};
//     for (int i = 0; i < 6; i++)
//     {
//         if (head == 0)
//         {
//             head = new list(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             tail->next = new list(arr[i]);
//             tail = tail->next;
//         }
//     }
//     list *temp;
//     temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }
//================================================================================
// 3. creat linkdlist by recurtion.
// #include <vector>
// class list
// {
// public:
//     int data;
//     list *next;

//     list(int n)
//     {
//         data = n;
//         next = NULL;
//     }
// };
// list *creatlist(int arr[], int index, int size)
// {
//     if (index == size)
//         return NULL;
//     list *temp;
//     temp = new list(arr[index]);
//     temp->next = creatlist(arr, index + 1, size);
//     return temp;
// }
// int main()
// {
//     list *head;
//     head = NULL;
//     list *tail;
//     tail = head;
//     int arr[] = {2, 3, 4, 5, 6, 7};
//     head = creatlist(arr, 0, 6);
//     list *temp;
//     temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }
//================================================================================
// 4. add a element in satrting of array by recurtion.
// class list
// {
// public:
//     int data;
//     list *next;

//     list(int n)
//     {
//         data = n;
//         next = NULL;
//     }
// };
// list *creatlist(int arr[], int index, int size, list *pre)
// {
//     if (index == size)
//         return pre;
//     list *temp;
//     temp = new list(arr[index]);
//     temp->next = pre;
//     return creatlist(arr, index + 1, size, temp);
// }
// int main()
// {
//     list *head;
//     head = NULL;
//     list *tail;
//     tail = head;
//     int arr[] = {2, 3, 4, 5, 6, 7};
//     head = creatlist(arr, 0, 6, head);
//     list *temp;
//     temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }
//===============================================================================
// 5. in a list insert a element at x.
class list
{
public:
    int data;
    list *next;

    list(int n)
    {
        data = n;
        next = NULL;
    }
};
int main()
{
    list *head;
    head = NULL;
    list *tail;
    tail = head;
    int arr[] = {2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 6; i++)
    {
        if (head == 0)
        {
            head = new list(arr[i]);
            tail = head;
        }
        else
        {
            tail->next = new list(arr[i]);
            tail = tail->next;
        }
    }
    int x = 3;
    int value = 90;
    list *link = head;
    for (int i = 1; i < x ; i++)
    {
        link = link->next;
    }
    list *tamp1;
    tamp1 = new list(value);
    tamp1->next = link->next;
    link->next = tamp1;

    list *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
//==========================================================================================================
// 6. creat a linked list.
// class node
// {
// public:
//     int value;
//     node *next;
//     node(int n) : value(n), next(nullptr) {}
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
//         {   while (tail->next != nullptr)
//             {
//                 tail = tail->next;
//             }
//             tail->next = new node(n);
           
//         }
//     }

//     void showdata()
//     {
//         node *temp = head;
//         while (temp)
//         {
//             cout << temp->value << " -> ";
//             temp = temp->next;
//         }
//     cout<<"NULL";
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
//     list.showdata();

//     return 0;
// }