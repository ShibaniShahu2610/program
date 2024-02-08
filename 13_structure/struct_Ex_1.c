#include<stdio.h>
#include<string.h>
struct employee
{
    char *name;
    int age;
    float salary;
};

int manager(){
    struct employee manager;
    manager.age = 25; 
    if(manager.age < 30)
        manager.salary = 40000;
    else
        manager.salary = 50000;
    
    return manager.salary;
}

int main(){
    struct employee emp1;
    struct employee emp2;

    printf("Enter the salary for employee 1:\n");
    scanf("%f",&emp1.salary);
    printf("Enter the salary for employee 2:\n");
    scanf("%f",&emp2.salary);
    printf("Employee 1's salary is : %f\n",emp1.salary);
    printf("Employee 2's salary is : %f\n",emp2.salary);
    printf("manager's salary is %d\n",manager());
return 0;
}