#include<stdio.h>
#include<string.h>

typedef struct employee
{
    char name[20];
    int id;
    int age;
    float salary;
}emp_t;

void detail(emp_t emp1){
    
    printf("\nDetails of Employees :\n");
    printf("Name : %s\n",emp1.name);
    printf("ID : %d\n",emp1.id);
    printf("Age : %d\n",emp1.age);
    printf("Salary : %.2f\n",emp1.salary);

}

int main (){

    emp_t emp1;

    printf("Enter the name:");
    scanf("%[^\n]",emp1.name);
    printf("Enter the ID:");
    scanf("%d",&emp1.id);
    printf("Enter the age:");
    scanf("%d",&emp1.age);
    printf("Enter the salary:");
    scanf("%f",&emp1.salary);
    
    detail(emp1);

    return 0;
}