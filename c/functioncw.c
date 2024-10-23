#include <stdio.h>
// int main()
// {

// QUS 1 PASCAL trangle by function
// int fecto(int n)
// {
//     int fecto = 1;
//     for (int i = 1; i <= n; i++)
//         fecto = fecto * i;
//     return fecto;
// }
// int combi(int x, int y)
// {
//     int xcy = fecto(x) / (fecto(y) * fecto(x - y));
//     return xcy;
// }
// int main()
// {
//     int n, a;
//     printf("enter the number of roe and colome = ");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         a = n - i;
//         for (int j = 0; j <= a; j++)
//             printf(" ");
//         for (int k = 0; k <= i; k++)
//         {
//             int ick = combi(i, k);
//             printf("%d ", ick);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// qus 2 hcf of any two number high fectorial number
// int min(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// int gcf(int a, int b)
// {
//     int hcf;
//     for (int i = 1; i < min(a,b); i++)
//     {
//         if (a % i == 0 && b % i == 0)
//             hcf = i;
//     }
//     return hcf;
// }
// int main()
// {
//     int a;
//     printf("entre the frist value = ");
//     scanf("%d",&a);
//     int b;
//     printf("entr the second value = ");
//     scanf("%d",&b);
//     int res = gcf(a,b);
//     printf("the hcf of given no %d and %d is = %d ",a,b,res);

// }
//--------------------------------------------------------------------------------------------------------
// qus 3 fint the fectorial of n number by function
// int fect(int n)
// {
// if (n == 0)
//     printf("not available fectorial of negative number ");
// else
// {
//     int fec = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fec = fec * i;
//         // n = n - 1;
//     }
//     return fec;
// }
// }
// int main()
// {
//     int n;
//     printf("enter the no = ");
//     scanf("%d", &n);
//     int res = fect(n);
//     printf(" fectorial of given no %d is = %d",n,res);

// }
//--------------------------------------------------------------------------------------------------------
// qus 4 wap to print fhibonaki serise upto nth turm
// void fibo(int n)
// {
//     if (n == 0 || n == 1)
//         printf("1");
//     else
//     {
//        int a1 = 0;
//        int a2 = 1;
//         int sum = 1;
//         // n = n - 2;
//         for (int i = 1; i <= n; i++)
//         {
//             sum = a1 + a2;
//             a1 = a2;
//             a2 = sum;
//             printf(" the %dth fibonacci no. is = %d \n", i, a1);
//         }
//         // printf("the %dth fibonacci is = %d", n, sum);
//     }
// }

// int main()
// {
//     int n;
//     printf("entre the number = ");
//     scanf("%d", &n);
//     fibo(n);

// }