#include <stdio.h>
int main()

{
    // qus 1 normal patter printing of star and numbers

    // int n;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // // printf("enter the number of rows = ");
    // // scanf("%d",&r);
    // for (int i =1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 2 revers patter printing of star and numbers
    // int n;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // // printf("enter the number of rows = ");
    // // scanf("%d",&r);
    // for (int i = n; i >= 1; i--)
    // {

    //     for (int j = i; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }

    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 2 alfhabets pattern making
    // int n;
    // char ch;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     ch = 'A';
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 3 patter printing for lfhabets and number
    // int n, i;
    // char ch;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             printf("%d", j);
    //         }
    //     }
    //     else
    //     {
    //         ch = 'A';
    //         for (int j = 1; j <= i; j++)
    //         {
    //             printf("%c", ch);
    //             ch++;
    //         }
    //     }
    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 4 print plus logo with the help of stars
    // int n;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         int a = n / 2 + 1;
    //         if (j == a || i == a)

    //             printf("*");
    //         else

    //             printf(" ");
    //     }

    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 5  print hollow rectangle with the help of stars

    // int c, r, i, j;
    // printf("enter the number of colom  = ");
    // scanf("%d", &c);
    // printf("enter the number of rows = ");
    // scanf("%d", &r);
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= c; j++)
    //     {
    //         if (j == 1 || j == c || i == 1 || i == r)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    //--------------------------------------------------------------------------------------------------------
    // qus 6
    // 1
    // 23
    // 456
    // 78910
    // 1112131415 print this pattern
    // int n;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)

    //     {
    //         if (a%2==0)
    //         printf("%d", a);
    //         a++;
    //     }
    //     printf("\n");
    // }

    //--------------------------------------------------------------------------------------------------------
    // qus 6 print 1,01,101
    // int n, k;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)

    //     {
    //         k = i + j;
    //         if (k % 2 == 0)
    //             printf("1");
    //         else
    //             printf("0");
    //         a++;
    //     }
    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 7 print
    //     *
    //    **
    //   ***
    //  ****
    // *****
    // int n, a;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     a = n - i;
    //     for (int j = 1; j <= a; j++)
    //         printf(" ");
    //     for (int k = 1; k <= n; k++)
    //         printf("*");

    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 8 print
    //    A
    //   AB
    //  ABC
    // ABCD
    // int n, a;
    // char ch;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     a = n - i;
    //     for (int j = 1; j <= a; j++)
    //     {
    //         printf(" ");
    //     }
    //     ch = 'A';
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }

    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 9 print piramid of stars and number and alfha bets
    //    *
    //   ***
    //  *****
    // *******
    int n, a, nos;
    printf("enter the number of colom and rows = ");
    scanf("%d", &n);

    nos = 1;
    for (int i = 1; i <= n; i++)
    {
        a = n - i;
        for (int j = 1; j <= a; j++)
            printf("#");
        for (int k = 1; k <= nos; k++)
        {
            printf("*");
        }

        printf("\n");
        nos = nos + 2;
    }
    //--------------------------------------------------------------------------------------------------------
    // qus 8 print for alfhabets and number
    //    1
    //   121
    //  12321
    // 1234321
    //     A
    //    ABA
    //   ABCAB
    //  ABCDABC
    // ABCDEABCD
    // int n, a, nos, b;
    // char ch;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     a = n - i;
    //     b = i - 1;
    //     for (int j = 1; j <= a; j++)
    //     {
    //         printf(" ");
    //     }
    //     ch = 'A';
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     ch = 'A';
    //     for (int l = b; l >= 1; l--)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 8 print the patter
    // ABCDEFGHIJKLMNO
    // ABCDEFG IJKLMNO
    // ABCDEF   JKLMNO
    // ABCDE     KLMNO
    // ABCD       LMNO
    // ABC         MNO
    // AB           NO
    // A             O
    // int n, a;
    // char ch;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // ch = 'A';
    // int nos = 1;
    // int noc = n;
    // int cp = n / 2 + 1;
    // for (int i = 1; i <= n * 2 + 1; i++)
    // {
    //     printf("%c", ch);
    //     ch++;
    // }
    // printf("\n");
    // for (int j = 1; j <= n; j++)
    // {
    //     ch = 'A';
    //     for (int k = 1; k <= noc; k++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     for (int j = 1; j <= nos; j++)
    //     {
    //         printf(" ");
    //         ch++;
    //     }
    //     for (int k = 1; k <= noc; k++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     noc--;
    //     nos += 2;

    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------------------
    // qus 9  print the patter
    // int n, a;
    // char ch;
    // printf("enter the number of colom and rows = ");
    // scanf("%d", &n);
    // ch = 'A';
    // int nos = 1;
    // int noc = n;
    // int cp = n / 2 + 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%c", ch);
    //     ch++;
    // }
    // for (int i = n + 1; i >= 1; i--)
    // {
    //     printf("%c", ch);
    //     ch--;
    // }
    // printf("\n");
    // for (int j = 1; j <= n; j++)
    // {
    //     ch = 'A';
    //     for (int k = 1; k <= noc; k++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     for (int j = 1; j <= nos; j++)
    //     {
    //         printf(" ");
    //         // ch++;
    //     }
    //     for (int l = noc + 1; l >= 1; l--)
    //     {
    //         if (noc != 4)
    //         {
    //             printf("%c", ch);
    //             ch--;
    //         }
    //     }
    //     noc--;
    //     nos += 2;

    //     printf("\n");
    // }

    return 0;
}