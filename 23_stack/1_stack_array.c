
/* STACK WITH ARRAY PROGRAM TP ADD , REMOVE ELEMENTS FROM STACK AND DISPLAY IT WITH FUNCTIONS */

#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

/* FUNCTION TO ADD NEW ELEMENT TO STACK */

void push()
{
    int x;
    printf("Enter the input for stack : ");
    scanf("%d",&x);
    if(top == N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

/* FUNCTION TO REMOVE A ELEMENT FROM STACK */

void pop()
{
    int item;
    if(top == -1){
        printf("Underflow or stack is empty\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d is removed from the stack\n",item);
    }
}

/* FUNCTION TO PRINT TOP ELEMENT VALUE FROM STACK */

void peek(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("%d is the top stack value\n", stack[top]);
    }
}

/* FUNCTION TO PRINT ALL ELEMENT VALUES FROM STACK */

void display()
{
    int i;
    printf("From top to bottom\n");
    for(i = top; i >= 0; i--)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");

    int j;
    printf("From bottom to top\n");
    for(j = 0; j <= top; j++)
    {
        printf("%d\t",stack[j]);
    }
    printf("\n");
}

void isEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

 
void isFull()
{
    if (top == N -1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full\n");

    }
}
int main()
{
    int choice;
    do{
        printf("\nEnter choice: \n 1 : push , 2 : pop, 3 : peek, 4 : display, 0 : exit \n");
        printf(" 5 : to check stack is empty or not\n 6 : to check stack is full or not\n 0 : exit \n");
        printf("\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: push();
                break; 
        case 2: pop();
                break;
        case 3: peek();
                break;
        case 4: display();
                break;
        case 5: isEmpty();
                break;
        case 6: isFull();
                break;
        default:
                printf("Enter a valid choice\n");
                break;
        }
    }while(choice != 0);
    return 0;
}