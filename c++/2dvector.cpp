#include <iostream>
#include <vector>
// 1. a shorted metrix is given with 0 and 1 find which row have meximum number or 1.
// 2. rotet a metrix 90 deegre in clockwise.
// 3. Given a m atrix 'a' of dimension n x m and 2 coordinates
//    (11, r1) and (12, r2). Return the sum of the rectangle from
//    (11,r1) to (2, r2).
//----------------------------------------------------------------------------------
// 1. a shorted metrix is given with 0 and 1 find which row have meximum number or 1.
// using namespace std;
// int mexonerow(vector<vector<int>> v)
// {
//     int mexsum = 0;
//     int row = 0;
//     // for (int i = 0; i < v.size(); i++) // frist methud
//     // {
//     //     int sum = 0;
//     //     for (int j = 0; j < v.size(); j++)
//     //     {
//     //         sum += v[i][j];

//     //     }

//     //     if (sum > mexsum)
//     //     {
//     //         row = i+1;
//     //     }
//     // }
//     for (int i = 0; i < v.size(); i++) // second methud for time complexity
//     {
//         int count = 0;
//         for (int j = 0; j < v.size(); j++)
//         {
//             if (v[i][j] == 0)
//                 count++;
//                 else break;;
//         }

//         if (count == mexsum)
//         {
//             row = i+1;
//         }
//     }
//     return row;
// }
// int main()
// {
//     int r, c;
//     cout << "enter row and coloum = ";
//     cin >> r >> c;

//     vector<vector<int>> v(r, vector<int>(c));
//     cout << "Enter elements of the array:\n";

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> v[i][j];
//         }
//     }
//     int row = mexonerow(v);

//     cout << row << " numbers row have meximum 1";
// }
//-------------------------------------------------------------------------------------
// 2. rotet a metrix 90 deegre in clockwise.
// using namespace std;
/*void getdata(int arr[][100], int a, int b)
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

    cout<<endl;
     for (int i = 0; i < c; i++)
    {
        for (int j = r-1 ; j >= 0; j--)
        {
            cout<< arr[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}*/
// // without vectore
// #include <algorithm>
// int main()
// {
//     int r, c;
//     cout << "enter row and coloum = ";
//     cin >> r >> c;

//     vector<vector<int>> v(r, vector<int>(c));
//     cout << "Enter elements of the array:\n";

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> v[i][j];
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             swap(v[i][j], v[j][i]);
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         reverse(v[i].begin(), v[i].end());
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0; // with vectore
// }
//---------------------------------------------------------------------------------------
// 3. Given a m atrix 'a' of dimension n x m and 2 coordinates
// (11, r1) and (12, r2). Return the sum of the rectangle from
// (11,r1) to (2, r2).

using namespace std;
int metrixsum(vector<vector<int>> &v, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += v[i][j];
        }
    }
    return sum;
}
int main()
{
    int a, b;
    cout << "enter row and colum = ";
    cin >> a >> b;
    vector<vector<int>> v(a, vector<int>(b));
    cout << "enter element \n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> v[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << "enter cordinate \n";
    cin >> l1 >> r1 >> l2 >> r2;

    // Validate coordinates
    if (l1 < 0 || l1 >= a || l2 < 0 || l2 >= a || r1 < 0 || r1 >= b || r2 < 0 || r2 >= b || l1 > l2 || r1 > r2)
    {
        cout << "Invalid coordinates." << endl;
        return 1;
    }

    int res = metrixsum(v, l1, r1, l2, r2);
    cout << "sum of metrix = " << res;
    return 0;
}