#include <iostream>
// 1. even or odd
// 2. print the absolute value.
// 3. buying and selling price mai defrance and loss ya profit huaa ye btao.
// 4. find enter number 3 digits or not.
//--------------------------------------------------------------------------------------------------------
// 1. even or odd
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter a number = ";
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "even number";
//     else
//         cout << "odd nummber";
// }

//--------------------------------------------------------------------------------------------------------
// 2. print the absolute value.
// using namespace std;
// int main()
// {

//     int x;
//     cout << "enter number = ";
//     cin >> x;
//     if (x >= 0)
//         cout << x;
//     else
//         cout << -x;
// }
//--------------------------------------------------------------------------------------------------------
// // 3. buying and selling price mai defrance and loss ya profit huaa ye btao.
// using namespace std;
// int main()
// {

//     int bp, sp, p, l;
//     cout << "enter buying price = ";
//     cin >> bp;
//     cout << "enter selling price = ";
//     cin >> sp;
//     if (bp == sp)
//         cout << "no profit and no loss";
//     else if (bp < sp)
//     {
//         p = sp - bp;
//         cout << "total profit = " << p;
//     }
//     else{
//         l = bp - sp;
//         cout << "total loss = " << l;
//     }
// }
//--------------------------------------------------------------------------------------------------------
// 4. find enter number 3 digits or not.
using namespace std;
int main()
{

    int x;
    cout << "enter number = ";
    cin >> x;
    if (99 < x && x < 1000)
        cout << x << " it is three digits number";
    else
        cout << x << " it is not three digits number";
}