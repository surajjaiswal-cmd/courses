#include <iostream>
using namespace std;

// 1. delete a node from start in linkd list.
// 2. delete end node in linkd list.
// 3. delete a perticuller node from linkdlist.
//=============================================================================================
// 1. delete a node from start in linkd list.
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
//     void deletfrist()
//     {
//         if (head)
//         {
//             node *first = head;
//             head = head->next;
//             delete first;
//             if (head)
//                 head->prev = nullptr;
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
//     list.insertinend(50);
//     cout << "DDL \n";
//     list.showdata();
//     list.deletfrist();
//     cout << "DDL after frist delete \n";
//     list.showdata();

//     return 0;
// }
//=============================================================================================
// 2. delete end node in DLL.
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

//     void deletend()
//     {
//         if (head)
//         {
//             if (head->next == nullptr)
//             {
//                 delete head;
//                 head = nullptr;
//             }
//             else
//             {
//                 node *tail = head;
//                 while (tail->next)
//                 {
//                     tail = tail->next;
//                 }
//                 tail->prev->next = nullptr;
//                 delete tail;
//             }
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
//     list.insertinend(50);
//     cout << "DDL \n";
//     list.showdata();
//     list.deletend();
//     cout << "DDL after last delete \n";
//     list.showdata();

//     return 0;
// }
//=============================================================================================
// 3. delete a perticuller node from linkdlist.
class node
{
public:
    int value;
    node *next;
    node *prev;
    node(int n) : value(n), next(nullptr), prev(nullptr) {}
};
class linkdlist
{
private:
    node *head;

public:
    linkdlist() : head(nullptr) {}

    void insertinfrist(int n)
    {
        if (head == nullptr)
        {
            head = new node(n);
        }
        else
        {
            node *temp = new node(n);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    void insertinend(int n)
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

    void deletx(int x)
    {
        if (x == 1)

        {
            node *curunt = head;
            head = head->next;
            head->prev = nullptr;
            delete curunt;
        }
        else
        {
            node *tail = head;
            for (int i = 1; i < x; i++)
            {
                tail = tail->next;
            }
            if (tail == nullptr)
                return;
            if (tail->next == nullptr)
            {
                tail->prev->next = nullptr;
                delete tail;
            }
            else
            {
                tail->prev->next = tail->next;
                tail->next->prev = tail->prev;
                delete tail;
            }
        }
    }
    void showdata()
    {
        node *temp = head;
        while (temp)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};
int main()
{
    linkdlist list;
    list.insertinend(40);
    list.insertinfrist(30);
    list.insertinfrist(20);
    list.insertinfrist(10);
    list.insertinend(50);
    cout << "DDL \n";
    list.showdata();
    int x = 5;
    list.deletx(x);
    cout << "DDL after selected x \n";
    list.showdata();

    return 0;
}