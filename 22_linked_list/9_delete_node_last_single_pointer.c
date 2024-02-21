
// delete the last node using single pointer

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void insert_node(struct node *head, int data)
{
    if(head == NULL)
    {
        printf("linked list is empty");
    }

    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;

}

void del_last(struct node *head)
{
    if(head == NULL)
    {
        printf("list is empty");
    }
    else if(head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        while(temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
        
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    if(head == NULL)
    {
        printf("linked list is empty\n");
    }

    insert_node(head,100);
    insert_node(head,30);
    insert_node(head,10);

    struct node *ptr = head;
    int i = 1;

    while(ptr != NULL)
    {
        printf("At node %d value is %d \n",i, ptr->data);
        ptr = ptr->link;
        i++;
    }

    del_last(head);
    ptr = head;
    printf(".........After deleting last node..........\n");

    int j=1;
    while(ptr != NULL)
    {
        printf("At node %d value is %d\n",j ,ptr->data);
        ptr = ptr->link;
        j++;
    }

    return 0;
}