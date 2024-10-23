#include <iostream>
using namespace std;
// 1. print the sum of all digits of given number buy recurtion.
// 2. find q to the power q but recurtion
// 3. print all element of array buy recurtion.
// 4. print mex element of array buy recurtion.
// 5. print sum of  element of array buy recurtion.
// 6. remove all lettre a from a string by recurtion.
// 7. print teble on n upto x by recurtion.
// 8. fint the sun upto n number with alternet signs.
// 9. fint the hcf of x and y.

//---------------------------------------------------------------------
// 1. print the sum of all digits of given number buy recurtion.
// int sum_of_digits(int n) // 8796
// {
//     if (n == 0 || n == 1)
//         return n;
//     return sum_of_digits(n / 10) + (n % 10);
// }
// int main()
// {
//     int n;
//     cout << "enter numbr = ";
//     cin >> n;
//     int res = sum_of_digits(n);
//     cout << "sum of digits = " << res;
//     return 0;
// }
// //---------------------------------------------------------------------
// // 2. find q to the power q but recurtion
// int pow(int n, int p)
// {
//     if (p == 0)
//         return 1; // n^0 is 1
//     if (p == 1)
//         return n; // n^1 is n

//     if (p % 2 == 0)
//     {
//         int half = pow(n, p / 2);
//         return half * half; // (n^(p/2))^2
//     }
//     else
//     {
//         int half = (pow(n, (p - 1) / 2));
//         return n * half * half; // n * n^(p-1)
//     }
// }
// int main()
// {
//     int n, p;
//     cout << "enter numbr and power = ";
//     cin >> n >> p;

//     int res = pow(n, p);
//     cout << n << "^" << p << " = " << res;
//     return 0;
// }
//-------------------------------------------------------------------------------
// 3. print all element of array buy recurtion.
// void print(int arr[], int n, int ind = 0)
// {
//     if (ind == n)
//         return;
//     cout << arr[ind]<<" ";
//     print(arr, n, ind + 1);
// }
// int main()
// {
//     int arr[] = {3, 4, 2, 5, 6, 4};
//     int n = 6;
//     print(arr, n);
//     return 0;
// }
//-------------------------------------------------------------------------------
// 4. print max element of array buy recurtion.
// int mex(int arr[], int n, int ind = 0)
// {
//     if (ind == n - 1)
//         return arr[0];
//     return  max(arr[ind], mex(arr, n, ind + 1));
// }
// int main()
// {
//     int arr[] = {3, 4, 2, 7, 6, 4};
//     int n = 6;

//     cout << "max element = " << mex(arr, n);
//     return 0;
// }
//-------------------------------------------------------------------------------
// 5. print sum of  element of array buy recurtion.
// int sum(int arr[], int n, int idx = 0)
// {
//     if (idx == n - 1)
//         return arr[idx];
//     return arr[idx] + sum(arr, n, idx + 1);
// }
// int main()
// {
//     int arr[] = {3, 4, 2, 7, 6, 8};
//     int n = 6;

//     cout << "sum of element = " << sum(arr, n);
//     return 0;
// }
//-------------------------------------------------------------------------------
// 6. remove all lettre a from a string by recurtion.
// string removea(string &s, int n, int idx = 0)
// {
//     if (idx == n)
//         return " ";
//     string c = " ";
//     c += s[idx];
//     return ((s[idx] == 'a') ? " " : c) + removea(s, n, idx + 1);
// }
// int main()
// {
//     string s = "abcdaefa";
//     int n = 8;

//     cout << "answer = " << removea(s, n);
//     return 0;
// }
//-------------------------------------------------------------------------------
// 7. print teble on n upto x by recurtion.
// void table(int n, int x)
// {
//     if (x == 0)
//         return;
//     table(n, x - 1);
//     cout << n * x << " ";
// }
// int main()
// {
//     int n = 16;
//     int x = 7;
//     table(16, 7);
//     return 0;
// }
//-------------------------------------------------------------------------------
// 8. fint the sun upto n number with alternet signs.
// int sum(int n)
// {
//     if (n == 0)
//         return n;
//     return sum(n - 1) + ((n % 2 == 0) ? -n : n);
// }
// int main()
// {
//     int n = 20;
//     cout << "answer = " << sum(n);
//     return 0;
// }
//-------------------------------------------------------------------------------
// 9. fint the hcf of x and y.
// int hcf(int a, int b)
// {
//     if (b > a)
//         return hcf(b, a);
//     if (b == 0)
//         return a;
//     return hcf(b, a % b);
// }
// int main()
// {
//     int n = 20, m = 18;
//     cout << "answer = " << hcf(n, m);
//     return 0;
// }
//-------------------------------------------------------------------------------
// 9. fint the hcf of x and y.
void findx(int arr[], int c, int b, int idx = 0)
{
    if (idx == c)
    {
        cout << "no";
        return;
    }
    else if (b == arr[idx])
    {
        cout << "yes";
        return;
    }
    else
    {
        findx(arr, c, b, idx + 1);
    }
}
int main()
{
    int arr[] = {20, 4, 5, 42, 4, 6, 8};
    int x =sizeof(arr) / sizeof(arr[0]);
    int y = 6;
    findx(arr, x, y);
    return 0;
}
