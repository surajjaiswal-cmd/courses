#include <iostream>
#include <vector>
using namespace std;
// 1. finde an element by binary sercha.
// 2. find squre root by binary search.
// 3. in incresing araay fing firt index and last index of x.
// 4. find index of minimume index in array.

//-----------------------------------------------------------------------------------------
// 1. finde an element by binary sercha.
// int main()
// {
//     int n;
//     cout << "enter size of array = ";
//     cin >> n;
//     vector<int> v(n);
//     cout << "enter elements of array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int x;
//     cout << "enter element which have to find  = ";
//     cin >> x;

//     int f = 0;
//     int l = n - 1;
//     int ans = -1;
//     while (f <= l)
//     {
//         int mid = f + (l - f) / 2;
//         if (v[mid] == x)
//         {
//             ans = mid;
//             l = mid - 1;
//         }
//         else if (v[mid] < x)
//             f = mid + 1;
//         else
//             l = mid - 1;
//     }
//    if (ans== -1) cout << "element not fount";
//    else cout << "element  found at index "<< ans;
//     return 0;
// }
//---------------------------------------------------------------
// 2. find squre root by binery
// int
// {
//     int x;
//     cout << "enter number = ";
//     cin >> x;
//     int ans = 0;
//     int f = 1;
//     int l = x;
//     int i = 0;
//     while (f <= l)
//     {
//         int mid = f + (l - f) / 2;
//         if (mid * mid <= x)
//         {
//             ans = mid;
//             f = mid + 1;
//         }
//         else
//             l = mid - 1;
//     }

//     cout << "answer = " << ans;
//     return 0;
// }
//---------------------------------------------------------------------
// 3. in incresing araay fing firt index and last index of x.
// int fristindex(vector<int> v, int x)
// {

//     int f = 0;
//     int l = v.size() - 1;
//     int ans = -1;
//     while (f <= l)
//     {
//         int mid = f + (l - f) / 2;
//         if (v[mid] >= x)
//         {
//             ans = mid;
//             l = mid - 1;
//         }
//         else 
//            { f = mid + 1;}
//     }

//     return ans;
// }
// int lastindex(vector<int> v, int x)
// {

//     int f = 0;
//     int l = v.size() - 1;
//     int res = -1;
//     while (f <= l)
//     {
//         int mid = f + (l - f) / 2;
//         if (v[mid] <= x)
//         {
//             res = mid;
//             f = mid + 1;
//         }
//         else 
//             l = mid - 1;
//     }

//     return res;
// }

// int main()
// {
//     int n;
//     cout << "enter size of array = ";
//     cin >> n;
//     vector<int> v(n);
//     cout << "enter elements of array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int x;
//     cout << "enter element which have to find  = ";
//     cin >> x;
//     int frist = fristindex(v, x);
//     int last = lastindex(v, x);
//     if (frist == -1)
//     {
//         cout << "element not avalabile in list :";
//     }
//     else
//     {
//         cout << "frist index " << frist << " last index " << last;
//     }

//     return 0;
// }
//-----------------------------------------------------------------------------------------
// 4. find index of minimume index in array.
int main()
{
    int n;
    cout << "enter size of array = ";
    cin >> n;
    vector<int> v(n);
    cout << "enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "enter element which have to find  = ";
    cin >> x;

    int f = 0;
    int l = n - 1;
    int ans = -1;
    while (f <= l)
    {
        int mid = f + (l - f) / 2;
        if (v[mid] == x)
        {
            ans = mid;
            l = mid - 1;
        }
        else if (v[mid] < x)
            f = mid + 1;
        else
            l = mid - 1;
    }
   if (ans== -1) cout << "element not fount";
   else cout << "element  found at index "<< ans;
    return 0;
}