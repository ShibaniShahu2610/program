
/* QUEUE WITH ARRAY PROGRAM TO ADD , REMOVE ELEMENTS FROM QUEUE AND DISPLAY IT WITH FUNCTIONS */

#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

/* FUNCTION TO ADD A ELEMENT TO QUEUE */

void enqueue()
{
    int x;
    printf("Enter the input for queue : ");
    scanf("%d",&x);
    if (rear == N-1)
    {
        printf("Overflow\n");
    }
    else if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }   
}

/* FUNCTION TO REMOVE A ELEMENT FROM QUEUE */

void dequeue()
{
    int item;
    if(front == -1 && rear == -1){
        printf("Underflow or queue is empty\n");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        item = queue[front];
        front++;
        printf("%d is removed from the stack\n",item);
    }
}

/* FUNCTION TO PRINT FIRST ELEMENT OF QUEUE */

void peek(){
    if(front == -1 && rear == -1){
        printf("queue is empty\n");
    }
    else{
        printf("%d is the first value of queue\n", queue[front]);
    }
}

/* FUNCTION TO PRINT ALL ELEMENTS OF QUEUE */

void display()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        int i;
        printf("Elements of queue\n");
        for(i = front; i <= rear; i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }

}

/* FUNCTION TO CHECK QUEUE IS EMPTY OR NOT */

void isEmpty()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }
}

/* FUNCTION TO CHECK QUEUE IS FULL OR NOT */
 
void isFull()
{
    if (rear == N - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Queue is not full\n");

    }
}
int main()
{
    int choice;
    do{
        printf("\nEnter choice: \n 1 : push , 2 : pop, 3 : peek, 4 : display, 0 : exit \n");
        printf(" 5 : to check stack is empty or not\n 6 : to check stack is full or not\n");
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