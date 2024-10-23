#include <iostream>
using namespace std;
// 1. creat circule linked list
// 2. find loop exist or not.
// 3. find the size of loop.
// 4. find loop exist or not and remove if it is.
//===================================================================================================================
// 1. creat circule linked list
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;
//     node(int value) : data(value), next(nullptr), prev(nullptr) {}
// };
// class DDL
// {
// private:
//     node *head;

// public:
//     DDL() : head(nullptr) {}
//     void push(int n)
//     {
//         node *tail = head;
//         if (head == nullptr)
//         {
//             head = new node(n);
//             head->next = head;
//             head->prev = head;
//         }
//         else
//         {
//             while (tail->next != head)
//             {
//                 tail = tail->next;
//             }

//             node *temp = new node(n);
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//             tail->next=head;
//             head->prev=tail;
//         }
//     }

//     void show()
//     {
//         node *temp = head;
//         if (temp == nullptr)
//         {
//             cout << "List is empty.\n";
//             return;
//         }
//         do
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         } while (temp != head);
//         cout << "\n";
//     }
// };
// int main()
// {
//     DDL list;
//    list.push(10);
//    list.push(20);
//    list.push(30);
//    list.push(40);
//    list.push(50);
//    list.push(60);
//    list.show();

//     return 0;
// }
// //==============================================================================================
// // 2. find loop exist or not.
// struct node
// {
//     int data;
//     node *next;
//     node *pre;
//     node(int x) : data(x), next(nullptr), pre(nullptr) {}
// };
// bool findloop(node *head)
// {
//     node *slow = head;
//     node *fast = head;
//     while (fast && fast->next)
//     {
//         count++;
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = head->next;
//     if (findloop(head))
//         cout << "loop exist :";
//     else
//         cout << "loop not exist ";

//     return 0;
// }
//==============================================================================================
// 3. find the size of loop.
// struct node
// {
//     int data;
//     node *next;
//     node *pre;
//     node(int x) : data(x), next(nullptr), pre(nullptr) {}
// };
// int loopsize(node *head)
// {
//     int count = 0; // for count nuber of node in loop
//     node *slow = head;
//     node *fast = head;
//     while (fast && fast->next)
//     {
//         count++;
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             return count;
//         }
//     }
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next =head;
//     int res = loopsize(head);
//     if (res)
//         cout << "size of loop = " << res;
//     else
//         cout << "no loop exist :";

//     return 0;
// }
//==============================================================================================
// 4. find loop exist or not and remove if it is.
struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(nullptr){}
};
void removeloop(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    if (slow != fast)
        return;
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    while (slow->next!=fast)
    {
        slow = slow->next;
    }
    slow->next=nullptr;
    
    
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head->next;
    removeloop(head);
    return 0;
}


