// to print data of linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void data(struct node *head)
{
    if(head == NULL)
    {
        printf("linked list is empty\n");
    }

    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
}
int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;

    head->link->link = current;

    data(head);

    return 0;
}
