#include <iostream>
// --------------------------------------------------------------------------------------
// 1. print pattern
// ****
// ****
// ****
// ****
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 2. print pattern
// 1234
// 1234
// 1234
// 1234
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             cout <<j; // only * ki jagah j ko print krana hai
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 3. print pattern
// 1111
// 2222
// 3333
// 4444
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             cout <<i;// only j ki jahag i print karna hai
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 4. print pattern
// A       B       C       D
// A       B       C       D
// A       B       C       D
// A       B       C       D
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//             char ch = 'A';
//         for (int j = 1; j <= 4; j++)
//         {
//             cout << ch<<" "; // only j ki jahag charector print karna hai
//             ch++;
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 5. print pattern
// A A A A
// B B B B
// C C C C
// D D D D
// using namespace std;
// int main()
// {
//     char ch = 'A';// declaration ko inner loop se bahar karna hai or increemenet bhi
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 6. print pattern
// *
// * *
// * * *
// * * * *
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* "; // number ke liye * ki jagah j ko print krana hoga bas.
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 7. print pattern
// 1
// A B
// 1 2 3
// A B C D
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         if (i % 2 == 0)
//         {
//             char ch = 'A'; // declaration ko inner loop se bahar karna hai or increemenet bhi
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << ch << " ";
//                 ch++;
//             }
//         }
//         else
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 8. print pattern
// * * * *
// * * *
// * *
// *
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = i; j <= 4; j++)
//         {
//             cout << "* "; // number ke liye * ki jagah j ko print krana hoga bas.
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 9. print pattern
// 1
// 13
// 135
// 1357
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << a;
//             a += 2;
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 10. print pattern
// 1
// 23
// 456
// 78910
// using namespace std;
// int main()
// {int a = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<a ;
//             a++;
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 11. print pattern
// 1
// 23
// 456
// 78910
// using namespace std;
// int main()
// {int a = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<a ;
//             a++;
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 12. print pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//                 cout << "1 ";
//             else
//                 cout << "0 ";
//         }

//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 13. print pattern
//     *
//     *
// * * * * *
//     *
//     *
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number an odd numbr = ";
//     cin >> n;
// if (size % 2 == 0) {

//         cout << "please enter an odd number";
//         return 1;
//     }

//     int x = n / 2 + 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == x || j == x)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }

//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 14. print pattern
// * * * * * * *
// *           *
// *           *
// * * * * * * *
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number of colume = ";
//     cin >> n;
//     int x;
//     cout << "enter number of rows = ";
//     cin >> x;

//     for (int i = 1; i <= x; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == x || j == 1 || j == n)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }

//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 15. print pattern
//    *   *
//     * *
//      *
//     * *
//    *   *
// using namespace std;
// int main()
// {
//     int n;
//     cout << "inter number an odd number = ";
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "please enter an odd number";
//         return 1;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j || j ==(n+1-i))
//                 cout << "*";
//             else
//                 cout << " ";
//         }

//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 16. print pattern
//    *
//   **
//  ***
// ****
// using namespace std;
// int main()
// {
//     int n;
//     cout << "inter number = ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= (n - 1); j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "*"; // number ke liye * ki jagah k ko print krana hoga bas.
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 16. print pattern
//    ****
//   ****
//  ****
// ****
// using namespace std;
// int main()
// {
//     int n;
//     cout << "inter number = ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= (n - 1); j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= n; k++)
//         {
//             cout << "*"; // number ke liye * ki jagah k ko print krana hoga bas.
//         }
//         cout << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 16. print pattern
//     *
//   * * *
// * * * * *
//   * * *
//     *
using namespace std;
int main()
{
    int n;
    cout << "inter number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= (n - 1); j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        for (int l = 2; l <= i; l++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <=(i-1); j++)
        {
            cout << "  ";
        }
         for (int k = i; k <= n; k++)
        {
            cout << "* ";
        }
        for (int l = i; l <= (n-1); l++)
        {
            cout << "* ";
        }

        
        cout << endl;
    }
}