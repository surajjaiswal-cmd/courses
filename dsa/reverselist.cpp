#include <iostream>
using namespace std;
// 1. reverse a value of linked list.
// 2. reverse link of linked list and head also.
// 3. find middel node and print of linkd list.

//================================================================================================
// 1. reverse a value of linked list.
// #include <vector>
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
//         {
//             while (tail->next != nullptr)
//             {
//                 tail = tail->next;
//             }
//             tail->next = new node(n);
//         }
//     }

//     void reverselist()
//     {
//         vector<int> arr;
//         node *temp = head;
//         while (temp != nullptr)
//         {
//             arr.push_back(temp->value);
//             temp = temp->next;
//         }
//         int i = arr.size() - 1;
//         temp = head;
//         while (temp != nullptr)
//         {
//             temp->value = arr[i];
//             i--;
//             temp = temp->next;
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
//         cout << "NULL";
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
//     list.reverselist();
//     list.showdata();

//     return 0;
// }
//==========================================================================================================
// 2. reverse link of linked list and head also;
// #include <vector>
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
//         {
//             while (tail->next != nullptr)
//             {
//                 tail = tail->next;
//             }
//             tail->next = new node(n);
//         }
//     }

//     void reverselink()
//     {
//         node *pre = nullptr;
//         node *curunt = head;
//         node *age = nullptr;
//         while (curunt)
//         {
//             age = curunt->next;
//             curunt->next = pre;
//             pre = curunt;
//             curunt = age;
//         }
//         head = pre;
//     }

//     void showdata()
//     {
//         node *temp = head;
//         while (temp)
//         {
//             cout << temp->value << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL";
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
//     list.reverselink();
//     list.showdata();

//     return 0;
// }
//==========================================================================================================
// 3. find middel node and print of linkd list.
// #include <vector>
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
//         {
//             while (tail->next != nullptr)
//             {
//                 tail = tail->next;
//             }
//             tail->next = new node(n);
//         }
//     }

//     node *findcenter()
//     {
// frist methode isme 2 baar travell karna pad rha hai.
/*node *temp = head;
int c = 0;
while (temp)
{
    c++;
    temp = temp->next;
}
c /= 2;
int i = 1;
temp = head;
while (i <= c)
{
    temp = temp->next;
    i++;
}
return temp;
*/
// second methode perfect methode;
//         node *slow = head;
//         node *fast = head;
//         while (fast && fast->next)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//         }
//     void showdata()
//     {
//         node *temp = head;
//         while (temp)
//         {
//             cout << temp->value << " ";
//             temp = temp->next;
//         }
//         cout << endl;
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
//     // list.insertinend(70);
//     list.showdata();
//     node *centerpoint = list.findcenter();
//     cout << "center point = ";
//     cout << centerpoint->value;

//     return 0;
// }
