#include <stdio.h>
int main()
{

    int choos;
    printf("1. odd even");
    printf("\n2. leap year ");
    printf("\n3. buy price and sellin price ");
    printf("\n4. divisible by 5 or 3");
    printf("\n5. biggest no in 4 digit");
    printf("\n6. who is biggest in ram shyam and lakha");
    printf("\nenter your choice = ");
    scanf("%d", &choos);
    switch (choos)
    {
    case 1:
    {
        int n;
        printf("enter the number = ");
        scanf("%d", &n);
        if (n % 2 == 0)
        { // EVEN LOGIC
            printf("even hai bhai o_O");
        }
        if (n % 2 == 1)
        { // ODD LOGIC iski jagah else bhi use kar sakte hai sam work hoga
            printf("odd hai bhai o_O");
        }
    }
    break;
    case 2:
    {
        // leap year find Krna int year;
        int year;
        printf("enter the year = ");
        scanf("%d", &year);
        if (year % 4 == 0)
        {
            printf("it is a leap year o_O");
        }
        else
        {
            printf(" it is not leap year (,o_o)");
        }
    }
    break;
    case 3:
        //(questio cost price or selling price me price diffrance and kitna loss huaa ya profite velue user se leni hai) float cp, sp, profiteandloss;
        {
            int cp, sp, profiteandloss;
            printf("enter cost price =");
            scanf("%f", &cp);
            printf("enter selling price =");
            scanf("%f", &sp);
            if (cp > sp)
            {
                printf("loss huaa bhai shab");
            }
            if (sp > cp)
            {
                printf("profit huaa bhai shab");
            }
            if (sp == cp)
            {
                printf("na loss huaa na profite");
            }
            // profiteandloss = sp - cp;
            // printf("\ntotal profit and loss =%f", profiteandloss);
        }
        break;
    case 4:
    {
        //(user input 3 5 dono se divaide hoga ya nhi) int num;
        int num;
        printf("enter a value =");
        scanf("%d", &num);
        if (num % 3 == 0 && num % 5 == 0)
        {
            printf("ha ho jayega");
        }
        else
        {
            printf("nhi honga");
        }
    }
    break;
    case 5:
    {
        // (gretest no in three digit) int a, b, c, d;
        int a, b, c, d;
        printf("inter 1st value =");
        scanf("%d", &a);
        printf("inter 2nd value =");
        scanf("%d", &b);
        printf("inter 3rd value =");
        scanf("%d", &c);
        printf("inter 4th value =");
        scanf("%d", &d);
        if (a > b && a > c && a > d)
        {
            printf("1st number is bigger the 2nd or 3rd or 4th");
        }
        if (b > a && b > c && b > d)
        {
            printf("2nd number is biger then 1st or 3rd or 4th");
        }
        if (c > a && c > b && c > d)
        {
            printf("3rd number is biger then 1st or 2nd or 4th");
        }
        if (d > a && d > b && d > c)
        {
            printf("4th number is biger then 1st or 2nd or 3rd ");
        }
    }
    break;
    case 6:
    {
        // nested loss pe pta lgao ki ram shyam lakhan mei kon bda hai int user se lena ahi int ram, shyam, lakhan;
        int ram, shyam, lakhan;
        printf("inter 1st value =");
        scanf("%d", &ram); // 4
        printf("inter 2nd value =");
        scanf("%d", &shyam); // 5
        printf("inter 3rd value =");
        scanf("%d", &lakhan); // 6
        if (ram > shyam)
        {
            if (ram > lakhan)
                printf("ram sabhi se bda hai");
            else
                printf("lakhan sabhi se bda hai");
        }
        else
        {
            if (shyam > lakhan)
                printf("shyam sabhi mai bda hai");
            else
                printf("lakhan sabhi se bda hai");
        }
    }
    break;
    default:
        printf("choss no. not valid");
    }
    // 81 <= a grede 61 <= b grede 41 <= c grede 40 >= d grade dena input user se lena hai int n;
    // printf("enter number :");
    // scanf("%d", &n);
    // if (n >= 80)
    // {
    //     printf("A grade");
    // }
    // else if (n >= 60)
    // {
    //     printf("B grade");
    // }
    // else if (n >= 40)
    // {
    //     printf("C grade");
    // }
    // else
    // {
    //     printf("D grade");
    // }

    return 0;
}
