#include <stdio.h>
// 51. Write a program to find out entered number.
// 52. Write a program to calculate GCD of two numbers.
// 53. Write a program to calculate factorial of a number.
// 54. Write a c program to generate all the prime numbers between 1 to n, where
// n is a value supplied by the user.
// 55. Write a c program to generate the first n terms of the sequence.
// 56. Write a c program to sort a list of names in ascending order.
// 57. Write a program to find absolute value of the integer.
// 58. Write a program for addition of 2 matrices.
// 59. Write a program to find average of number three numbers
// 60. Write a program to check whether given string is palindrome or not
//--------------------------------------------------------------------------------------------------------
// 51. Write a program to find out entered number.
// int main()
// {
//     int a;
//     printf("enter the size of array = ");
//     scanf("%d", &a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int count = 0;
//     for (int i = 0; i < a; i++)
//     {
//         if (arr[i] == n)
//         {
//             printf("%d fount at %d position", arr[i],i+1);
//             count++;
//             break;
//         }
//     }
//     if (count == 0)
//         printf("number is not fount in list");
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 52. Write a program to calculate GCD of two numbers.
// #include <stdio.h>

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);
//     int result = gcd(num1, num2);
//     printf("GCD of %d and %d is %d\n", num1, num2, result);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 53. Write a program to calculate factorial of a number.
// #include <stdio.h>

// int fecto(int a)
// {int res = 1;

//     for (int i = a; i >= 1; i--)
//     {
//         res=res*i;

//     }

//     return res;
// }
// int main()
// {
//     int num1;
//     printf("Enter integers: ");
//     scanf("%d", &num1);
//     int result = fecto(num1);
//     printf("fectorial  of %d is %d\n", num1, result);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 54. Write a c program to generate all the prime numbers between 1 to n, where
// n is a value supplied by the user.

// void prime(int a)
// {

//     for (int i = 2; i <= a; i++)
//     {
//         int count = 0;
//         for (int j = 2; j <= i; j++)
//         {
//             if (i % j == 0)
//                 count++;
//         }
//         if (count == 1)
//             printf("%d is prime number\n", i);
//     }

//     return;
// }
// int main()
// {
//     int num1;
//     printf("Enter integers: ");
//     scanf("%d", &num1);
//     prime(num1);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 55. Write a c program to generate the first n terms of the sequence.
// samjh nhi aaya kya karna hai
//--------------------------------------------------------------------------------------------------------
// 56. Write a c program to sort a list of names in ascending order.
// #include <string.h>
// int main()
// {
//     int n;
//     printf("Enter number of name you want to short : ");
//     scanf("%d", &n);
//     char arr[20][20];
//     printf("enter name of list\n");
//     for (int i = 0; i <= n; i++)
//     {
//         gets(arr[i]);
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (strcmp(arr[i], arr[j]) > 0)
//             {
//                 char temp[20];
//                 strcpy(temp, arr[i]);
//                 strcpy(arr[i], arr[j]);
//                 strcpy(arr[j], temp);
//             }
//         }
//     }
//     printf("shorte strig ");
//     for (int i = 0; i <= n; i++)
//     {
//         puts(arr[i]);
//     }

//     return 0;
// }
// clude <string.h>
// int main()
// {
//     int n;
//     printf("Enter number of name you want to short : ");
//     scanf("%d", &n);
//     char arr[20][20];
//     printf("enter name of list\n");
//     for (int i = 0; i <= n; i++)
//     {
//         gets(arr[i]);
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (strcmp(arr[i], arr[j]) > 0)
//             {
//                 char temp[20];
//                 strcpy(temp, arr[i]);
//                 strcpy(arr[i], arr[j]);
//                 strcpy(arr[j], temp);
//             }
//         }
//     }
//     printf("shorte strig ");
//     for (int i = 0; i <= n; i++)
//     {
//         puts(arr[i]);
//     }

//     return 0;
//--------------------------------------------------------------------------------------------------------
// 57. Write a program to find absolute value of the integer.
// int main()
// {
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     int a = n * -1;
//     printf("%d ", a);
//         return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 58. Write a program for addition of 2 matrices.
// void getdata(int arr[][100], int a, int b)
// {
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }

// int main()
// {
//     int r = 3;
//     int c = 3;
//     printf("enter element of frist arr\n");
//     int l1[r][100];
//     getdata(l1, r, c);
//     printf("enter element of second arr\n");
//     int l2[r][100];
//     getdata(l2, r, c);
//     int res[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             res[i][j] = l1[i][j] + l2[i][j];
//         }
//     }
//     printf("sum of two metrix \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", res[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------
// 59. Write a program to find average of number three numbers
// int main()
// {
//     float n1, n2, n3;
//     printf("enter the number \n");
//     scanf("%f%f%f", &n1, &n2, &n3);
//     float ans =( n1 + n2 + n3) / 3;
//     printf("avrage of three number = %f", ans);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 60. Write a program to check whether given string is palindrome or not
#include <string.h>

int main()
{
    char str[100];
    char rev[100];
    printf("enter string = ");
    gets(str);
    strcpy(rev, str);
    strrev(rev);
    if (strcmp(str, rev) == 0)
        puts("the given string is palindrome");
    else
        puts("the given string is not palindrome");
    return 0;
}