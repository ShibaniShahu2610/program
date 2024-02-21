/* CODE TO REVERSE THE LIST */

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

/* FUNCTION TO INSERT A NEW NODE */

void insert_node(struct node *head, int data)
{
    if(head == NULL){
        printf("linked list is empty");
    }

    struct node *ptr, *temp;

    temp = malloc(sizeof(struct node));     /* THIS PART WILL CREATE A NEW NODE */
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

/* THIS FUNCTION WILL REVERSE THE ENTIRE LIST AND RETURN THE HEAD */

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;
    while(head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

int main()
{
    /* THIS WILL CREATE A FIRST NODE AND HEAD IS POINTING TO THAT NODE */

    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    if(head == NULL){
        printf("linked list is empty");
    }

    /* THESE ARE CALLING FUNCTION WHICH WILL ADD THE NODES AT THE END OF THE LIST */

    insert_node(head, 20);
    insert_node(head, 30);
    insert_node(head, 40);
    insert_node(head, 50);


    struct node *ptr, *rev;
    ptr = head;
    int i=1,j=1;

    printf("------Original List------\n");

    while(ptr != NULL)
    {
        printf("At node %d value is %d\n", i, ptr->data);

        ptr = ptr->link;
        i++;
    }

    rev = reverse(head);
    ptr = rev;

    printf("------Reversed List------\n");

    while(ptr != NULL)
    {
        printf("At node %d value is %d\n",j ,ptr->data);
        ptr = ptr->link;
        j++;
    }

    return 0;
}