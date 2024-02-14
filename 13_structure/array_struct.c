#include<stdio.h>
#include<string.h>
#define N 2      // NUMBER OF EMPLOYEE
struct employee
{
    char name[20];
    int age;
    float salary;
};

int main (){
    struct employee emp[N];
    int i;
    for(i = 0; i < N; i++)    
    {
        printf("\nEnter the name of employee %d : ", i+1);
        scanf("%s",&emp[i].name);
        printf("\nEnter the age of employee %d : ", i+1);
        scanf("%d",&emp[i].age);
        printf("\nEnter the salary for employee %d : ", i+1);
        scanf("%f",&emp[i].salary);
    };

    printf("\n");
    for(i = 0; i < N; i++){
        printf("Details of employee %d\n", i+1);
        printf("Name: %s\n",emp[i].name);
        printf("Age: %d\n",emp[i].age);
        printf("Salary: %f\n",emp[i].salary);
        printf("\n");
    }
    return 0;
}