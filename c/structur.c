#include <stdio.h>
#include <string.h>
// qus 1 make structur to print namge age and salary ro office staff
struct person
{
    char name[30];
    int salary;
    int age;
} p1, p2;
int main()
{
    strcat(p1.name, "nayan mishra");
    p1.salary = 20000;
    p1.age = 23;

    p2.age = 24;
    strcat(p2.name, "vijay lodhi");
    p2.salary = 23000;

    printf("\n%s", p1.name);
    printf("\n%d", p1.age);
    printf("\n%d", p1.salary);
}
