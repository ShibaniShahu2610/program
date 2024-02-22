
// code for inserting a new node at the beginning

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *insert_begin(struct node *head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }

    ptr->data = data;
    ptr->link = head;
    head = ptr;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 29;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 54;
    ptr->link = NULL;
        
    head->link = ptr;   // it will link two nodes

    int data = 78;
    head = insert_begin(head, data);
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}