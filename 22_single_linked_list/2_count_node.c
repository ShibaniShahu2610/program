// to find the number of nodes in linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int count_node(struct node *head)
{
    int count = 0;
    if(head == NULL)
    {
        printf("linked list is empty\n");
    }

    struct node *ptr = NULL;
    ptr = head;
    
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}

int main()
{
    // it will create 1st node 
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // it will create 2nd node 
    struct node *current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;

    head->link = current;   // in the 1st node link part will take the address of 2nd node data that means points to 2nd node

    current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;

    head->link->link = current;      // in the 1st node link part will take the address of 3rd node data 
                                    //that means points to 2nd node

    printf("Number of nodes = %d ",count_node(head));

    return 0;
}