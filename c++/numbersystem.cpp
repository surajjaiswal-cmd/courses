#include <iostream>
// 1. convert binary to desimal number.
// 2. convert desimal to binary number.

//-------------------------------------------------------------------
// 1. convert binary to desimal number
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter a number = ";
//     cin >> n; // 1101
//     int ld;
//     int sum = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         ld = n % 10;
//         sum += ld * pow(2, i);
//         n /= 10;
//         i++;
//     }
//     cout << sum;
// }
//-------------------------------------------------------------------
// 2. convert desimal to binary number
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n; // 1101
    int binary = 0;
    int base = 1;

    while (n > 0)
    {
        int ld = n % 2;
        binary += ld * base;
        n /= 2;
        base *= 10;
    }

    cout << "Binary representation: " << binary << endl;
    return 0;
}
