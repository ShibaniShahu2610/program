//Program to access the structure member using structure pointer and arrow (->) operator

#include<stdio.h>
struct employee
{
    char *name;
    int age;
    float salary;
}emp1;

int main()
{
struct employee *ptr;
ptr = &emp1;

emp1.name = "Shibani";
emp1.age = 20;
emp1.salary = 20000;

printf("Employee 1 name : %s\n", ptr -> name);
printf("Employee 1 age : %d\n", ptr -> age);
printf("Employee 1 salary : %f\n", ptr -> salary);

return 0;
}