
// to delete the last node of the list 

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
        struct node *temp2 = head;
        while(temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
        
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
    
    int i = 1;
    struct node *ptr = head;

    while(ptr != NULL)
    {
        printf("at node %d value is %d \n",i,ptr->data);
        ptr = ptr->link;
        i++;
    }

    del_last(head);
    del_last(head);
    
    ptr = head;

    printf("After deleting last node\n");

    int j = 1;
    while(ptr != NULL)
    {
        printf("at node %d value is %d \n ",j ,ptr->data);
        j++;
        ptr = ptr->link;
    }
    return 0;
}