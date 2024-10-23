#include <iostream>
using namespace std;
// 1. inplementaion of inbulid function by array.
// 2. inplementaion of inbulid function by linked list.
// 3. inplementaion of queue without class.
// 4. print all element in queue.
// 5. queue reverse by aaray.
// 6. queue reverse by stack.
// 7. reverse frist k element in queue.
// 8. time needed to buy ticket.
// 9. point all number in every windows size of k.
//=========================================================================================================================
// 1. inplementaion of inbulid function by array.
// class queue
// {
//     int *arr;
//     int front, end, size;

// public:
//     queue(int n)
//     {
//         arr = new int[n];
//         front = -1;
//         end = -1;
//         size = n;
//     }
//     bool empty()
//     {
//         return front == -1;
//     }
//     bool full()
//     {
//         return (end + 1) % size == front;
//     }
//     void push(int a)
//     {
//         if (empty())
//         {
//             front = end = 0;
//             arr[0] = a;
//             cout << a << " pushed in Queue\n";
//         }
//         else if (full())
//         {
//             cout << "Queue overflow\n";
//             return;
//         }
//         else
//         {
//             end = (end + 1) % size;
//             arr[end] = a;
//             cout << a << " pushed in Queue\n";
//         }
//     }
//     void pop()
//     {
//         if (empty())
//         {
//             cout << "Queue underflow\n";
//             return;
//         }
//         else
//         {
//             if (front == end)
//             {
//                 cout << arr[front] << " poped succesfully\n";
//                 front = end = -1;
//             }
//             else
//             {
//                 cout << arr[front] << " poped succesfully\n";
//                 front = (front + 1) % size;
//             }
//         }
//     }
//     int frist()
//     {
//         if (empty())
//         {
//             cout << "Queue is empty \n";
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
// };
// int main()
// {
//     queue list(5);
//     list.push(10);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.pop();
//     list.push(60);
//     list.pop();
//     list.push(70);
//     int starting = list.frist();
//     if (!list.empty())
//         cout << "frist element in Queue is = " << starting << endl;
//     return 0;
// }
//===================================================================================================================
// 2. inplementaion of inbulid function by linked list.
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int n) : data(n), next(nullptr) {}
// };
// class Queuse
// {
// private:
//     int size;
//     node *frist;
//     node *end;

// public:
//     Queuse()
//     {
//         size = 0;
//         frist = nullptr;
//         end = nullptr;
//     }
//     bool empty()
//     {
//         return frist == nullptr;
//     }
//     void push(int a)
//     {

//         if (empty())
//         {
//             frist = new node(a);
//             end = frist;
//             size++;
//             cout << a << " pushed in Queue\n";
//         }
//         else
//         {

//             end->next = new node(a);
//             if (end == nullptr)
//             {
//                 cout << "queue is overflow heep memory full \n";
//                 return;
//             }
//             end = end->next;
//             size++;
//             cout << a << " pushed in Queue\n";
//         }
//     }
//     void pop()
//     {
//         if (empty())
//         {
//             cout << "Queue underloded\n";
//             return;
//         }
//         else
//         {
//             node *temp = frist;
//             cout << temp->data << " poped succesfully\n";
//             frist = frist->next;
//             delete temp;
//             size--;
//         }
//     }
//     int start()
//     {
//         if (frist == nullptr)
//         {
//             cout << "stack is empaty\n";
//             return -1;
//         }
//         else
//             return frist->data;
//     }
//     int volume()
//     {
//         if (frist == nullptr)
//         {
//             cout << "stack is empaty\n";
//             return -1;
//         }
//         else
//             return size;
//     }
// };
// int main()
// {
//     Queuse list;
//     list.push(10);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.pop();
//     list.pop();
//     list.push(50);
//     list.push(60);
//     int start = list.start();
//     if (!list.empty())
//         cout << "frist element of Queue is = " << start << endl;
//     int size = list.volume();
//     if (!list.empty())
//         cout << "size of list = " << size << endl;
//     return 0;
// }
//=====================================================================================================
// 3. inplementaion of queue without class.
// #include <queue>
// int main()
// {
//     queue<int> list;
//     list.push(10);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.pop();
//     list.pop();
//     list.push(50);
//     list.push(60);
//     cout << "frist element of Queue is = " << list.front() << endl;
//     cout << "last element of Queue is = " << list.back() << endl;
//     cout << "size of list = " << list.size() << endl;
//     return 0;
// }

// //=====================================================================================================
// // 4. print all element in queue.
// #include <queue>
// int main()
// {
//     queue<int> list;
//     list.push(10);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.push(60);
//     int n = list.size();
//    while (n--)
//    {
//     cout<<list.front()<<endl;
//     list.push(list.front());// adding this line to add elemnt again in queue
//     list.pop();
//    }

//     return 0;
// }
//=====================================================================================================
// 5. queue reverse by array.
// #include <queue>
// int main()
// {
//     queue<int> list;
//     list.push(10);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.push(60);
//     int n = list.size();
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = list.front();
//         list.pop();
//     }
//     for (int i = n; i > 0; i--)
//     {
//         list.push(arr[i - 1]);
//     }
//     while (!list.empty())
//     {
//         cout << list.front() << " ";
//         list.pop();
//     }

//     return 0;
// }
//=====================================================================================================
// 6. queue reverse by stack.
// #include <queue>
// #include <stack>
// int main()
// {
//     queue<int> list;
//     list.push(10);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.push(60);
//     stack<int> st;
//     while (!list.empty())
//     {
//         st.push(list.front());
//         list.pop();
//     }
//     while (!st.empty())
//     {
//        list.push(st.top());b
//         st.pop();
//     }
//       while (!list.empty())
//     {
//         cout << list.front() << " ";
//         list.pop();
//     }

//     return 0;
// }
// //=====================================================================================================
// // 7. reverse frist k element in queue.
// #include <queue>
// #include <stack>
// void show(queue<int> &q)
// {
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
// }
// int main()
// {
//     queue<int> list;
//     list.push(10);
//     list.push(20);
//     list.push(30);
//     list.push(40);
//     list.push(50);
//     list.push(60);
//     list.push(70);
//     list.push(80);
//     stack<int> st;
//     int k = 4;
//     while (k--)
//     {
//         st.push(list.front());
//         list.pop();
//     }
//     int n = list.size();
//     cout << n << endl;
//     while (!st.empty())
//     {
//         list.push(st.top());
//         st.pop();
//     }
//     while (n--)
//     {
//       list.push(list.front());
//       list.pop();
//     }

//     show(list);

//     return 0;
// }
// //=====================================================================================================
// // 8. time needed to buy ticket.
// #include <queue>
// int main()
// {
//     queue<int> list;
//     int arr[] = {1, 5, 2, 3, 7};
//     for (int i = 0; i < 5; i++)
//     {
//         list.push(i);
//     }
//     int k = 2;
//     int time = 0;
//     while (arr[k] != 0)
//     {
//         arr[list.front()]--;
//         if(arr[list.front()])
//         list.push(list.front());
//         list.pop();
//         time++;
//     }
//     cout<<time<<endl;

//     return 0;
// }
//=====================================================================================================
// 9. point all number in every windows size of k.
// #include <queue>
// void show(queue<int> q)
// {
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
// }
// int main()
// {
//     queue<int> list;
//     int arr[] = {1, 5, 2, 3, 7};
//     int k = 3;
//     for (int i = 0; i < k - 1; i++)
//     {
//         list.push(arr[i]);
//     }
//     for (int i = k - 1; i < 5; i++)
//     {
//         list.push(arr[i]);
//         show(list);
//         list.pop();
//     }

//     return 0;
// }
//=====================================================================================================
// 10. find negetive intiger in every windows size of k.
#include <queue>
#include <vector>
int show(queue<int> q)
{
    while (!q.empty())
    {
        if (q.front() < 0)
            return q.front();
        q.pop();
    }
    return 0;
}
int main()
{
    queue<int> list;
    vector<int> vc;
    int arr[] = {1, -2, -6, 3, 7, 4, -5, -8, -9};
    int k = 3;
    int n = 9;
    for (int i = 0; i < k - 1; i++)
    {
        if (arr[i] < 0)
        {
            list.push(i);
        }
    }
    for (int i = k - 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            list.push(i);
        }
        if (list.empty())
            vc.push_back(0);
        else
        {
            if (list.front() <= i - k)
                list.pop();
            if (list.empty())
                vc.push_back(0);
            else
                vc.push_back(arr[list.front()]);
        }
    }
    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << " ";
    }
    cout << endl;

    return 0;
}
