#include <stdio.h>
// 41. Write c Program to do arithmetic operations according to user choice using
// switch case
// 42. Write a program to check given number is multiple of number entered by user.
// 43. Write a program to check given year is leap or not.
// 44. Write a program to convert gallons to liters.
// 45. Write a c program to find the sum of individual digits of a positive integer.
// 46. Write a c program to the number count of letters in a given text.
// 47. Write a c program to sort a list of numbers in ascending order.
// 48. Write a c program to find both the largest and smallest number in a array of
// integers.
// 49. Write a program to find the largest of two numbers.
// 50. Write a program to generate square root of 1 to 10.
//--------------------------------------------------------------------------------------------------------
// 41. same qustion 40,
//--------------------------------------------------------------------------------------------------------
// 42. Write a program to check given number is multiple of number entered by user.
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int d;
//     printf("\nenter devider = ");
//     scanf("%d", &d);

//     if (n % d == 0)
//         printf("%d is multiple of %d", n, d);
//     else

//         printf("%d is not  multiple of %d", n, d);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 43. Write a program to check given year is leap or not.
// int main ()
// {
//     int year;
//     printf("enter year = ");
//     scanf("%d", &year);
//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//             {
//                 printf("%d is a leap year",year);
//             }
//             printf("%d is not leap year",year);
//         }
//         printf("%d is a leap year",year);
//     }
//     else
//         printf("%d is not leap year",year);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 44. Write a program to convert gallons to liters.
// int main()
// {
//     int g;
//     printf("ente gallons = ");
//     scanf("%d", &g);
//     float l;
//     int year;
//     l = g * 3.785412;
//     printf("leter = %f", l);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 45. Write a c program to find the sum of individual digits of a positive integer.
// int main()
// {
//     int g, ld, sum = 0;
//     printf("ente gallons = ");
//     scanf("%d", &g);
//     int i = 0;
//     while (g > 0)
//     {
//         ld = g % 10;
//         sum = sum + ld;
//         g = g / 10;
//         i++;
//     }

//     printf("sum = %d", sum);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 46. Write a c program to the number count of letters in a given text.
// #include <string.h>
// int main()
// {
//     char ch[100];
//     printf("enter the text = ");
//     gets(ch);
//     int ans = strlen(ch);
//     printf("total number of degits = %d", ans);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 47. Write a c program to sort a list of numbers in ascending order.
// #include<stdbool.h>

// int main()
// {
//     int arr[5];
//     printf("enter the elements or list\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int n = 5;
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool flag = false;                  // to chanke array alrady sorted or not chakemark
//         for (int j = 0; j < n - 1 - i; j++) //-i karne se number of swap kam ho jayenge or time bachega
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int tamp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tamp;
//                 flag = true;
//             }
//         }
//         if (flag != true)
//             break;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 48.  Write a c program to find both the largest and smallest number in a array of
// integers.

// int main()
// {
//     int arr[5];
//     printf("enter the elements or list\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int l, s;
//     l = s = arr[0];
//     for (int i = 1; i < 5; i++)
//     {
//         if (arr[i] > l)
//         {
//             l == arr[i];
//         }
//         if (arr[i] < s)
//         {
//             s = arr[i];
//         }
//     }
//     printf("bigger = %d\n",l);
//     printf("small = %d",s);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 49. Write a program to find the largest of two numbers.

// int main()
// {
//     int arr[5];
//     printf("enter the elements or list\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int l, l2;

//     l = l2 = arr[0];
//     for (int i = 1; i < 5; i++)
//     {
//         if (arr[i] > l)
//         {
//             l = arr[i];
//         }
//         if (arr[i] > l2 && arr[i] < l)
//         {
//             l2 = arr[i];
//         }
//     }
//     printf("bigger = %d\n", l);
//     printf("second large = %d", l2);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 50. Write a program to generate square root of 1 to 10.
#include<math.h>
int main()
{
    float root;
    for (int i = 1; i < 11; i++)
    {
       double root = sqrt(i);
       printf("square root of %d = %f\n",i,root);
    }

    return 0;
}