#include <stdio.h>
int main()
{
    // // no 1  Take any ten numbers from user and print sum and average of these numbers.
    //     int n , sum,avr;
    //     sum = 0;
    //     for (int i = 1; i <= 10; i++)
    //     {
    //         printf("%d number  = ", i);
    //         scanf("%d", &n);
    //         sum = sum + n;
    //     }
    // printf("sum of 10 numbers is = %d",sum);
    // avr = sum/10;
    // printf("\navr of %d is = %d",sum,avr);

    // no 2 Take any ten numbers from user and print sum and average of positive numbers
    // int n, sum, avr, pcount;
    // sum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d number  = ", i);
    //     scanf("%d", &n);

    //     if (n > 0)
    //     {
    //         sum = sum + n;
    //         pcount++;
    //     }
    // }
    // printf("sum of positive numbers is = %d", sum);
    // avr = sum / pcount;
    // printf("\navr of %d is = %d", sum, avr);

    // // no 3 NEXT Take the numbers from user (until ten +ve numbers entered by the user), and print sum
    // //  and average of these numbers.
    // int n, sum,avr;
    // sum = 0;
    // for (int i = 1; i <= 10;)
    // {
    //     printf("%d number  = ", i);
    //     scanf("%d", &n);

    //     if (n > 0)
    //     {
    //         sum = sum + n;
    //         i++;
    //     }
    // }
    // printf("sum of positive numbers is = %d", sum);

    // avr = sum / 10;
    // printf("\navr of %d is = %d", sum, avr);

    // // no 4 Write a program to calculate sum of digits of a number while loop start and anser is odd or even
    // long int n, ld, sum = 0;
    // printf("enter a number = ");
    // scanf("%d", &n); // 54321
    // int org = n;
    // while (n > 0)
    // {
    //     ld = n % 10;
    //     sum = sum + ld;
    //     n = n / 10;
    // }
    // printf("sum of %d is = %d", org, sum);
    // if (sum % 2 == 0)
    // {
    //     printf("\n the answer is even");
    // }
    // else
    // {
    //     printf("\nthe answer is odd ");
    // }

    // // no 5 Write a program to find out reverse of a given number.
    // long int n, ld, sum = 0;
    // printf("enter a number = ");
    // scanf("%d", &n); // 54321
    // int org = n;
    // while (n > 0)
    // {
    //     ld = n % 10;
    //     sum = (sum*10) + ld; /// revers karne ke liye only sum mai 10 se * karna hai
    //     n = n / 10;
    // }
    // printf("sum of %d is = %d", org, sum);
    // if (sum % 2 == 0)
    // {
    //     printf("\n the answer is even");
    // }
    // else
    // {
    //     printf("\nthe answer is odd ");
    // }

    // // no 6 fectorial find karna
    //  long int n, fec=1;
    //     printf("enter a number = ");
    //     scanf("%d", &n); // 13*12*11....1
    //     int org = n;
    //     while (n > 0)
    //     {
    //         fec = fec*n;
    //         n--;
    //     }
    // printf("the fector of given no%d = %d",org,fec);

    // next topic;= nested loop a loop in another loop
    // qus 1 normal pattrn making of star alfabets an number

    // int a, b, i, j;
    // printf("enter the no. of row = ");
    // scanf("%d", &a);
    // printf("enter the no. of colom = ");
    // scanf("%d", &b);
    // i = 1;
    // while (i <= a)
    // {
    //     printf("\n");
    //     j = 1;
    //     while (j <= b)
    //     {
    //         printf(" * ");
    //         j++;
    //     }
    //     i++;
    // }

    // qus 2 revers pattern making ;-

    // int a, i, j, f;
    // printf("enter the no. of row  = ");
    // scanf("%d", &a);

    // i = 1;
    // while (i <= a)
    // {
    //     printf("\n");
    //     j = 1;

    //     while (j <= i)
    //     {
    //         f = i - j + 1;

    //         printf("%d", f);
    //         j++;
    //     }
    //     i++;
    // }

    // qus 3 Inverted Right Triangle Star Pattern
    //  int a, i, j;
    //  printf("enter the no. of row  = ");
    //  scanf("%d", &a);

    // i = a;
    // while (i >= 1)
    // {
    //     printf("\n");
    //     j = 1;

    //     while (j <= i)
    //     {
    //         printf("*");

    //         j++;
    //     }
    //     i--;
    // }
    // qus 4 make a pattern  for alfabets
    // int a, i, j;
    // char ch;
    // printf("enter the no. of row = ");
    // scanf("%d", &a);

    // i = 1;
    // while (i <= a)
    // {
    //     printf("\n");
    //     ch = 'A';
    //     j = 1;
    //     while (j <= i)
    //     {
    //         printf(" %c ",ch);
    //         ch++;
    //         j++;
    //     }
    //     i++;
    // }

    // qus 5= lcm of two no.
    // int i, j, n1, n2, mex;
    // printf(" enter 1st no. = ");
    // scanf("%d", &n1);
    // printf(" enter 2nd no. = ");
    // scanf("%d", &n2);

    // if (n1 > n2)
    //     mex = n1;
    // else
    //     mex = n2;
    // i = 2 ;
    // while (true)
    // {
    //     if (mex % n1 == 0 && mex % n2 == 0)
    //     {
    //         printf(" the lcm of n1=%d and n2=%d", n1, n2, mex);
    //         break;
    //     }
    //     mex++;
 // 
	int n1,n2,max;
	printf("\nEnter number 1 : ");
	      scanf("%d",&n1);
	printf("\nEnter number 2 : ");
	scanf("%d",&n2);
	if(n1>n2)
		max = n1;
	else
		max = n2;
		
	while(true)
	{
		if(max % n1 == 0 && max % n2 ==0)
		{
			   printf("\n The LCM of %d and %d = %d",n1,n2,max);
		break;
		}
	mx ++;
	}


    return 0;
}