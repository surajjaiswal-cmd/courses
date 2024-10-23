#include <iostream>
using namespace std;
#include <stack>
// 1. inplementaion of inbulid function by array.
// 2. inplementaion of inbulid function by linked list.
// 3. inplementaion of stack without class.
// 4. revese an char array with the help of stack.
// 5. insert x=2 in frist in stack.
//======================================================================================================================
// 1. inplementaion of inbulid function by array.
// class stack
// {
//     int *arr;
//     int size;
//     int top;

// public:
//     stack(int a)
//     {
//         size = a;
//         top = -1;
//         arr = new int[a];
//     }
//     void push(int n)
//     {
//         if (top == size - 1)
//         {
//             cout << "stack overflow\n";
//             return;
//         }
//         else
//         {
//             top++;
//             arr[top] = n;
//             cout << n << " pushed into stack :\n";
//         }
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "stack underflow\n";
//         }
//         else
//         {
//             cout << arr[top] << " poped from stack\n";
//             top--;
//         }
//     }
//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "stack is empaty\n";
//             return -1;
//         }
//         else
//             return arr[top];
//     }
//     bool isempty()
//     {
//         return top == -1;
//     }
//     int issize()
//     {
//         return top + 1;
//     }
// };
// int main()
// {
//     stack list(5);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.push(60);
//     list.pop();
//     int top = list.peek();
//     cout << "top = " << top << endl;
//     cout << list.isempty() << endl;
//     cout << list.issize() << endl;
//     return 0;
// }
// //=================================================================================================
// // 2. inplementaion of inbulid function by linked list.
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int a) : data(a), next(nullptr) {}
// };
// class stack
// {
//     int size;
//     node *top;

// public:
//     stack()
//     {
//         top = nullptr;
//         size = 0;
//     }
//     void push(int n)
//     {
//         node *temp = new node(n);
//         if (temp == nullptr)
//         {
//             cout << "stack overflode\n";
//         }
//         else
//         {
//         temp->next = top;
//         top = temp;
//         cout << n << " pushed in stack\n";
//         size++;
//         }
//     }
//     void pop()
//     {
//         if (top == nullptr)
//         {
//             cout << "stack underflow\n";
//             return;
//         }
//         else
//         {
//             node *temp = top;
//             cout<<top->data<<" poped from stack\n";
//             top = top->next;
//             delete temp;
//             size--;
//         }
//     }
//     int peek()
//     {
//         if (top == nullptr)
//         {
//             cout << "stack is empaty\n";
//             return -1;
//         }
//         else
//             return top->data;
//     }
//     bool isempty()
//     {
//         return top == nullptr;
//     }
//     int issize()
//     {
//         return size;
//     }
// };
// int main()
// {
//     stack list;
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.push(60);
//     list.pop();
//     int top = list.peek();
//     cout << "top = " << top << endl;
//     cout << list.isempty() << endl;
//     cout << list.issize() << endl;
//     return 0;
// }
// //=================================================================================================
// // 3. inplementaion of stack without class.
// #include<stack>
// int main()
// {
//     stack<int>list;
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.push(60);
//     list.pop();
//     int top = list.top();
//     cout << "top = " << top << endl;
//     cout << list.empty() << endl;
//     cout << list.size() << endl;
//     return 0;
// }
//=================================================================================================
// 4. revese an char array with the help of stack.
// #include <vector>
// int main()
// {
//     vector<char> arr = {'s', 'u', 'r', 'a', 'j'};
//     stack<char> list;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         list.push(arr[i]);
//     }
//     for (int i = 0; !list.empty(); i++)
//     {
//         arr[i] = list.top();
//         list.pop();
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
//=================================================================================================
// 5. insert x=2 in frist in stack.
#include <vector>
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 8};
    stack<int> list;
    for (int i = 0; i < arr.size(); i++)
    {
        list.push(arr[i]);
    }
    stack<int> temp;
    while (!list.empty())
    {
        temp.push(list.top());
        list.pop();
    }
    list.push(2);
    while (!temp.empty())
    {
        list.push(temp.top());
        temp.pop();
    }
    cout << list.size() << endl;
    while (!list.empty())
    {
        cout << list.top() << " ";
        list.pop();
    }
    return 0;
}
