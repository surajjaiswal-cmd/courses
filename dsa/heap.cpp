#include <iostream>
using namespace std;
// 1. creat a max heap
// 2.  delete  a element from maxheap.
// 3. creat a minheap and also add delete function
// 4. build a maxheap by given array.
//=====================================================================================
// creat a max heap
// class maxheap
// {
//     int *arr;
//     int size;
//     int total_size;

// public:
//     maxheap(int n)
//     {
//         arr = new int[n];
//         size = 0;
//         total_size = n;
//     }
//     void insert(int value)
//     {
//         if (size == total_size)
//         {
//             cout << "heap is over flow" << endl;
//             return;
//         }
//         arr[size] = value;
//         int index = size;
//         int parent = (index - 1) / 2;
//         size++;
//         while (index > 0 && arr[parent] < arr[index])
//         {
//             swap(arr[index], arr[parent]);
//             index = parent;
//             parent = (index - 1) / 2;
//         }
//     }
//     void show()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     maxheap h1(7);
//     h1.insert(10);
//     h1.insert(20);
//     h1.insert(30);
//     h1.insert(40);
//     h1.insert(50);
//     h1.insert(60);
//     h1.insert(70);
//     h1.insert(80);

//     h1.show();

//     return 0;
// }
//=====================================================================================
// 2. delete  a element from maxheap.
// class maxheap
// {
//     int *arr;
//     int size;
//     int total_size;

// public:
//     maxheap(int n)
//     {
//         arr = new int[n];
//         size = 0;
//         total_size = n;
//     }
//     void insert(int value)
//     {
//         if (size == total_size)
//         {
//             cout << "heap is over flow" << endl;
//             return;
//         }
//         arr[size] = value;
//         int index = size;
//         int parent = (index - 1) / 2;
//         size++;
//         while (index > 0 && arr[parent] < arr[index])
//         {
//             swap(arr[index], arr[parent]);
//             index = parent;
//             parent = (index - 1) / 2;
//         }
//     }
//     void heapify(int index)
//     {
//         int largest = index;
//         int left = 2 * index + 1;
//         int right = 2 * index + 1;
//         if (left < size && arr[index] < arr[left])
//             largest = left;
//         if (right < size && arr[index] < arr[right])
//             largest = right;

//         if (largest != index)
//         {
//             swap(arr[index], arr[largest]);
//             heapify(largest);
//         }
//     }
//     void remove()
//     {
//         if (size == 0)
//         {
//             cout << "heap under flow";
//             return;
//         }
//         cout << arr[0] << " deleted frome the list\n";
//         arr[0] = arr[size - 1];
//         size--;
//         if (size == 0)
//             return;
//         heapify(0);
//     }
//     void show()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     maxheap h1(7);
//     h1.insert(10);
//     h1.insert(20);
//     h1.insert(30);
//     h1.insert(40);
//     h1.insert(50);
//     h1.insert(60);
//     h1.insert(70);
//     h1.insert(80);
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();

//     return 0;
// }
//====================================================================================================
// 3. creat a minheap and also add delete function
// class minheap
// {
//     int *arr;
//     int size;
//     int total_size;

// public:
//     minheap(int n)
//     {
//         arr = new int(n);
//         size = 0;
//         total_size = n;
//     }
//     void insert(int value)
//     {
//         if (size == total_size)
//         {
//             cout << "heap overflow" << endl;
//             return;
//         }
//         arr[size] = value;
//         int index = size;
//         int parent = (index - 1) / 2;
//         size++;
//         if (index > 0 && arr[index] < arr[parent])
//         {
//             swap(arr[index], arr[parent]);
//             index = parent;
//             parent = (index - 1) / 2;
//         }
//     }
//     void heapify(int index)
//     {
//         int small = index;
//         int left = 2 * index + 1;
//         int right = 2 * index + 2;
//         if (left < size && arr[left] < arr[small])
//             swap(arr[left], arr[small]);
//         if (right < size && arr[right] < arr[small])
//             swap(arr[right], arr[small]);

//         if (small != index)
//         {
//             swap(arr[index], arr[small]);
//             heapify(small);
//         }
//     }
//     void remove()
//     {
//         if (size == 0)
//         {
//             cout << "heap is underflow" << endl;
//             return;
//         }
//         cout << arr[0] << " delete succesfull\n";
//         arr[0] = arr[size - 1];
//         size--;
//         if (size == 0)
//             return;
//         heapify(0);
//     }
//     void show()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     minheap h1(7);
//     h1.insert(10);
//     h1.insert(20);
//     h1.insert(30);
//     h1.insert(40);
//     h1.insert(50);
//     h1.insert(60);
//     h1.insert(70);
//     h1.insert(80);
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();
//     h1.show();
//     h1.remove();

//     return 0;
// }
//===========================================================================================
// 4. build a maxheap and minheap by given array.
#include <vector>

void maxheapify(int arr[], int size, int i)
{
    int large = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    // to conver mean heap change only(>)to(<)
    // and change name frome large tto small.
    if (arr[left] < size && arr[left] > arr[large])

        large = left;
    if (arr[right] < size && arr[right] > arr[large])
        large = right;
    if (large != i)
    {
        swap(arr[i], arr[large]);
        maxheapify(arr, large, i);
    }
}

void buildheap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxheapify(arr, n, i);
    }
}
void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {30, 25, 34, 66, 73, 1, 2, 43, 5, 34, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    buildheap(arr, size);
    show(arr, size);

    return 0;
}