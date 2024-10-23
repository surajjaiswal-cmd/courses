#include <iostream>
using namespace std;
// 1. swap two number using poiter.

//-------------------------------------------------------------------------
// 1. swap two number using poiter.
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 56;
    int y = 34;
    int *n;
    n = &x;
    int *m;
    m = &y;
    swap(&x, &y);
    cout << "swap value = " << x << " " << y<<endl;
    cout << "swap value by pointer = " << *n << " " << *m;

    return 0;
}
//-------------------------------------------------------------------------
// 1. swap two number using poiter.
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 56;
    int y = 34;
    int *n;
    n = &x;
    int *m;
    m = &y;
    swap(&x, &y);
    cout << "swap value = " << x << " " << y<<endl;
    cout << "swap value by pointer = " << *n << " " << *m;

    return 0;
} 