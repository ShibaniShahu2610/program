
/* QUEUE WITH LINKED LIST */

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
struct node *front = NULL;
struct node *rear = NULL;

/* FUNCTION TO ADD A NODE TO QUEUE */

void enqueue()
{
    int x;
    printf("Enter the input for queue : ");
    scanf("%d",&x);
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->link = NULL;

    if(front == NULL && rear == NULL)
    {
        front = rear = new_node;      // IF QUEUE IS EMPTY, SET BOTH FRONT AND REAR TO THE NEW NODE
    }
    else
    {
        rear->link = new_node;      // OTHERWISE, ADD THE NEW NODE TO THE END OF THE QUEUE AND UPDATE REAR
        rear = new_node; 
    }
}

/* FUNCTION TO REMOVE FIRST NODE OF QUEUE */

void dequeue()
{
    if(front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        struct node *temp;
        temp = front;
        printf("%d is removed from the queue\n",front->data);
        front = front->link;
        free(temp);
    }
}

/* FUNCTION TO PRINT ALL NODE VALUES OF QUEUE */

void display()
{
    if(front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elemetns in the queue :\n");
        struct node *temp;
        temp = front;
        while(temp != NULL)
        {
        printf("%d\n",temp->data);
        temp = temp->link;
        }
    }
}

/* FUNCTION TO PRINT FIRST NODE VALUE OF QUEUE */

void peek()
{
    if(front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("%d is the first element in queue\n",front->data);
    }
}

int main()
{
    int choice;
    do{
        printf("\nEnter choice: \n 1 : push , 2 : pop, 3 : peek, 4 : display, 0 : exit \n");
        printf("\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: enqueue();
                break; 
        case 2: dequeue();
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
