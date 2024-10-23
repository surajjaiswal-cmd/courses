#include <iostream>
// 1. calculate the sum of all elements givenint the array.
// 2. find the maximum value in array.
// 3. print the squar of index  in array.
// 4. print ood index element duble and increas even index evement by 10 in array
// 5. find the number of bigger then x and print quntitt of bigger number
// 6. print difrance between ood index element sum and even index element sum
// 7. find the second maximum value in array.
// 8. revers an aaray without using extra array.
// 9. chack array is polindroma or not.
// 10. fine the total pair in array whose sum is equal to value of x.
// 11. fine the total triplets in array whose sum is equal to value of x.
// 12. find uniq number in array whare all number are reapeat.

//------------------------------------------------------------------------
// 1. calculate the sum of all elements givenint the array.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     int sum = 0;
//     cout << "ente the elements off array = ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     cout << sum;
// }
//------------------------------------------------------------------------
// 2. find the maximum value in array.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "ente the elements off array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int mex = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i]>mex) // minimum ke liye ba < change karna hai.
//             {mex = arr[i];}
//     }
//     cout <<"max element = "<< mex;
// }
//------------------------------------------------------------------------
// 3. print the squar of index  in array.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     int x = 1;
//     for (int i = 0; i < n; i++)
//     {
//         cout << x * x << " ";
//         x++;
//     }
// }
//------------------------------------------------------------------------
// 4. print ood index element duble and increas even index evement by 10 in array
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "ente the elements off array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         { arr[i]*=2;
//             cout << arr[i]<<" ";
//         }
//         else {
//             arr[i]+=10;
//             cout<<arr[i]<<" ";
//         }
//     }
// }
//------------------------------------------------------------------------
// 5. find the number of bigger then x and print quntitt of bigger number
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "ente the elements off array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x;
//     cout<<"enter value of x = ";
//     cin>>x;
//     int count =0;
//     for (int i = 0; i < n; i++)
//     {
//       if (arr[i]>x)
//       count++;
//     }
//     cout<<count;
// }
//------------------------------------------------------------------------
// 6. print difrance between ood index element sum and even index element sum
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "ente the elements off array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int es = 0;
//     int os = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             es += arr[i];
//         }
//         else
//         {
//             os += arr[i];
//         }
//     }
//     cout <<"even sum = " <<es << endl;
//     cout <<"odd sum = "<< os << endl;
//     int diff = es - os;
//     if (diff < 0)
//         cout <<"diffrant = "<< -diff;
//     else
//         cout <<"diffrant = "<< diff;
// }
//------------------------------------------------------------------------
// 7. find the second maximum value in array.
// #include<limits.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "ente the elements off array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int mex = INT_MIN;
//     int smex = INT_MIN;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > mex) // minimum ke liye ba < change karna hai.
//         {
//             mex = arr[i];
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > smex && arr[i] < mex) // minimum ke liye ba < change karna hai.
//         {
//             smex = arr[i];
//         }
//     }

//      if (smex == INT_MIN) {
//         cout << "There is no second maximum element in the array." << endl;
//     } else {
//         cout << "Second maximum element = " << smex << endl;
//     }
// }
//------------------------------------------------------------------------
// 8. revers an aaray without using extra array.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     int sum = 0;
//     cout << "ente the elements off array = ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x = 0;
//     int y = n - 1;

//     while (x < y)
//     {
//         int temp = arr[x];
//         arr[x] = arr[y];
//         arr[y] = temp;
//         x++;
//         y--;
//     }
//      for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }

// }
//------------------------------------------------------------------------
// 9. chack array is polindroma or not.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     int sum = 0;
//     cout << "ente the elements off array = ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x = 0;
//     int y = n - 1;
//      int count=0;
//     while (x < y)
//     {
//         if (arr[x] != arr[y])
//         {
//             count++;
//             break;
//         }
//         x++;
//         y--;
//     }
//     if (count == 0)
//         cout << "given array is polindroma";
//     else
//         cout << "given array is  not polindroma";
// }
//------------------------------------------------------------------------
// 10. fine the total pair in array whose sum is equal to value of x.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     int sum = 0;
//     cout << "ente the elements off array = ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x;
//     cout << "enter number = ";
//     cin >> x;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 count++;
//             }
//         }
//     }
//     if (count == 0)
//         cout << "not available pair in array whose sum is equal to value of x";
//     else
//         cout << count<< " numbers of pair is available in array whose sum is equal to value of "<<x;
// }
// //------------------------------------------------------------------------
// // 11. fine the total triplets in array whose sum is equal to value of x.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "ente the elements off array = ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x;
//     cout << "enter number = ";
//     cin >> x;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == x)
//                 {
//                     count++;
//                 }
//             }
//         }
//     }
//     if (count == 0)
//         cout << "not available triplet in array whose sum is equal to value of x";
//     else
//         cout << count << " triplate is available in array whose sum is equal to value of " << x;
// }
//------------------------------------------------------------------------
// 12. find uniq number in array whare all number are reapeat.
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ente the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "ente the elements off array = ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {

//                 arr[i] = arr[j] = -1;
//             }
//         }
//     }
//     cout << endl;
//     int count = 0;
//     cout << "uniq numbers\n";
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             cout << arr[i] << " ";
//             count++;
//         }
//     }
//     cout << endl;
//     if (count == 0)
//         cout << "not available uniqu number";
//     else
//         cout << count << " uniqu number available";
// }