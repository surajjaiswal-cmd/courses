#include <iostream>
using namespace std;
// 1. implimantaion of deque by linked list.
// 2. implimantaion of deque by array.
// 3. deque implementation.
// 4. sliding window mwximum
//======================================================================================================================
// 1. implimantaion of deque by linked list.

// class dequeue
// {
// public:
//     int value;
//     dequeue *next;
//     dequeue *prev;
//     dequeue(int n) : value(n), next(nullptr), prev(nullptr) {}
// };
// class linkdlist
// {
// private:
//     dequeue *head;
//     dequeue *tail;

// public:
//     linkdlist() : head(nullptr), tail(nullptr) {}

//     void push_front(int n)
//     {
//         if (head == nullptr)
//         {
//             head = tail = new dequeue(n);
//         }
//         else
//         {
//             dequeue *temp = new dequeue(n);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     void push_end(int n)
//     {
//         // dequeue *tail = head;
//         if (head == nullptr)
//         {
//             head = tail = new dequeue(n);
//         }
//         else
//         {
//             while (tail->next != nullptr)
//             {
//                 tail = tail->next;
//             }
//             dequeue *temp = new dequeue(n);
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//     }
//     void pop_front()
//     {
//         // dequeue *tail = head;
//         if (head == nullptr)
//             return;
//         else
//         {
//             dequeue *temp = head;
//             head = head->next;
//             delete temp;
//             if (head)
//                 head->prev = nullptr;
//             else
//                 tail = nullptr;
//         }
//     }
//     void pop_end()
//     {
//         if (head == nullptr)
//             return;
//         else
//         {
//             dequeue *temp = tail;
//             tail = tail->prev;
//             delete temp;
//             if (tail)
//                 tail->next = nullptr;
//             else
//                 head = nullptr;
//         }
//     }
//     int start()
//     {
//         if(head==nullptr)
//         return -1;
//         else
//         return head->value;
//     }
//      int end()
//     {
//         if(head==nullptr)
//         return -1;
//         else
//         return tail->value;
//     }

//     void showdata()
//     {
//         dequeue *temp = head;
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
//     list.push_end(40);
//     list.push_front(30);
//     list.push_front(20);
//     list.push_front(10);
//     list.push_front(5);
//     list.push_end(50);
//     list.push_end(60);
//     list.push_end(70);
//     list.push_front(4);
//     list.showdata();
//     list.pop_front();
//     list.pop_end();
//     list.showdata();
//     cout<<list.start()<<endl;
//     cout<<list.end()<<endl;

//     return 0;
// }
//===========================================================================================================
// 2. implimantaion of dequeue by array.

// class dequeue
// {
//     int *arr;
//     int front, end, size;

// public:
//     dequeue(int n)
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
//     void push_front(int a)
//     {
//         if (empty())
//         {
//             front = end = 0;
//             arr[0] = a;
//             cout << a << " pushed_front in Dequeue\n";
//         }
//         else if (full())
//         {
//             cout << "Dequeue overflow\n";
//             return;
//         }
//         else
//         {
//             front = (front - 1 + size) % size;
//             arr[front] = a;
//             cout << a << " pushed_front in Dequeue\n";
//         }
//     }
//     void push_back(int a)
//     {
//         if (empty())
//         {
//             front = end = 0;
//             arr[0] = a;
//             cout << a << " pushed_back in Dequeue\n";
//         }
//         else if (full())
//         {
//             cout << "Dequeue overflow\n";
//             return;
//         }
//         else
//         {
//             end = (end + 1) % size;
//             arr[end] = a;
//             cout << a << " pushed_back in Dequeue\n";
//         }
//     }

//     void pop_front()
//     {
//         if (empty())
//         {
//             cout << "Dequeue underflow\n";
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
//     void pop_back()
//     {
//         if (empty())
//         {
//             cout << "Dequeue underflow\n";
//             return;
//         }
//         else
//         {
//             if (front == end)
//             {
//                 cout << arr[end] << " poped succesfully\n";
//                 front = end = -1;
//             }
//             else
//             {
//                 cout << arr[end] << " poped succesfully\n";
//                 end = (end - 1 + size) % size;
//             }
//         }
//     }
//     int frist()
//     {
//         if (empty())
//         {
//             cout << "Dequeue is empty \n";
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
//     int last()
//     {
//         if (empty())
//         {
//             cout << "Dequeue is empty \n";
//             return -1;
//         }
//         else
//         {
//             return arr[end];
//         }
//     }
//     void printDeque()
//     {
//         if (empty())
//         {
//             cout << "Deque is empty" << endl;
//             return;
//         }
//         cout << "Deque elements are:\n";
//         for (int i = front; i <= end; (i++) % size)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     dequeue list(6);
//     list.push_back(20);
//     list.push_back(30);
//     list.push_front(10);
//     list.push_back(40);
//     list.push_back(50);
//     list.push_back(60);
//     list.push_back(70);
//     list.pop_front();
//     list.pop_back();
//     int starting = list.frist();
//     if (!list.empty())
//         cout << "frist element in Dequeue is = " << starting << endl;
//     int last = list.last();
//     if (!list.empty())
//         cout << "last element in Dequeue is = " << last << endl;
//     list.printDeque();

//     return 0;
// }
//===============================================================================================================
// 3. deque implementation.
// #include <deque>
// int main()
// {
//     deque<int> list;
//     list.push_back(20);
//     list.push_back(30);
//     list.push_front(10);
//     list.push_back(40);
//     list.push_back(50);
//     list.push_back(60);
//     list.push_back(70);
//     list.pop_front();
//     list.pop_back();
//     int starting = list.front();
//     if (!list.empty())
//         cout << "frist element in Dequeue is = " << starting << endl;
//     int last = list.back();
//     if (!list.empty())
//         cout << "last element in Dequeue is = " << last << endl;

//     return 0;
// }
//=========================================================================================================================
// 4. sliding window mwximum
#include <deque>
int main()
{
    deque<int> Qi;

    int arr[] = {3, 4, 5, 2, 6, 1, 3};
    int k = 4;
    int n = 7;
    for (int i = 0; i < k; i++)
    {
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    for (int i = k; i < n; i++)
    {
        cout << arr[Qi.front()] << " ";

        while ((!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();

        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();

        Qi.push_back(i);
    }

    cout << arr[Qi.front()] << endl;

    return 0;
}
