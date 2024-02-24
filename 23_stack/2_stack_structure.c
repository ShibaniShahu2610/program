
/* STACK WITH STRUCTURE */

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = 0;

void push()
{
    int x;
    printf("Enter the value for stack:");
    scanf("%d",&x);

    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->link = top;
    top = new_node;
}

void pop()
{
    struct node *temp;
    temp = top;
    if(top == 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is removed from stack\n",top->data);
        top = top->link;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = top;
    if(top == 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("From top to bottom\n");
        while(temp != 0)
        {
            printf("%d\t",temp->data);
            temp = temp->link;
        }
        printf("\n");  
    }
}

int main()
{
    int choice;
    do{
        printf("Enter choice: \n 1 : push \n 2 : pop \n 3 : peek\n 4 : display\n 0 : exit \n");
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
        default:
                printf("Enter a valid choice\n");
                break;
        }
    }while(choice != 0);

    return 0;
}