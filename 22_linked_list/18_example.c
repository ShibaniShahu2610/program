#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void sort(struct node *head)
{
    int temp;
    struct node *p, *q;
    for(p = head; p != NULL; p = p->link)
    {
        for(q = p->link; q != NULL; q = q->link)
        {
            if(p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp; 
            }
        }
    }
    
    printf("---------sorted list-----------\n");
    int j = 1;
    struct node *ptr = head; 
    while(ptr != NULL) 
    {
        printf("at node %d value is %d\n", j++, ptr->data);
        ptr = ptr->link;
    }
}

struct node *insert_node(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    temp->data = data;
    temp->link = NULL;

    if(head == NULL)
    {
        return temp;
    }

    struct node *ptr = head;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    return head;
}

int main()
{
    struct node *head = NULL;

    head = insert_node(head, 25);
    head = insert_node(head, 13);
    head = insert_node(head, 10);
    head = insert_node(head, 30);

    struct node *ptr = head;
    int i = 1;
    while(ptr != NULL)
    {
        printf("at node %d value is %d\n", i++, ptr->data);
        ptr = ptr->link;
    }
    sort(head);

    while(head != NULL)
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }

    return 0;
}
