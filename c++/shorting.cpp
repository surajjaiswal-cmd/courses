#include <iostream>
#include <vector>
using namespace std;
// 1. short an array with bubble short mathoud.
// 2. short an array with selection short mathoud.
// 3. (3 2 0 5 0 1) arrange all 0 in end.
// 4. sort group of string with selection sort;
// 5. merge 2 sorted array in one array in increment sort.
// 6. short an array by quik sort methode.

//------------------------------------------------------------------------------
// 1. short an array with bubble short mathoud.
// int main()
// {
//     int n;
//     cout << "enter the size of array = ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements of array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool flage = false;
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 flage = true;
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//         if (!flage)
//             break;
//     }
//     cout << "shorted array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
// //------------------------------------------------------------------------------
// // 2. short an array with selection short mathoud.
// void selectionsort(vector<int> &v)
// {
//     int s = v.size();
//     for (int i = 0; i < s - 1; i++)
//     {
//         int min_index = i;
//         for (int j = i + 1; j < s; j++)
//         {
//             if (v[j] < v[min_index])
//                 min_index = j;
//         }
//         if (i <= min_index)
//             swap(v[i], v[min_index]);
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the size of array = ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "enter elements of array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selectionsort(arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
//------------------------------------------------------------------------------
// 3. (3 2 0 5 0 1) arrange all 0 in end.
// int main()
// {
//     int n;
//     cout << "enter the size of array = ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "enter elements of array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n-1; i++)
//     {  bool flage = false;
//         for (int j = 0; j < n-1-i; j++)
//         {
//             if (arr[j] == 0)
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 flage = true;
//             }

//         }
//         if(!flage) break;
//     }
//     cout << "shorted array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
//------------------------------------------------------------------------------
// 4. sort group of string with selection sort;

// void selectionsort(vector<string> &v)
// {
//     int s = v.size();
//     for (int i = 0; i < s - 1; i++)
//     {
//         int min_index = i;
//         for (int j = i + 1; j < s; j++)
//         {
//             if (v[j] < v[min_index])
//                 min_index = j;
//         }
//         if (i <= min_index)
//             swap(v[i], v[min_index]);
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the size of string = ";
//     cin >> n;
//     vector<string> arr(n);
//     cout << "enter strings \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selectionsort(arr);
//     cout << "sorted string \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "\n";
//     }
// }
//------------------------------------------------------------------------------
// 5. merge 2 sorted array in one array in increment sort.
void merge(vector<int> &a, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for (int i = 0; i < n1; i++)
    {
        v1[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        v2[i] = a[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int na = l;
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            a[na] = v1[i];
            na++;
            i++;
        }
        else
        {
            a[na] = v2[j];
            na++;
            j++;
        }
    }
    while (i < n1)
    {
        a[na] = v1[i];
        na++;
        i++;
    }
    while (j < n2)
    {
        a[na] = v2[j];
        na++;
        j++;
    }
}

void mergesort(vector<int> &x, int l, int r)
{
    if (l >= r)
        return;
    int mid = l+(r-l)/ 2;
    mergesort(x, l, mid);
    mergesort(x, mid + 1, r);
    merge(x, l, mid, r);
}
int main()
{
    int n;
    cout << "enter size of array = ";
    cin >> n;
    vector<int> arr(n);

    cout << "enter array elements  \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);
    cout << "sorted array  \n";
    for (int i = 0; i < n; i++)33
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//------------------------------------------------------------------------------
// 6. short an array by quick sort methode.
// int partition(vector<int> &a, int l, int r)
// {
//     int pi = a[r];
//     int i = l - 1;
//     for (int j = l; j < r; j++)
//     {
//         if (a[j] < pi)
//         {
//             i++;
//             swap(a[i], a[j]);
//         }
//     }
//     swap(a[i + 1], a[r]);
//     return i + 1;
// }

// void quicksort(vector<int> &x, int l, int r)
// {
//     if (l >= r)
//         return;
//     int pi = partition(x, l, r); // pi = pivot element
//     quicksort(x, l, pi - 1);
//     quicksort(x, pi + 1, r);
// }
// int main()
// {
//     int n;
//     cout << "enter size of array = ";
//     cin >> n;
//     vector<int> arr(n);

//     cout << "enter array elements  \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     quicksort(arr, 0, n - 1);
//     cout << "sorted array  \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }