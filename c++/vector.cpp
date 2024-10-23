#include <iostream>
#include <vector>
using namespace std;
// 1. besic opratins of vectore
// 2. taking input frome user in vector and add or minus.
// 3. find the last n available at which index in vector  and how many time available.
// 4. count the number of element  greter the value of n in vector.
// 5. wap to fine array is shorted or not.
// 6. short an array which element 0 and 1 only.
// 7. arrange all even number frist then arrang odd number in array
// 8. given an shorter araay print an array of squres of each element shordet
// 9. Check if we can partition the array into two subarrays with
// equal sum. More formally, check that the prefix sum of a part
// of the array is equal to the suffix sum of rest of the array

//------------------------------------------------------------------------------------------
// 1. besic opratins of vectore
// using namespace std;
// int main()
// {
//     vector<int> v; // initialization
//     cout << "size = " << v.size() << endl;
//     cout << "capacity = " << v.capacity() << endl;

//     v.push_back(1); // to add index in end
//     cout << "size = " << v.size() << endl;
//     cout << "capacity = " << v.capacity() << endl;

//     v.push_back(2);
//     cout << "size = " << v.size() << endl;
//     cout << "capacity = " << v.capacity() << endl;

//     v.push_back(3);
//     cout << "size = " << v.size() << endl;
//     cout << "capacity = " << v.capacity() << endl;

//     v.resize(5); // to rsize endex size
//     v.push_back(1);
//     cout << "size = " << v.size() << endl;
//     cout << "capacity = " << v.capacity() << endl;

//     v.pop_back(); // to delet last lasrt index
//     cout << "size = " << v.size() << endl;
//     cout << "capacity = " << v.capacity() << endl;
// }
//-----------------------------------------------------------------------------------------
// 2. taking input frome user in vector and add and minus.
// int main()
// {
//     vector<int> v(5);
//     cout << "enter elemenents of vector \n";
//     for (int i = 0; i < 5; i++)
//     {
//         // int ele;
//         cin >> v[i];
//         // v.push_back(ele);
//     }
//     cout << "for loop \n";
//     for (int i = 0; i < 5; i++) // for loop to print vestor elements
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     v.insert(v.begin() + 2, 8);
//     cout << "which loop \n";
//     for (int ele : v) // for which loop to print element
//     {
//         cout << ele << " ";
//     }
//     cout << endl;
//     cout << "while loop \n";
//     v.erase(v.begin()+2);
//     int i = 0;
//     while (i < v.size()) // while loop to print elements.
//     {
//         cout << v[i] << " ";
//         i++;
//     }
// }
//--------------------------------------------------------------------------------
// 3. find the last n available at which index in vector and how many time available.
// int main()
// {
//     vector<int> v(7);
//     cout << "enter element \n";
//     for (int i = 0; i < 7; i++)
//     {
//         cin >> v[i];
//     }
//     int n;
//     cout << "enter number to find last index = ";
//     cin >> n;
//     int count = -1;
//     int x = 0;
//     for (int i = 0; i < 7; i++) // reverse chlane se last index of enter number jaldi milega
//     {
//         if (n == v[i])          // lekin total number of present n find karna hai to forwerd chlna hoga
//         {
//             count = i;
//             x++;
//         }
//     }
//     cout << "total number of " << n << " available in vector is =  " << x << endl;
//     if (count < 0)
//         cout << "number is not available in vector";
//     else
//         cout << "last number " << n << " available at " << count << " index";
// }
//--------------------------------------------------------------------------------
// 4. count the number of element  greter the value of n in vector.
// int main()
// {
//     vector<int> v(7);
//     cout << "enter element \n";
//     for (int i = 0; i < 7; i++)
//     {
//         cin >> v[i];
//     }
//     int n;
//     cout << "enter number = ";
//     cin >> n;
//     int x = 0;
//     cout << "bigger number then value of n = ";
//     for (int i = 0; i < 7; i++)
//     {
//         if (n < v[i])
//         {
//             cout << v[i] << " ";
//             x++;
//         }
//     }
//     cout << endl;
//     cout << "total number of bigger number then " << n << " available in vector is =  " << x << endl;
// }
//--------------------------------------------------------------------------------
// 5. wap to fine array is shorted or not.
// int main()
// {
//     vector<int> v(7);
//     cout << "enter element \n";
//     for (int i = 0; i < 7; i++)
//     {
//         cin >> v[i];
//     }
//     bool flage = true;
//     for (int i = 0; i < 7; i++)
//     {
//         if (v[i] > v[i + 1])
//         {
//             flage = false;
//         }
//     }
//     cout << endl;
//     if (flage == true)
//         cout << "given array is shorted ";
//     else
//         cout << "given array is not shorted ";
// }
//--------------------------------------------------------------------------------
// 6. short an array which element 0 and 1 only.
// void sort(vector<int> &v)
// {
//     // int count = 0; // ek trika ye hai or dusre se bhi kiya ja sakta hai
//     // for (int ele : v)
//     // {
//     //     if (ele == 0)
//     //     {
//     //         count++;
//     //     }
//     // }
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     if (i < count)
//     //     {
//     //         v[i] = 0;
//     //     }
//     //     else
//     //     {
//     //         v[i] = 1;
//     //     }
//     // }
//     int rc = 0; // second method
//     int lc = v.size() - 1;
//     while (rc < lc)
//     {
//         if (v[rc] == 1 && v[lc] == 0)
//         {
//             v[rc] = 0;
//             v[lc] = 1;
//             rc++;
//             lc--;
//         }
//         else
//         {

//             if (v[rc] == 0)
//             {
//                 rc++;
//             }
//             if (v[lc] == 1)
//             {
//                 lc--;
//             }
//         }
//     }
//     return;
// }

// int main()
// {

//     int n;
//     cout << "entwer the size of vectore = ";
//     cin >> n;
//     vector<int> v;
//     cout << "enter element \n";
//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }
//     sort(v);
//     cout << "sorted array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------
// 7. arrange all even number frist then arrang odd number in array
// void sort(vector<int> &v)
// {

//     int rc = 0;
//     int lc = v.size() - 1;
//     while (rc < lc)
//     {
//         if (v[rc] % 2 != 0 && v[lc] % 2 == 0)
//         {
//             int temp = v[rc];
//             v[rc] = v[lc];
//             v[lc] = temp;
//             rc++;
//             lc--;
//         }
//         else
//         {

//             if (v[rc]%2 == 0)
//             {
//                 rc++;
//             }
//             if (v[lc]%2 != 0)
//             {
//                 lc--;
//             }
//         }
//     }
//     return;
// }

// int main()
// {

//     int n;
//     cout << "entwer the size of vectore = ";
//     cin >> n;
//     vector<int> v;
//     cout << "enter element \n";
//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }
//     sort(v);
//     cout << "sorted array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------
// 8. given an shorter araay print an array of squres of each element shordet
// void sort(vector<int> v)
// {
//     int size = v.size();
//     for (int i = 0; i < size; i++)
//     {
//         v[i] *= v[i];
//     }

//     for (int i = 0; i < size - 1; i++)
//     {
//         bool flag = false;                     // to chanke array alrady sorted or not chakemark
//         for (int j = 0; j < size - 1 - i; j++) //-i karne se number of swap kam ho jayenge or time bachega
//         {
//             if (v[j] > v[j + 1])
//             {
//                 int tamp = v[j];
//                 v[j] = v[j + 1];
//                 v[j + 1] = tamp;
//                 flag = true;
//             }
//         }
//         if (flag != true)
//             break;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// int main()
// {

//     int n;
//     cout << "entwer the size of vectore = ";
//     cin >> n;
//     vector<int> v;
//     cout << "enter element in assending order \n";
//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }
//     sort(v);

//     return 0;
// }
//--------------------------------------------------------------------------------
// 9. Check if we can partition the array into two subarrays with
// equal sum. More formally, check that the prefix sum of a part
// of the array is equal to the suffix sum of rest of the array
void sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        
    }
}

int main()
{

    int n;
    cout << "entwer the size of vectore = ";
    cin >> n;
    vector<int> v;
    cout << "enter element in assending order \n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sort(v);

    return 0;
}