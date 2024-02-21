
// creating an single linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    
    if(head == NULL)
    {
        printf("linked list is empty\n");
    }

    struct node *current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;

    if(current == NULL)
    {
        printf("linked list is empty\n");
    }

    head->link->link = current;  // head pointer will take the address of 3rd node 

    return 0;
}