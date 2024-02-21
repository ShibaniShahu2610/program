/* CODE TO MOVE THE LAST ELEMENT OF THE LIST TO FIRST IN THE LIST */

#include<stdio.h>
#include<stdlib.h>

/* USING TYPEDEF MAKING NEW DATATYPE AS node_t */

typedef struct node {
    int data;
    struct node *link;
}node_t;

/* FUNCTION TO INSERT A NEW NODE */

void insert_node(node_t *head, int data)
{
    if(head == NULL){
        printf("linked list is empty");
    }

    node_t *ptr, *temp;

    temp = malloc(sizeof(node_t));     /* THIS PART WILL CREATE A NEW NODE */
    temp->data = data;
    temp->link = NULL;

    ptr = head;

    /* THIS LOOP WILL CHECK IF PTR LINK IS NULL OR NOT AND THEN ADD THE NEW NODE WHEN CONDITION FAILS */

    while(ptr->link != NULL)   
    {                                     
        ptr = ptr->link;
    }
    ptr->link = temp;
}

/* FUNCTION TO MOVE LAST ELEMENT TO FIRST IN THE LIST */

node_t *move_to_first(node_t *head)
{
    node_t *p, *q;

    q = NULL;
    p = head;
    if (head == NULL || head->link == NULL)
    {
        return head;
    }

    while(p->link != NULL)
    {
        q = p;
        p = p->link;
    }
    p->link = head;
    q->link = NULL;
    head = p;
    
    return head;
}

int main()
{
    node_t *head = malloc(sizeof(node_t));
    head->data = 10;
    head->link = NULL;

    if(head == NULL){
        printf("linked list is empty");
    }
    
    insert_node(head, 20);
    insert_node(head, 30);
    insert_node(head, 40);
    
    node_t *ptr;
    ptr = head;
    int i=1;

    printf("------Original List------\n");

    while(ptr != NULL)
    {
        printf("At node %d value is %d\n", i, ptr->data);

        ptr = ptr->link;
        i++;
    }
    
    head = move_to_first(head);     // CALLING A FUNCTION 
    ptr = head;
    
    int j=1;

    printf("------After moving last element to first------\n");

    while(ptr != NULL)
    {
        printf("At node %d value is %d\n", j, ptr->data);

        ptr = ptr->link;
        j++;
    }
    
    return 0;
}
