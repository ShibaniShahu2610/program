#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

// FUNCTION TO ADD NEW NODES

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

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    if(head == NULL)
    {
        printf("linked list is empty\n");
        exit(1);
    }

    // INSERTING NEW NODES AT THE END OF THE LISTS

    insert_node(head,20);
    insert_node(head,30);
    insert_node(head,40);
    insert_node(head,50);

    struct node *ptr;
    ptr = head;

    printf(".......value at each node.......\n");
    
    int i=1;
    while(ptr != NULL)
    {
        printf("At node %d value is %d\n",i, ptr->data);
        ptr = ptr->link;
        i++;
    }

    /* Q IS THE POINTER TO THE PREVIOUS NODE OF WE WANT TO DELETE */

    struct node *q;
    q = head->link->link;

    /* TEMP IS THE POINTER TO THAT NODE WHICH WE WANT TO DELETE */

    struct node *temp;
    temp = q->link;

    /* THIS PART WILL DELETE THE 3RD NODE OF THE LIST */

    q->data = temp->data;
    q->link = temp->link;
    free(temp);
    temp = NULL;

    printf(".......After deleting 3rd node position.......\n");

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