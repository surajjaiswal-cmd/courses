#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> 
using namespace std;
// 1. creat and read file.
// 2. file making by vector and short

//--------------------------------------------------------------------------------
// // 1. creat and read file.
// int main()
// {
//     // ofstream f1;
//     // f1.open("abc.txt");
//     // f1<<"hello dewas";
//     // f1.close();
//     ifstream fin;
//     fin.open("abc.txt");
//     char c;
//     c=fin.get();
//     while (!fin.eof())
//     {
//         cout<<c;
//         c=fin.get();
//     }
//     fin.close();

//     return 0;
// }
//=====================================================================================
// 2. file meking buy vectore and shorting.
int main()
{
    vector<int> v1(5);
    cout << "enter element of array \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v1[i];
    }
    ofstream n1;
    n1.open("suraj.txt");
    n1 << "unsorted array\n";
    for (int i = 0; i < 5; i++)
    {
        n1 << v1[i] << " ";
    }
    n1 << "\nshorted array\n";
    sort(v1.begin(), v1.end());
    for (int i = 0; i < 5; i++)
    {
        n1 << v1[i] << " ";

    }
    n1.close();

    return 0;
}
