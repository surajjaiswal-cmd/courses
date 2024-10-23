#include <iostream>
// 1. parmotation of n.
// 2.pascal triangle.
// --------------------------------------------------------------------------------------
// 1. parmotation of n
// using namespace std;
// int fect(int a)
// {
//     int f = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         f *= i;
//     }
//     return f;
// }
// int main()
// {
//     int n;
//     cout << "inter value of n = ";
//     cin >> n;
//     int r;
//     cout << "inter value of r = ";
//     cin >> r;

//     int a = fect(n);
//     int b = fect(n - r);
//     cout << a / b;
// }
// --------------------------------------------------------------------------------------
// 1. pascle  triangle
using namespace std;
int fect(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f *= i;
    }
    return f;
}
int ans(int a, int b)
{
    return fect(a) / (fect(b) * fect(a - b));
}
int main()
{
    int n;
    cout << "inter number = ";
    cin >> n;

    for (int i = 0; i <= n; i++)

    {
        for (int k = i; k <= n; k++)
        {
            cout << " ";
        }
        // cout << "1 ";
        for (int j = 0; j <= i; j++)
        {

            cout << ans(i, j) << " ";
        }
        cout << endl;
    }
}
