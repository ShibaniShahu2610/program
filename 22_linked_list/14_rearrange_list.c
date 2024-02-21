#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *link;
}node_t;

void insert_node(node_t *list, int data)
{
    if(list == NULL){
        printf("linked list is empty");
    }

    node_t *ptr, *temp;

    temp = malloc(sizeof(node_t));     
    temp->data = data;
    temp->link = NULL;

    ptr = list;

    while(ptr->link != NULL)   
    {                                     
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void rearrange(node_t *list)
{
    if (list == NULL || list->link == NULL) {
        printf("Linked list is empty or has only one node.\n");
        return;
    }
    int temp;
    node_t *p = list;
    node_t *q = list->link;

    while (q != NULL) {
        temp = p->data;
        p->data = q->data;
        q->data = temp;

        p = q->link;
        q = p != NULL ? p->link : 0;
    }
}


int main()
{
    node_t *list = malloc(sizeof(node_t));
    list->data = 1;
    list->link = NULL;

    if(list == NULL){
        printf("linked list is empty");
    }
    
    insert_node(list, 2);
    insert_node(list, 3);
    insert_node(list, 4);
    insert_node(list, 5);
    insert_node(list, 6);
    insert_node(list, 7);
    
    node_t *ptr,*ptr1;
    ptr = list;
    int i=1;

    printf("------Original List------\n");

    while(ptr != NULL)
    {
        printf("At node %d value is %d\n", i, ptr->data);
        ptr = ptr->link;
        i++;
    }
    
    rearrange(list);
    ptr1 = list;
    int j=1;

    printf("------rearrange------\n");

    while(ptr1 != NULL)
    {
        printf("At node %d value is %d\n", j, ptr1->data);
        ptr1 = ptr1->link;
        j++;
    }
}
