#include <stdio.h>
// // QUS 1
// int fect(int n)
// {
//     if (n == 1)
//         return 1;
//     int ans = n * fect(n - 1);
//     return ans;
// }
// int main()
// {

//     int n;
//     printf("entr the number = ");
//     scanf("%d", &n);
//     int res = fect(n);
//     printf("the fectorial of given no %d is = %d", n, res);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// QUS 2 print n to 1 no by recurtion
// void dicrising(int n)
// {
//     if (n == 0) return;
//
//     else
//     {
//         printf("%d ", n); // id code ko agar recursion ke nivhe likhe to sidhi ginti print hogi
//         dicrising(n - 1);
//     }
// }
// int main()
// {
//     int n;
//     printf(" entr the number  = ");
//     scanf("%d", &n);
//     dicrising(n);
// }
//--------------------------------------------------------------------------------------------------------
// QUS 3 print 1 to n
// void incrising(int x, int n)
// {
//     if (x > n)
//         return;

//     else
//     {
//         printf("%d ", x);
//         incrising(x + 1, n);
//     }
//     return;
// }
// int main()
// {
//     int n;
//     printf(" entr the number  = ");
//     scanf("%d", &n);
//     incrising(1, n);
// }
//--------------------------------------------------------------------------------------------------------
// QUS 4 print sum from 1 to n

// int sum(int n)
// {
//     if (n == 0)
//         return;
//     else
//     {
//         int ans;
//         ans = n + sum(n-1);
//         return ans;
//     }
// }

// int main()
// {
//     int n;
//     printf(" entr the number  = ");
//     scanf("%d", &n);
//     int res = sum(n);
//     printf("the sum of given number is = %d", res);
// }
//--------------------------------------------------------------------------------------------------------
// QUS 5 wap to caluculate a multiplication upto n power
// int powermulti(int a, int b)
// {
// if (b<=0)    return 1;
//     int ans = a *powermulti(a,b-1);
//     return ans;
// }

// int main()
// {
//     int a;
//     printf("entr the number = ");
//     scanf("%d", &a);
//     int n;
//     printf("entr the power = ");
//     scanf("%d", &n);
//     int res = powermulti(a, n);
//     printf("the result is = %d", res);
// }
//--------------------------------------------------------------------------------------------------------
// QUS 6 print fibonaki serise using function
// int fibo(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     else
//     {
//         int ans = fibo(n - 1) + fibo(n - 2);
//         return ans;
//     }
// }
// int main()
// {
//     int n;
//     printf(" enter the number = ");
//     scanf("%d", &n);
//     printf("Fibonacci series up to %d terms:\n", n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d number = %d \n", i, fibo(i));
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// QUS 7 stair path single step duble stape tripel stap

// int stap(int n)
// {
//     if (n <= 3)
//         return n;

//     else
//     {
//         int ans = stap(n - 1) + stap(n - 2) + stap(n - 3);
//         return ans;
//     }
// }
// int main()
// {
//     int n;
//     printf(" enter the number = ");
//     scanf("%d", &n);
//     int res = stap(n);
//     printf("%d", res);
// }
//--------------------------------------------------------------------------------------------------------
