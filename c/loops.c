#include <stdio.h>
int main()
{

    // // QUS 1= type hello dewas n time
    // int n;
    // printf("enter number = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("hello dewas\n");
    // }
    //--------------------------------------------------------------------------------------------------------

    // QUS 2 = ENETR ALL OOD OR EVEN NUMBER IN 100
    // int n = 100;
    // // for odd
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d \t", i);
    //     }
    // }
    // printf("\n");
    // //for even
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d\t", i);
    //     }
    // }
    //--------------------------------------------------------------------------------------------------------

    // // QUS 3 = table of n number
    // int i,n, l;
    // printf("enter number = ");
    // scanf("%d", &n);
    // printf("enter how long you want table = ");
    // scanf("%d",&l);
    // l=n*l;
    // for (i = n; i <= l; i = i + n)
    // {
    //     printf("%d \t", i);
    // }
    // for (i = l ; i >= n ; i = i-n)
    // {
    //     printf("%d \t", i);
    // }
    //--------------------------------------------------------------------------------------------------------

    // QUS 4 = ENETR ALL OOD OR EVEN NUMBER upto nth
    // int n;
    // printf("entr limit = ");
    // scanf("%d",&n);
    // // for odd
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d \t", i);
    //     }
    // }
    // printf("\n");
    // //for even
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d\t", i);
    //     }
    // }
    //--------------------------------------------------------------------------------------------------------

    // // QUS 5 display ap 4,7,10,13....upto n
    // int n;
    // printf("enter the no = ");
    // scanf("%d", &n);
    // int a = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", a);
    //     a = a + 3;
    // }
    //--------------------------------------------------------------------------------------------------------

    // // QUS 6 display gp 1,2,4,8....upto n
    // int n;
    // printf("enter the no = ");
    // scanf("%d", &n);
    // int a = 1; for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", a);
    //     a = a * 2;
    // }
    //--------------------------------------------------------------------------------------------------------

    // QUS 7 Decreasing ap 100,97,94,91.... posible positive no.
    //  long int a=100,n;
    // printf("enter limit = ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     // if (a >= 0) // IF only positive no ke liye use hoga;-
    //     // {
    //         printf("%d ", a);
    //         a = a - 3;
    //     // }

    // }
    //--------------------------------------------------------------------------------------------------------

    // QUS 8 display this gp 3,12,48......nth term
    // int n, a = 3;
    // printf("enter limit = ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", a);
    //     a = a * 4;
    // }
    //--------------------------------------------------------------------------------------------------------

    // display thi ap 100,50,25.....positive no.
    // float n, a;
    // printf("enter limit = ");
    // scanf("%f", &n);
    // a = 100;
    // for (float i = 1; i <= n; i++)
    // {
    //     if (a > 0)
    //     {
    //         printf("%f \n", a);
    //         a = a / 2;
    //     }
    // }
    //--------------------------------------------------------------------------------------------------------

    // QUS 9 find given no. is prime or not by break statment by while loop
    // int n, a;
    // printf("enter a number = ");
    // scanf("%d", &n);
    // a = 0;
    // int i = 2;
    // while (i <= n - 1)
    // {
    //     if (i % n == 0)
    //     {
    //         a = 1;
    //         break;
    //     }
    //     i++;
    // }
    // if (a == 0)
    //     printf("the given number %d is a prime number", n);
    // else
    //     printf("the given number %d is a composit number", n);
    //--------------------------------------------------------------------------------------------------------

    // QUS 10 wap to print all odd number from 1 to 100 by continue statment
    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i & 2 != 0)
    //         continue;
    //     printf("%d\t", i);
    // }

    //--------------------------------------------------------------------------------------------------------
    // QUS 11 wap to find sum of digit f given number

    //    long int n, sum,ld,org;
    //     printf("enter a number = ");
    //     scanf("%d", &n);
    //     sum = 0;
    //     org = n ;
    //     while (n > 0)
    //     {
    //         ld = n % 10;
    //         sum = sum + ld;
    //         n = n/10;
    //     }
    //     printf("the sum of given numbers %d = %d", org, sum);

    //--------------------------------------------------------------------------------------------------------
    // QUS 12 wap to find sum of even no. of given digit

    // int n, sum, ld, org;
    // printf("enter a number = ");
    // scanf("%d", &n);
    // sum = 0;
    // org = n;
    // while (n > 0)
    // {
    //     ld = n % 10;
    //     if (ld % 2 == 0)
    //     {
    //         sum = sum + ld;
    //     }
    //     n = n / 10;
    // }
    // printf("the sum of given numbers %d = %d", org, sum);

    //--------------------------------------------------------------------------------------------------------
    // QUS 13 wap to revers number

    //     long int n, rev, ld;
    //     printf("enter a number = ");
    //     scanf("%d", &n); // 54321
    //     rev = 0;
    //    long int org = n;
    //     while (n > 0)
    //     {
    //         ld = n % 10; //
    //         rev = rev * 10 + ld;
    //         n = n / 10;
    //     }
    //     printf("revers of %d is = %d", org, rev);

    //--------------------------------------------------------------------------------------------------------
    // QUS 14 WAP to print the sum or given no. and its revers
    // long int n, rev, ld, sum;
    // printf("enter a number = ");
    // scanf("%d", &n); // 54321
    // rev = 0;
    // long int org = n;
    // while (n > 0)
    // {
    //     ld = n % 10; //
    //     rev = rev * 10 + ld;
    //     n = n / 10;
    // }
    // printf("revers of %d is = %d\n", org, rev);
    // sum = org+rev;
    // printf("sum or given no. and its revers is = %d",sum);
    //--------------------------------------------------------------------------------------------------------
    // QUS 15 print the factorial of given number
    // int n, fec;
    // printf(" enter a no. = ");
    // scanf("%d", &n);
    // fec = 1;
    // int org = n;
    // while (n > 0)
    // {
    //     fec = fec * n;
    //     n = n - 1;
    // }
    // printf("factorial of given no. %d = %d", org, fec);
    //--------------------------------------------------------------------------------------------------------
    // QUS 16 print fibonacci number of nth term
        int n, a1, a2, sum;
        printf(" enter a no. = ");
        scanf("%d", &n);
        a1 = 0;
        a2 = 1;
        sum = 1;
       // n = n - 2;
        for (int i = 1; i <= n ; i++)
        {
            sum = a1 + a2;
            a1 = a2;
            a2 = sum;
            printf(" the %dth fibonacci no. is = %d \n", i, a1);
        }
       printf("the %dth fibonacci is = %d", n, sum);
    //--------------------------------------------------------------------------------------------------------
    // QUS 17 take 2 number from user and print a to the power b
    // int a, b, i, pow;
    // printf("enter 1st the no = ");
    // scanf("%d", &a);
    // printf("enter 2nd the no = ");
    // scanf("%d", &b);
    // pow = 1;
    // i = 1;
    // while (i <= b)
    // {
    //     pow = pow * a;
    //     i++;
    // }
    // printf("answer = %d", pow);
    //--------------------------------------------------------------------------------------------------------
    // QUS 18 find all armstrong no. from 1 to 500
    // int ld, q, sum;
    // sum = 0;
    // for (int i = 1; i <= 500; i++)
    // {
    //     ld = i%10;
    //     q = ld*ld*ld;
    //     sum = sum+q;
    //     i = i/10;
    //     if ( i == sum)
    //     printf(" %d is a armstrong no \t",i);
    // }

    return 0;
}
