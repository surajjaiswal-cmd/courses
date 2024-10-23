#include <iostream>
// 1. print your name 10 time by loop
// 2. print number from 1 to 100.
// 3. print even number from 1 to 100.
// 4. print table of any number given by user.
// 5. print ap 1,5,9,13.....n.
// 6. print gp 2,4,8,16.....n.
// 7. print highest fector of n.
// 8. find n number is composit or prime.
// 9. print odd numbers from 1 to 100 using continue.
// 10. print odd numbers from 1 to 100 using continue.
// 11. count digits of given number.
// 12. find sum of digits of given number.
// 13. reverse digits of given number.
// 14. print fectorial of given n.
// 15. print the ASCII value of upper and lower alfabets.

// --------------------------------------------------------------------------------------
// 1. print your name 10 time by loop
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << "good maorning\n";
//     }
// }
// --------------------------------------------------------------------------------------
// 2. print number from 1 to 100.
// using namespace std;
// int main (){
// for (int  i = 1; i <=100; i++)
// {
//     cout<<i<<endl;
// }
// }
// --------------------------------------------------------------------------------------
// 3. print even number from 1 to 100.
// using namespace std;
// int main (){
// for (int  i = 1; i <=100; i++)
// {if(i%2==0) // for odd if(i%2!=0)
//     cout<<i<<endl;
// }
// }
// --------------------------------------------------------------------------------------
// 4. print table of any number given by user.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number for table = ";
//     cin >> n;
//     int x = n * 10;
//     for (int i = n; i <= x; i = i+n)
//     {
//         // if (i % 2 == 0)
//         cout << i << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 5. print ap 1,5,9,13.......n.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number for table = ";
//     cin >> n;
//     int x = 1;

//     for (int i = 1; i <= n; i++)
//     {

//         cout << x << endl;
//         x += 4;
//     }
// }
// --------------------------------------------------------------------------------------
// 6. print gp 2,4,8,16.....n.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number for table = ";
//     cin >> n;
//     int x = 1;

//     for (int i = 1; i <= n; i++)
//     {

//         cout << x << endl;
//         x +=x;
//     }
// }
// --------------------------------------------------------------------------------------
// 7. print highest fector of n by using break statment .
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;

//     for (int i = n / 2; i >= 1; i--)
//     {
//         if (n % i == 0)
//         {
//             cout << i << "\t";
//             break;
//         }
//     }
// }
// --------------------------------------------------------------------------------------
// 8. find n number is composit or prime.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int count = 0;

//     for (int i = n / 2; i >= 2; i--)
//     {
//         if (n % i == 0)
//         {
//             count++;
//             break;
//         }
//     }
//     if (n == 1)
//         cout << " given number is neither prime or nor composite";
//     else if (count == 0)
//         cout << "the given number " << n << " is  prime";
//     else
//         cout << "the given number " << n << " is  composite";
// }
// --------------------------------------------------------------------------------------
// 9. print odd numbers from 1 to 100 using continue.
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//             continue;
//         cout << i << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 10. print odd numbers from 1 to 100 using continue.
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//             continue;
//         cout << i << endl;
//     }
// }
// --------------------------------------------------------------------------------------
// 11. count digits of given number.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     cout << count;
// }
// --------------------------------------------------------------------------------------
// 12. find sum of digits of given number.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int ld;
//     int sum = 0;
//     while (n != 0) // 5432
//     {
//         ld = n % 10; // 2
//         sum = sum + ld;
//         n = n / 10;
//     }
//     cout << "sum of given number is = " << sum;
// }
// --------------------------------------------------------------------------------------
// 13. reverse digits of given number.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int ld;
//     int sum = 0;
//     while (n != 0) // 5432
//     {
//         ld = n % 10; // 2
//         sum = sum *10+ld;
//         n = n / 10;
//     }
//     cout << "sum of given number is = " << sum;
// }
// --------------------------------------------------------------------------------------
// 14. print fectorial of given number.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int sum = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum * i;
//     }
//     cout << "sum of given number is = " << sum;
// }
// --------------------------------------------------------------------------------------
// 14. print fectorial of given number.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int sum = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum * i;
//     }
//     cout << "\nfectorial of given number is = " << sum;
// }
// --------------------------------------------------------------------------------------
// 15. print the ASCII value of upper and lower alfabets.
using namespace std;
int main()
{
    
    char ch = 'A';
    int n = (int)ch;

    for (int i = 1; i <= 60; i++)
    {
        cout<<ch<<" = "<<n<<endl;
        ch++;
        n++;
        
    }
}