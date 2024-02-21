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

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 25;
    head->link = NULL;

    if(head == NULL)
    {
        printf("linked list is empty\n");
        exit(1);
    }

    insert_node(head,13);
    insert_node(head,10);
    insert_node(head,30);

    struct node *ptr = head;
    int i;
    while(ptr != NULL)
    {
        printf("at node %d value is %d\n",i ,ptr->data);
        ptr = ptr->link;
        i++;
    }
    int temp;
    struct node *p , *q;

    p = head;
    q = p->link;

    while (p != NULL)
    {
        while(q != NULL)
        {
            if(p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                p->data = temp; 
            }
            q = q->link;
        }
        p = p->link;
    }
    struct node *ptr1;
    ptr1 = head;
    int j;
    while(ptr1 != NULL)
    {
        printf("at node %d value is %d\n",j ,ptr1->data);
        ptr1 = ptr1->link;
        j++;
    }
    return 0;
}