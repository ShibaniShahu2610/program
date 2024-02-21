// this code is for adding a new node at certain position
// here adding at 3rd position 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void insert_node_end(struct node *head, int data)
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

void add_at_pos(struct node *head , int data , int pos )
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
    
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    insert_node_end(head,100);
    insert_node_end(head,30);

    int i = 1;
    struct node *ptr = head;

    printf(".......value at each node.......\n");
    while(ptr != NULL)
    {
        printf("At node %d value is %d \n",i, ptr->data);
        ptr = ptr->link;
        i++;
    }

    int data = 29, position = 3;

    add_at_pos(head, data, position);

    printf(".......After adding a new node at 3rd position.......\n");

    ptr = head;

    int j=1;
    while(ptr != NULL)
    {
        printf("At node %d value is %d\n",j, ptr->data);
        ptr = ptr->link;
        j++;
    }
    return 0;
}
