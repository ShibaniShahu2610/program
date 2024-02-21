
// to delete the first node of the list 

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

struct node *del_first(struct node *head)
{
    if(head == NULL)
        printf("list is empty");
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    if(head == NULL){
        printf("linked list is empty\n");
    }

    insert_node(head,100);
    insert_node(head,30);
    insert_node(head,10);

    struct node *ptr;
    head = del_first(head);
    ptr = head;

    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }

    return 0;
}