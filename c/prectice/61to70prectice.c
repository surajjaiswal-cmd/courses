#include <stdio.h>
// 61. Write a program to Print ASCII value of Digits, Uppercase and Lowercase
// alphabates.
// 62. Write a c Program to raise any number x to a positive power n.
// 63. Write a c Program to convert given inches into equivalent yard, feet and
// inches.
// 64. Write a c Program to Find ASCII value of a character.
// 65. Write c Program to reverse all the strings stored in an array
// 66. Write c Program to concatenate two strings

//--------------------------------------------------------------------------------------------------------
// 61. Write a program to Print ASCII value of Digits, Uppercase and Lowercase
// alphabates.
// int main()
// {
//     char ch = 'A';
//     printf("ASCII value of uppercase \n");
//     for (int i = 1; i <= 50; i++)
//     {
//         printf("%c = %d\n",ch,ch);
//         ch++;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 62. Write a c Program to raise any number x to a positive power n.
// int main()
// {
//     int x;
//     printf("enter the number = ");
//     scanf("%d", &x);

//     int n;
//     printf("enter the number = ");
//     scanf("%d", &n);
//     int res = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         res = res * x;
//     }
//     printf("answer = %d",res);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 63. Write a c Program to convert given inches into equivalent yard, feet and
// inches.
// int main()
// {
//     int x;
//     printf("enter value in inche = ");
//     scanf("%d", &x);
//     int feet, inche;
//     feet = x / 12;
//     inche = x % 12;
//     printf("%d feet %d inche ",feet,inche);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 64. Write a c Program to Find ASCII value of a character.
// int main()
// {
//     char ch;
//     printf("inter character = ");
//     scanf("%c",&ch);
//     printf("ASCII value of %ch = %d",ch,ch);

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 65. Write c Program to reverse all the strings stored in an array
// #include <string.h>

// int main()
// {
//     char str[100];
//     char rev[100];
//     printf("enter string = ");
//     gets(str);
//     strcpy(rev, str);
//     strrev(rev);
//     puts(rev);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// 66. Write c Program to concatenate two strings
// #include <string.h>

// int main()
// {
//     char str[100] = "suraj";
//     char rev[100] = " jaiswal";
//     puts(strcat(str, rev));

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
