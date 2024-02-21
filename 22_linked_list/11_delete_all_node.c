#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void insert_node(struct node *head, int data)
{
    struct node *ptr;
    ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

struct node *del_list(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    { 
    temp = temp->link;
    free(head);
    head = temp;
    }
    return head;
}

int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    if(head == NULL)
    {
        printf("linked list is empty\n");
        exit(1);
    }

    insert_node(head,20);
    insert_node(head,30);

    struct node *ptr;
    ptr = head;
    int i=1;
    while(ptr != NULL)
    {
        printf("At node %d value is %d\n", i,ptr->data);
        ptr = ptr->link;
        i++;
    }

    head = del_list(head);

    if(head == NULL)
        printf("list is deleted");
    return 0;
}