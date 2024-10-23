#include <iostream>
// 1. fectorial of n.
// 2. calculate a raise to the power b by recursion.
// 3. febonacci serise upto n.
// --------------------------------------------------------------------------------------
// 1. fectorial  of n
using namespace std;
int fect(int n)
{
    if (n == 1)
        return 1;
    return n * fect(n - 1);
}
int main()
{
    int n;
    cout << "enter number = ";
    cin >> n;
    cout << fect(n);
}
// --------------------------------------------------------------------------------------
// 2. calculate a raise to the power b by recursion.
// using namespace std;
// int pow(int n, int p)
// {
//     if (p == 0)
//         return 1;
//     int ans = 1;
//     ans = 1 * n* pow(n, (p - 1));
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int p;
//     cout << "enter power = ";
//     cin >> p;
//     cout << pow(n, p);
// }
// --------------------------------------------------------------------------------------
// 3. febonacci serise upto n.
using namespace std;
int  fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cout << "enter number = ";
    cin >> n;

    cout << fibo(n);
}
  