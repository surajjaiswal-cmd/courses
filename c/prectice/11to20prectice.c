#include <stdio.h>
// 11. Write a program to swap to numbers using a third variable called temp.
// 12. Write a c Program to print ODD numbers from 1 to 10
// 13. Write a c Program to print natural numbers from 1 to 10 in Reverse
// 14. Write a c Program to accept a string in any case and print it by another case.
// 15. Write c Program to check whether a given number is perfect or not.
// 16. Write c Program to print table of any number
// 17. Write c Program to read ‘n’ number and print them in matrix terms in all
// orders.
// 18. Write c Program to accept two numbers and print the sum of given two
// numbers by using pointers
// 19. Write a c Program to accept a string in upper case and print it by lower
// case.
// 20. Write a c Program to accept any single digit number and print it in words.
//--------------------------------------------------------------------------------------------------------
// 11. Write a program to swap to numbers using a third variable called temp.
// int main()
// {

//     int a, b, tamp;
//     printf("enter two numbr = ");
//     scanf("%d%d", &a, &b);
//     tamp = a;
//     a = b;
//     b = tamp;
//     printf("%d%d", a, b);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 12. Write a c Program to print ODD numbers from 1 to 10
// int main()
// {

//     for (int i = 1; i <= 10; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 13.  Write a c Program to print natural numbers from 1 to 10 in Reverse
// int main()
// {

//     int n;
//     printf("enter numbr = ");
//     scanf("%d", &n);
//     int ld;
//     int sum = 0;
//     int i=1;
//     while(n!=0)
//     {
//         ld = n % 10;
//         sum = sum *10 + ld;
//         n = n/10;
//         i++;
//     }
//     printf("answer = %d",sum);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 14.Write a c Program to accept a string in any case and print it by another case.
// ye wala ni aata samjh
//--------------------------------------------------------------------------------------------------------
// 15.Write c Program to check whether a given number is perfect or not.
// int main()
// {

//     int n;
//     printf("enter numbr = ");
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     if (sum == n)
//         printf("the number is purfect");
//     else
//         printf("the number is not purfect");

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 16. Write C Program to print table of any number
// int main()
// {

//     int n;
//     printf("enter numbr = ");
//     scanf("%d", &n);
//     for (int i = n; i <= n*10; i = i + n)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 17. Write c Program to read ‘n’ number and print them in matrix terms in all
// orders. ye samjh nhi aya o_O;
// int main()
// {
//     int n, i, j;
//     printf("Enter the size of the matrix: ");
//     scanf("%d", &n);
//     int matrix[n][n];
//     printf("Enter the elements of the matrix:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("Row-major order:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Column-major order:\n");
//     for (j = 0; j < n; j++)
//     {
//         for (i = 0; i < n; i++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Diagonal (top-left to bottom-right):\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", matrix[i][i]);
//     }
//     printf("\n");
//     printf("Diagonal (top-right to bottom-left):\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", matrix[i][n - 1 - i]);
//     }
//     printf("\n");
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 18. Write c Program to accept two numbers and print the sum of given two
// numbers by using pointers
// int main()
// {
//     int n1;
//     printf("enter frist number = ");
//     scanf("%d", &n1);
//     int n2;
//     printf("enter frist number = ");
//     scanf("%d", &n2);
//     int sum = n1 + n2;
//     int *ptr = &sum;
//     printf("the sum of two numbr is = %d", *ptr);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 19. Write a c Program to accept a string in upper case and print it by lower
// case.
// #include <string.h>
// int main()
// {
//     char str[20];
//     printf("enter string = ");
//     gets(str);
//     int size = strlen(str);
//     printf("%d\n", size);
//     for (int i = 0; i < size; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] = str[i] - 32;
//     }
//     printf("%s\n", str);
// }//--------------------------------------------------------------------------------------------------------
// 20. Write a c Program to accept any single digit number and print it in words.
int main()
{

    int n;
    printf("enter numbr = ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    case 10:
        printf("ten");
        break;

    default:
        printf("invelid coice");
        break;
    }

    return 0;
}