
// inserting a new data and print all data

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void insert_node(struct node *head, int data)
{
    if(head == NULL){
        printf("linked list is empty");
    }

    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;

}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    if(head == NULL)
    {
        printf("linked list is empty\n");
        exit(1);
    }

    struct node *current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;

    if(current == NULL)
    {
        printf("linked list is empty\n");
        exit(1);
    }

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;

    head->link->link = current;

    insert_node(head,100);
    insert_node(head,30);
    insert_node(head,10);

    // printing data after inserting a new data

    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }

    return 0;
}