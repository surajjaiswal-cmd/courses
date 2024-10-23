#include <iostream>
using namespace std;
// 1. remove duplicate from DDL.
// 2. sort a DDl which node have 0,1,2 node.

//==========================================================================================
// 1. remove duplicate from DDL.
// #include <vector>
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
//     // 1st methode to remove duplicate by using array
//     // void removeduplicat()
//     // {
//     //     vector<int> arr;
//     //     node *temp = head;
//     //     while (temp)
//     //     {
//     //         if (arr.empty() || arr.back() != temp->data)
//     //         {
//     //             arr.push_back(temp->data);
//     //         }
//     //         temp = temp->next;
//     //     }
//     //     while (head)
//     //     {
//     //         node *toDelete = head;
//     //         head = head->next;
//     //         delete toDelete;
//     //     }

//     //     node *tail = nullptr;
//     //     for (int i = 0; i < arr.size(); i++)
//     //     {
//     //         if (head == nullptr)
//     //         {
//     //             head = new node(arr[i]);
//     //             tail=head;
//     //         }
//     //         else
//     //         {
//     //             node *temp = new node(arr[i]);
//     //             temp->prev = tail;
//     //             tail->next = temp;
//     //             tail = temp;
//     //         }
//     //     }
//     // }

//     // second methode to remove duplicate node
//     void removeduplicat()
//     {
//         node *tail = head->next;
//         node *pre = head;
//         while (tail)
//         {
//             if (tail->data == pre->data)
//             {
//                 pre->next = tail->next;
//                 delete tail;
//                 tail = pre->next;
//             }
//             else
//             {
//                 pre = pre->next;
//                 tail = tail->next;
//             }
//         }
//     }

//     void show()
//     {
//         node *temp = head;
//         while (temp)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout<<"\n";
//     }
// };
// int main()
// {
//     DDL list;
//     list.push(10);
//     list.push(10);
//     list.push(20);
//     list.push(20);
//     list.push(30);
//     list.push(30);
//     list.push(30);
//     list.show();
//     list.removeduplicat();
//     cout<<"after remove duplicate data \n";
//     list.show();
//     return 0;
// }
//==========================================================================================================================
// 2. sort a DDl which node have 0,1,2 node.
#include <vector>
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value) : data(value), next(nullptr), prev(nullptr) {}
};
class DDL
{
private:
    node *head;

public:
    DDL() : head(nullptr) {}
    void push(int n)
    {
        node *tail = head;
        if (head == nullptr)
        {
            head = new node(n);
        }
        else
        {
            while (tail->next != nullptr)
            {
                tail = tail->next;
            }

            node *temp = new node(n);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    void sortlist()
    {
        int count0 = 0, count1 = 0, count2 = 0;
        node *tail = head;
        while (tail)
        {
            if (tail->data == 0)
            {
                count0++;
                tail = tail->next;
            }
            else if (tail->data == 1)
            {
                count1++;
                tail = tail->next;
            }
            else
            {
                count2++;
                tail = tail->next;
            }
        }

        tail = head;
        while (count0--)
        {
            tail->data = 0;
            tail = tail->next;
        }
        while (count1--)
        {
            tail->data = 1;
            tail = tail->next;
        }
        while (count2--)
        {
            tail->data = 2;
            tail = tail->next;
        }
    }

    void show()
    {
        node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};
int main()
{
    DDL list;
    int n;
    cout << "enter the size of list = ";
    cin >> n;
    int arr[n];
    cout << "enter element of array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        list.push(arr[i]);
    }
    list.show();
    list.sortlist();
    cout << "sorted list :\n";
    list.show();
    return 0;
}