
/* STUDENT DATABASE */

#include<stdio.h>
#include<stdlib.h>
#define MAX_STUDENTS 100

typedef struct student_database{
    int roll_no;
    char name[50];
    char address[100];
} database_t;

void add_data(database_t stu[], int *num_students) 
{
    if (*num_students >= MAX_STUDENTS) {
        printf("Database is full. Cannot add more students.\n");
        return;
    }
    printf("Enter the details of the new student:\n");
    printf("Enter the Roll No: ");
    scanf(" %d", &stu[*num_students].roll_no);
    printf("Enter the name: ");
    scanf(" %[^\n]", stu[*num_students].name);
    printf("Enter the address: ");
    scanf(" %[^\n]", stu[*num_students].address);
    printf("New data added.\n");
    printf("\n");
    (*num_students)++;
}

void del_data(database_t stu[], int *num_students) 
{
    int roll;
    printf("Enter the Roll No to delete that data: ");
    scanf(" %d", &roll);

    int found = 0;
    for (int i = 0; i < *num_students; i++) 
    {
        if (stu[i].roll_no == roll) 
        {
            found = 1;
           
            for (int j = i; j < *num_students - 1; j++) 
            {
                stu[j] = stu[j + 1];
                
                stu[j].roll_no = stu[j+1].roll_no - 1;
            }
            (*num_students)--;
            printf("Data with Roll No %d deleted.\n", roll);
            break;
        }
    }
    if (!found) {
        printf("Data with Roll No %d not found.\n", roll);
    }
}

void display_data(database_t stu[], int num_students) 
{
    printf("Student Database:\n");
    printf("Roll No\t Name\t Address\n");
    for (int i = 0; i < num_students; i++) 
    {
        printf(" %d\t %s\t %s\n", stu[i].roll_no, stu[i].name, stu[i].address);
    }
}

int main() 
{
    database_t stu[MAX_STUDENTS];
    int choice;
    int num_student = 0;

    printf("Choice Information:\n");
    printf("1. To add new student's data\n");
    printf("2. To delete student's data\n");
    printf("3. To display all student's data\n");
    printf("4. To exit\n");

    do {
        printf("Enter your choice: ");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                add_data(stu, &num_student);
                break;
            case 2:
                del_data(stu, &num_student);
                break;
            case 3:
                display_data(stu, num_student);
                break;
            case 4:
                printf("Exit\n");
                break;
            default:
                printf("Enter a valid choice\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
