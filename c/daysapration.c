#include <stdio.h>
int main()
{

    int day, year, month, week, rem;
    printf("enter the no. of days =");
    scanf("%d", &day);
    year = day / 365;
    rem = day % 365;
    printf("year = %d", year);
    month = rem / 30;
    rem = rem % 30;
    printf("\nmonth = %d", month);
    week = rem / 7;
    rem = rem % 7;
    printf("\nweek = %d", week);
    printf("\nrem days = %d", rem);

    return 0;
}
