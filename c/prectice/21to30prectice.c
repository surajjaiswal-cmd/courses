#include <stdio.h>
// 21. Write c program to reverse a number
// 22. Write c program to find largest number of a list of numbers entered through keyboard
// 23. Write c Program to calculate and print the sum of even and odd integers of
// the first n natural numbers.
// 24. Write c Program to find area of a triangle when there sides are given.
// 25. Write c Program to find whether a number is divisible by ‘11’ or not without
// actual division.
// 26. Write c Program to check whether a number is prime number or not
// 27. Write c Program to print following series using function: x + x^3/3! + x^5/5!
// +.......+ x^n/n!
// 28. Write c program to find sum of series 1 + 2 + 3 +......+ n
// 29. Write c program to find sum of series 1/2+4/5+7/8+......
// 30. Write c program to find sum of series 1+x+x^2+......+x^n
//--------------------------------------------------------------------------------------------------------
// 21. Write c program to reverse a number
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int i = 0;
//     int  ld;
// int sum =0;
//     while (n!=0)
//     {
//         ld = n%10;
//         sum = sum *10+ld;
//         n = n/10;
//         i++;
//     }
//     printf("%d",sum);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 22. Write c program to find largest number of a list of numbers entered through keyboard
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int arr[n];
//         printf("enter element of array = ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int b =arr[0] ;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>b)
//         b=arr[i];
//     }
// printf("the biggest number is = %d",b);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 23. Write c Program to calculate and print the sum of even and odd integers of the first n natural numbers.
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int arr[n];
//         printf("enter element of array = ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int esum=0;
//     int osum=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]%2==0)
//         osum = osum + arr[i];
//         else
//         esum = esum + arr[i];
//     }
// printf("the sum of odd numbe is  = %d\n",osum);
// printf("the sum of even numbe is  = %d",esum);
//     return 0;
// }
//-----------------------------------------------------------------------------------------------------
// 24 Write c Program to find area of a triangle when there sides are given.
// int main()
// {
//     int b;
//     printf("enter base = ");
//     scanf("%d", &b);
//     int h;
//     printf("enter height = ");
//     scanf("%d", &h);
//     int ans = (b*h)/2;
//     printf("%d",ans);

//     return 0;
// }
//-----------------------------------------------------------------------------------------------------
// 25. Write c Program to find whether a number is divisible by ‘11’ or not without
// actual division.
// int main()
// {
//     int num, sum_odd = 0, sum_even = 0, rem;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int original_num = num; // Store the original number

//     // Find the sum of odd and even digits
//     if (num < 0)
//         num = -num;
//     while (num > 0)
//     {
//         rem = num % 10;
//         if (rem % 2 == 0)
//         {
//             sum_even += rem;
//         }
//         else
//         {
//             sum_odd += rem;
//         }
//         num /= 10;
//     }

//     printf("Even sum = %d\n", sum_even);
//     printf("Odd sum = %d\n", sum_odd);
//     int ans = sum_odd - sum_even;
//     printf("ans  = %d\n", ans);
//     if ((ans) % 11 == 0)
//     {
//         printf("The number %d is divisible by 11.\n", original_num);
//     }
//     else
//     {
//         printf("The number %d is not divisible by 11.\n", original_num);
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 26. Write c Program to check whether a number is prime number or not
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//    int  count = 0;
//   for (int i = 2; i < n; i++)
//   {
//     if (n%i==0)
//     count++;
//   }
//   if (count == 0)
//   printf("the given %d number is prime number",n);
//   else
//   printf("the given %d number is not prime number",n);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 27. Write c Program to print following series using function: x + x^3/3! + x^5/5!
// +.......+ x^n/n!
// #include <math.h>
// int power(int a, int x)
// {
//     int res = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         res = res * a;
//     }

//     //  printf("power = %d\n", res);
//     return res;
// }
// int factorial(int a)
// {
//     int ans = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         ans = ans * i;
//     }
//     //  printf("fectorial = %d\n", ans);
//     return ans;
// }
// float solve(int a, int x)
// {

//    float result = 0;
//     for (int i = 1; i <= x; i += 2) {
//         result += (float)(power(a, i) / factorial(i));
//     }
//     return result;
// }
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int x;
//     printf("enter power = ");
//     scanf("%d", &x);
//     float res = solve(n, x);
//     printf("answer is = %f", res);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 28. Write c program to find sum of series 1 + 2 + 3 +......+ n
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     int sum = 0;
//     int i = 1;
//     while (i<=n)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("answer is = %d", sum);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 29. Write c program to find sum of series 1/2+4/5+7/8+......
// int main()
// {
//     int n;
//     printf("enter number = ");
//     scanf("%d", &n);
//     float sum = 0;
//     float a = 1;
//     float b = 2;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + a / b;
//         a += 3;
//         b += 3;
//     }
//     printf("answer is = %f", sum);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 30. Write c program to find sum of series 1+x+x^2+......+x^n
int power(int a, int x)
{
    int res = 1;
    for (int i = 1; i <= x; i++)
    {
        res = res * a;
    }

    //  printf("power = %d\n", res);
    return res;
}

float solve(int a, int x)
{

    float result = 1;
    for (int i = 1; i <= x; i++)
    {
        result += power(a, i);
    }
    return result;
}
int main()
{
    int n;
    printf("enter number = ");
    scanf("%d", &n);
    int x;
    printf("enter power = ");
    scanf("%d", &x);
    float res = solve(n, x);
    printf("answer is = %f", res);
    return 0;
}
