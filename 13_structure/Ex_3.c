#include <stdio.h>

typedef struct students {
    char name[20]; 
    int roll_no;
    float mark;
} student_t;

void detail(student_t *stu) {
    printf("Enter the details of students:\n");
    printf("Enter the name: ");
    scanf(" %[^\n]", stu->name);
    printf("Enter the Roll number: ");
    scanf("%d", &stu->roll_no);
    printf("Enter the mark: ");
    scanf("%f", &stu->mark);
}

void display(student_t stu) {
    printf("Name    : %s\n", stu.name);
    printf("Roll No : %d\n", stu.roll_no);
    printf("Marks   : %.2f\n", stu.mark);
}

int main() {
    student_t stu;
    detail(&stu); 
    display(stu);
    return 0;
}
