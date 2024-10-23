#include <iostream>
using namespace std;
// 1. delete a node from start in linkd list.
// 2. delete end node in linkd list.
// 3. delete a perticuller node from linkdlist.
// 4. delete a perticuller node from linkdlist by function.
//====================================================================================================
// 1. delete a node from start in linkd list.
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int n)
//     {
//         data = n;
//         next = nullptr;
//     }
// };
// int main()
// {
//     node *head;
//     head = nullptr;
//     node *tail;
//     tail = nullptr;
//     int arr[] = {9, 7, 6, 4, 3, 2};
//     for (int i = 0; i < 6; i++)
//     {
//         if (head == nullptr)
//         {
//             head = new node(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             tail->next = new node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     node *frist;
//     frist = head;
//     head = head->next;
//     delete frist;

//     node *temp;
//     temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
//====================================================================================================
// 2. delete end node in linkd list.
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int n)
//     {
//         data = n;
//         next = nullptr;
//     }
// };
// int main()
// {
//     node *head;
//     head = nullptr;
//     node *tail;
//     tail = nullptr;
//     int arr[] = {9,2,3,3,2,4};
//     for (int i = 0; i < 6; i++)
//     {
//         if (head == nullptr)
//         {
//             head = new node(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             tail->next = new node(arr[i]);
//             tail = tail->next;
//         }
//     }

//     node *secondlast = head;
//     while (secondlast < tail)
//     {
//         secondlast = secondlast->next;
//     }
//     delete tail;
//     secondlast->next = nullptr;

//     node *temp;
//     temp = head;
//     while (temp != secondlast)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// //===========================================================================================================
// // 3. delete a perticuller node from linkdlist.
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int n)
//     {
//         data = n;
//         next = nullptr;
//     }
// };
// int main()
// {
//     node *head;
//     head = nullptr;
//     node *tail;
//     tail = nullptr;
//     int arr[] = {1,2,3,4,5,6};
//     for (int i = 0; i < 6; i++)
//     {
//         if (head == nullptr)
//         {
//             head = new node(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             tail->next = new node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     int x = 1;
//     node *temp1 = head;
//     node *prev = nullptr;
//     if (x == 1)
//     {
//         head = head->next;
//         delete temp1;
//     }
//     else
//     {
//         for (int i = 1; i < x; i++)
//         {
//             prev = temp1;
//             temp1 = temp1->next;
//         }
//         prev->next = temp1->next;
//         delete temp1;
//     }
//     while (head)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
//===========================================================================================================
// 4. delete a perticuller node from linkdlist by function.
class node
{
public:
    int data;
    node *next;
    node(int n)
    {
        data = n;
        next = nullptr;
    }
    node *creatlist(int arr[], int size)
    {
        node *head = nullptr;
        node *tail = nullptr;
        for (int i = 0; i < 6; i++)
        {
            if (head == nullptr)
            {
                head = new node(arr[i]);
                tail = head;
            }
            else
            {
                tail->next = new node(arr[i]);
                tail = tail->next;
            }
        }
        return head;
    }
    node *removenode(node *&head, int x)
    {
        node *temp1 = head;
        node *prev = nullptr;
        if (x == 1)
        {
            head = head->next;
            delete temp1;
        }
        else
        {
            for (int i = 1; i < x; i++)
            {
                prev = temp1;
                temp1 = temp1->next;
            }
            prev->next = temp1->next;
            delete temp1;
            //  head->next = removenode(head->next, x - 1); // it is for recurt
        }
        return head;
    }
};

int main()
{
    node *head;
    head = nullptr;
    int arr[] = {1, 2, 3, 4, 5, 6};
    head = head->creatlist(arr, 6);
    int x = 5;
    head = head->removenode(head, x);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}