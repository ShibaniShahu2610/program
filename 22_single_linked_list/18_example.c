#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node_t;

/* FUNCTION TO SORT THE LIST IN ASCENDING ORDER */

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

/* FUNCTION TO PRINT THE ORIGINAL LIST */

void print_data(node_t *list) 
{
    if (list == NULL) 
    {
        printf("Linked list is empty\n");
        exit(1);
    }
    node_t *ptr = list;
    printf("---------Original list-----------\n");
    int m = 1;
    while (ptr != NULL) 
    {
        printf("At node %d value is %d\n", m, ptr->data);
        ptr = ptr->link;
        m++;
    }
}

/* FUNCTION TO INSERT THE NEW NODES */

node_t *insert_node(node_t *list) 
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        int data;
        printf("Enter the value of node %d: ", i);
        scanf("%d", &data);

        node_t *temp = malloc(sizeof(node_t));
        if (temp == NULL) 
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }
        temp->data = data;
        temp->link = NULL;

        if (list == NULL) 
        {
            list = temp;
        } 
        else 
        {
            node_t *ptr = list;
            while (ptr->link != NULL) 
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
    return list;
}

int main() 
{
    node_t *list = NULL;

    list = insert_node(list);       /* CALLING A FUNCTION TO INSERT NEW NODES AND STORE IN LIST */
    node_t *ptr = list;

    print_data(ptr);    /* CALLLING A FUNCTION TO PRINT DATA */

    sort(ptr);          /* CALLING A FUNCTION TO SORT THE DATA */
    
    return 0;
}