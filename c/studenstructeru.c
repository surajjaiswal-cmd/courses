// #4. Write a structure to store the roll no., name, age (between 11 to 14) and address of
// students (more than 10). Store the information of the students.
// 1 - Write a function to print the names of all the students having age 14.
// 2 - Write another function to print the names of all the students having even roll no.
// 3 - Write another function to display the details of the student whose roll no is given
// (i.e. roll no. entered by the user).
#include <stdio.h>
struct address
{
    int housno;
    char colony[20];
    char city[20];
};

struct studens
{
    int rollno;
    char name[20];
    int age;
    struct address add;
} s[4];

void getdata()
{
    int n = 1;
    for (int i = 0; i < 4; i++)
    {
        printf("enter the roll no. of %d student = ", n);
        scanf("%d", &s[i].rollno);
        printf("enter the name of %d student = ", n);
        scanf("%s", &s[i].name);
        printf("enter the age of %d student = ", n);
        scanf("%d", &s[i].age);
        printf("enter the house no. of %d student = ", n);
        scanf("%d", &s[i].add.housno);
        printf("enter the colony of %d student = ", n);
        scanf("%s", &s[i].add.colony);
        printf("enter the city of %d student = ", n);
        scanf("%s", &s[i].add.city);
        n++;
    }
}
void age14()
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s[i].age >= 14)
        {
            printf("roll no. = %d\t", s[i].rollno);
            printf("name = %s\t", s[i].name);
            printf("age = %d\t", s[i].age);
            printf("house no. = %d\t", s[i].add.housno);
            printf("colony = %s\t", s[i].add.colony);
            printf("city = %s\t", s[i].add.city);
            count++;
            printf("\n");
        }
    }
    printf("\n");
    printf("%d students having age 14 plus ", count);
}
void evenno()
{
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (s[i].rollno % 2 == 0)
            {
                printf("roll no. = %d\t", s[i].rollno);
                printf("name = %s\t", s[i].name);
                printf("age = %d\t", s[i].age);
                printf("house no. = %d\t", s[i].add.housno);
                printf("colony = %s\t", s[i].add.colony);
                printf("city = %s\t", s[i].add.city);
                count++;
                printf("\n");
            }
        }
        printf("\n");
        printf("%d students having even roll number", count);
    }
}
int main()
{
    getdata();
    age14();
    printf("\n");
    evenno();
    return 0;
}