#include <iostream>
// 1. multiple or two metrix.
// 2. transpose a metrix.
// 3. a shorted metrix is given with 0 and 1 find which row have meximum number or 1.

//---------------------------------------------------------------------------
// // 1. multiple or two metrix.
// using namespace std;
// void getdata(int arr[][100], int a, int b)
// {
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
// }
// void multi(int a[][100], int b[][100], int ans[][100], int x, int y)
// {
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             ans[i][j] = 0;
//             for (int k = 0; k < x; k++)
//             {
//                 ans[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
//     cout << "answer \n";
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             cout << ans[i][j]<<" ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     cout << "enter  row cowlum of frist metrix = ";
//     int r, c;
//     cin >> r >> c;

//     cout << "enter element of frist array\n";
//     int arr1[r][100];
//     getdata(arr1, r, c);

//     cout << "enter  row cowlum of second metrix = ";
//     int x, y;
//     cin >> x >> y;

//     cout << "enter element of second array\n";
//     int arr2[x][100];
//     getdata(arr2, x, y);
//     if (r != y)
//     {
//         cout << "frist row of frist metrix and frist colom of secund metrix not same";
//     }
//     else
//     {
//         int ans[c][100];
//         multi(arr1, arr2, ans, c, y);
//     }

//     return 0;
// }
//-------------------------------------------------------------------------------------
// 2. transpose a metrix.
using namespace std;
void getdata(int arr[][100], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int main()
{
    cout << "enter  row cowlum of metrix = ";
    int r, c;
    cin >> r >> c;
    cout << "enter element of  array\n";
    int arr[r][100];
    getdata(arr, r, c);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
