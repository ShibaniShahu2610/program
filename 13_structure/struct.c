#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int age;
    float salary;
}emp1, emp2;

int main()
{
strcpy(emp1.name, "Shibani");
emp1.age = 20;
emp1.salary = 20000;

strcpy(emp1.name, "Piyu");
emp1.age = 20;
emp1.salary = 19000;

printf("Employee 1 name : %s\n",emp1.name);
printf("Employee 1 age : %d\n",emp1.age);
printf("Employee 1 salary : %f\n",emp1.salary);

printf("Employee 2 name : %s\n",emp1.name);
printf("Employee 2 age : %d\n",emp1.age);
printf("Employee 2 salary : %f\n",emp1.salary);

    return 0;
}