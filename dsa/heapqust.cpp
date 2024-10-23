#include <iostream>
using namespace std;
// 1. calculate the size of a heap.

//=====================================================================================
// 1. calculalte the size of  a heap.

int calculatehight(int arr[], int size)
{
    if (size == 0)
        return 1;
    int hight = 0;
    while (size > 1)
    {
        size = size / 2;
        hight++;
    }
    return hight;
}

int main()
{
    int arr[] = {3, 5, 6, 8, 2, 4, 56, 34, 3, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int hight = calculatehight(arr, size);
    cout << "size of heap = " << hight;

    return 0;
}