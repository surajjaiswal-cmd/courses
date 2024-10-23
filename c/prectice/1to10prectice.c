#include <stdio.h>
// 1. Write a simple program to print your name, class.
// 2. Write c program to calculate sum of two numbers
// 3. Write c Program to print your name 100 times.
// 4. Write c program to swap two numbers using macros
// 5. Write c Program To Accept Student Roll No, Marks in 3 Subjects and
// Calculate Total, Average and Print it.
// 6. Write c Program to Read Three Numbers And Print The Biggest Of Given Three
// Numbers
// 7. Write c Program to print numeric pyramid
// 8. Write c Program to convert binary number to decimal number
// 9. Write c Program to convert a decimal number to binary number// 8 or 9 ek mai hi solve kar diya hai
// 10. Write program to display number in hexadecimal form
//--------------------------------------------------------------------------------------------------------
// 1. Write a simple program to print your name, class.
// int main (){
//     printf("my name is suraj jaiswal\n");
//     printf("MBA 1st sam");
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 2.Write c program to calculate sum of two numbers
// int main (){
// int n1;
// printf("enter frist number = ");
// scanf("%d",&n1);
// int n2;
// printf("enter frist number = ");
// scanf("%d",&n2);
// int sum = n1 + n2;
// printf("the sum of two numbr is = %d",sum);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 3.Write c Program to print your name 100 times.
// int main () {
// int n = 100;
// for (int  i = 1; i <= n; i++)
// {
//     printf("suraj jaiswal ");
// }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 4.Write c program to swap two numbers using macros
// #define swap(a, b) \
//     do             \
//     {              \
//         a = a + b; \
//         b = a - b; \
//         a = a - b; \
//     } while (0)
// int main()
// {
//     int a, b;
//     printf("enter two number = ");
//     scanf("%d%d", &a, &b);
//     swap(a, b);
//     printf("%d%d", a, b);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 5.Write c Program To Accept Student Roll No, Marks in 3 Subjects and
// Calculate Total, Average and Print it.
int main()
{
    int nayan, h, e, m;
    printf("enter the number of hindi = ");
    scanf("%d", &h);
    printf("enter the number of englise = ");
    scanf("%d", &e);
    printf("enter the number of maths = \n");
    scanf("%d", &m);
    int sum = h + e + m;
    printf(" the sum of total marks of 3 subjects = %d\n", sum);
    int avg = sum / 3;
    printf("total percente = %d\n", avg);
    return 0;
}
// --------------------------------------------------------------------------------------------------------
// 6. Write c Program to Read Three Numbers And Print The Biggest Of Given Three Numbers
// int main()
// {
//     int big, a, b, c;
//     printf("enter 1st numbe = ");
//     scanf("%d", &a);
//     printf("enter 2st numbe = ");
//     scanf("%d", &b);
//     printf("enter 3st numbe = ");
//     scanf("%d", &c);
//     if (a > b)
//     {
//         if (a > c)
//             printf("the biggest number = %d", a);
//         else
//             printf("the biggest number = %d", c);
//     }
//     else
//     {
//         if (b > c)
//             printf("the biggest number = %d", b);
//         else
//             printf("the biggest number = %d", c);
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 7. Write c Program to print numeric pyramid
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int nos = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1 ; j <= (n - i); j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= nos; k++)
//         {
//             printf("%d ", k);
//         }
//         nos++;
//         printf("\n");
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 8. Write c Program to convert binary number to decimal number and decimal to binary by switc case
// #include <math.h>

// int convertbd(long long a)
// {
//     int ld;
//     int decimal = 0;
//     int i = 0;
//     while (a != 0)
//     {
//         ld = a % 10;
//         decimal = decimal + ld * pow(2, i);
//         a = a / 10;
//         i++;
//     }
//     return decimal;
// }
// int convertdb(int a)
// {
//     int ld;
//     int sum = 0;
//     int i = 0;
//     while (a != 0)
//     {
//         ld = a % 2;
//         a = a / 2;
//         sum = sum * 10 + ld;
//         i++;
//     }
//     return sum;
// }
// int main()
// {
//     int choos;
//     printf("1. binary number to decimal number");
//     printf("\n2. decimal number to binary");
//     printf("\nselect an option which you want = ");
//     scanf("%d", &choos);
//     {
//         switch (choos)
//         {
//         case 1:
//         {
//             long long n;
//             printf("enter the number = ");
//             scanf("%lld", &n);
//             int res = convertbd(n);
//             printf("%d", res);
//         }
//         break;
//         case 2:
//         {
//             int n;
//             printf("enter the number = ");
//             scanf("%d", &n);
//             int res = convertdb(n);
//             printf("%d", res);
//         }
//         break;

//         default:
//             printf("invalid number please salact a valid number");
//         }
//     }
// }
//--------------------------------------------------------------------------------------------------------
// 10. Write program to display number in hexadecimal form