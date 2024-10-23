#include <stdio.h>
// 31. Write c program to find sum of series 1^2+3^2+5^2+......+n^2.
// 32. Write c Program to print given series:1 2 4 8 16 32 64 128
// 33. Write c Program to Print following series: 1 -4 7 -10..........-40
// 34. Write c program to swap values of two variables using pass by reference
// method
// 35. Write c program to print truth table of XY+Z.
// 36. Write c Program to find First three Pythagorian Triplet.
// 37. Write c Program to Check Whether a Number is Unique Number or Not
// 38. Write a program to swap to numbers without using a third variable
// 39. Write c program to calculate area of a circle,a rectangle or a triangle
// depending upon user's choice
// 40. Write c Program to perform all arithmetic calculation using switch case
//--------------------------------------------------------------------------------------------------------
// 31. Write c program to find sum of series 1^2+3^2+5^2+......+n^2.
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int sum = 0;
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + (a * a);
//         a += 2;
//     }
//     printf("answer is = %d", sum);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 32. Write c Program to print given series:1 2 4 8 16 32 64 128
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int a = 1;
//     int b = 2;
//     for (int i = 1; i <= n; i++)
//     {
//         a = a*b;
//     printf("%d\t", a);
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 33. Write c Program to Print following series: 1 -4 7 -10..........-40
// int main()
// {
//     // int n;
//     // printf("enter number = ");
//     // scanf("%d", &n);
//     int a = 1;
//     int b = 5;

//     for (int i = 1; i <= 14; i++)// if you want upto nth number then replace 14 with n
//     {
//         if (a > 0)
//         {
//             printf("%d\t", a);
//             a = a - b;
//         }
//         else
//         {
//             printf("%d\t", a);
//             a = a + b;
//         }
//         b += 6;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 34. Write c program to swap values of two variables using pass by reference
// method
// void swap(int *a, int *b)
// {
//     int tamp = a;
//     a = b;
//     b = tamp;
//     printf("after swap = %d%d",*a,*b);
// }
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int x;
//     printf("enter number = ");
//     scanf("%d", &x);
//     swap(&n,&x);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 35. Write c program to print truth table of XY+Z.
// concept sajhna hai samajh nhi aaya
// int main()
// {
//     int X, Y, Z;

//     printf("Truth Table for XY + Z:\n");
//     printf("X\tY\tZ\tOutput\n");

//     for (X = 0; X <= 1; X++)
//     {
//         for (Y = 0; Y <= 1; Y++)
//         {
//             for (Z = 0; Z <= 1; Z++)
//             {
//                 int output = (X && Y) || Z;
//                 printf("%d\t%d\t%d\t%d\n", X, Y, Z, output);
//             }
//         }
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 36. Write c Program to find First three Pythagorian Triplet.
// int main()
// {
//     int a, b, c;
//     int i = 0;

//     while (i < 3)
//     {
//         for (a = 1; a <= 10; a++)
//         {
//             for (b = a + 1; b <= 10; b++)
//             {
//                 c = a * a + b * b;
//                 for (int j = 1; j <= c; j++)
//                 {
//                     if (j * j == c)
//                     {
//                         printf("(%d, %d, %d)\n", a, b, j);
//                         i++;

//                     }
//                 }

//             }
//         }
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 37. Write c Program to Check Whether a Number is Unique Number or Not
// void forunique(int a)
// {
//     int ld1;
//     int ld2;
//     int count = 0;
//     int temp = a;
//     while (temp > 0)
//     {
//         ld1 = temp % 10;
//         temp = temp / 10;
//         while (temp > 0)
//         {
//             ld2 = temp % 10;

//             if (ld2 == ld1)
//             {
//                 count++;
//                 break;
//             }
//             temp = temp / 10;
//         }
//     }
//     if (count == 0)
//         printf("given number is unique");
//     else
//         printf("given number is not unique");
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     forunique(n);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 38. Write a program to swap to numbers without using a third variable
// void swap(int a,int b)
// {
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("answer = %d%d",a,b);
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int x;
//     printf("enter number = ");
//     scanf("%d", &x);
//     swap(n,x);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 39. Write c program to calculate area of a circle,a rectangle or a triangle
// depending upon user's choice
// int main()
// {

//     printf("1. area of a circle\n");
//     printf("2. area of a rectangle\n");
//     printf("3. area of a triangle\n");

//     int choice;
//     printf("enter your choice = ");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//     {
//         float r;
//         float p = 22 / 7;
//         printf("\nenter rediuse of circle = ");
//         scanf("%f", &r);
//         float a = p * r * r;
//         printf("area of circle = %f", a);
//     }
//     break;
//     case 2:
//     {
//         float l;
//         printf("enter lenth of rectangle = ");
//         scanf("%f", &l);
//         float h;
//         printf("\nenter hight of rectangle = ");
//         scanf("%f", &h);

//         float a = l * h;
//         printf("area of rectangle = %f", a);
//     }
//     break;
//     case 3:
//     {
//         float l;
//         printf("enter lenth of triangle = ");
//         scanf("%f", &l);
//         float h;
//         printf("\nenter hight of triangle = ");
//         scanf("%f", &h);

//         float a = (l * h) / 2;
//         printf("area of triangle = %f", a);
//     }
//     break;

//     default:
//     {
//         printf("invalide choice");
//         break;
//     }
//         return 0;
//}
//--------------------------------------------------------------------------------------------------------
// 40. Write c Program to perform all arithmetic calculation using switch case
int main()
{
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    int choise;
    printf("enter choise = ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
    {
        float l;
        float h;
        printf("\nenter number = ");
        scanf("%f%f", &l, &h);

        float a = l + h;
        printf(" answer = %f", a);
    }
    break;
    case 2:
    {
        float l;
        float h;
        printf("\nenter number = ");
        scanf("%f%f", &l, &h);

        float a = l - h;
        printf("answer = %f", a);
    }
    break;
    case 3:
    {
        float l;
        float h;
        printf("\nenter number = ");
        scanf("%f%f", &l, &h);

        float a = l * h;
        printf("answer = %f", a);
    }
    break;
    case 4:
    {
        float l;
        float h;
        printf("\nenter number = ");
        scanf("%f%f", &l, &h);
        float a = l / h;
        printf("answer = %f", a);
    }
    break;

    default:
    {
        printf("invalide choice");
        break;
    }
        return 0;
    }
}
