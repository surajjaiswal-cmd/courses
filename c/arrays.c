#include <stdio.h>

// QUS 1 take data from user and print in revers order
// int main() {

//   int arr[5];

//   for (int i = 0; i < 5; i++) {
//     printf("entr %d number = ", i);
//     scanf("%d", &arr[i]);
//   }
//   for (int j = 5; j > 0; j--) {
//     printf("%d", j);
//   }
//--------------------------------------------------------------------------------------------------------
// qus 2 find the aal bigger number in arr after n
// int main()
// {
//     int arr[6] = {1, 4, 6, 8, 9, 10};
//     int n;

//     int count = 0;
//     printf("enter the no = ");
//     scanf("%d", &n);
//     for (int i = 0; i < 6; i++){
//         if (arr[i]>n)
//         count++;
//     }
//     printf("%d",count);
// }
//--------------------------------------------------------------------------------------------------------
// qus 3 find the secong largets aliment number in array
// int main()
// {
//     int n;
//     printf("enter the no = ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the eliment of %d = ", i);
//         scanf("%d", &arr[i]);
//     }
//     int m2 = arr[0];
//     int m1 = arr[0];
//     for (int j = 1; j < n; j++) // second biggest find karne ke liye bas
//     (n-1) karna hoga
//     {
//         if (arr[j] > m1)
//         {
//             m2 = m1;
//             m1 = arr[j];
//         }
//         else if (arr[j] > m2 && arr[j] != m1)
//         {
//             m2 = arr[j];
//         }
//     }
//     printf("%d", m2);
//       return 0;
// }
// --------------------------------------------------------------------------------------------------------
// qus 4 palindrome chake after revers -----  
// void getdata(int arr[], int n)
// {

//   for (int i = 0; i < n; i++)
//   {
//     printf("enter the eliment of %d = \n", i);
//     scanf("%d", &arr[i]);
//   }
//   return;
// }
// void revers(int arr[], int n)
// {
//   int tamp;
//   int f = 0;
//   int l = n - 1;

//   while (f < l)
//   {
//     tamp = arr[f];
//     arr[f] = arr[l];
//     arr[l] = tamp;
//     f++;
//     l--;
//   }
//   return;
// }
// int palindrome(int arr[], int a)
// {
//   int first = 0;
//   int last = a - 1;

//   while (first < last)
//   {
//     if (arr[first] != arr[last])
//       return 0; // Not a palindrome
//     first++;
//     last--;
//   }
//   return 1; // Palindrome
// }

// int main()
// {
//   int n;
//   printf("enter the no = ");
//   scanf("%d", &n);
//   int arr[n];
//   getdata(arr, n);
//   revers(arr, n);
//   if (palindrome(arr,n))
//     printf("the given array is a palindrome");
//   else
//     printf("the given array is not palindrome");
// }
