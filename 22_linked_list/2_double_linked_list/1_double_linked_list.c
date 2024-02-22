#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *at_position(struct node *head)
{
    int pos, data;
    struct node *current = head;
    int count = 0;
    while(current->next != NULL){ // Corrected loop condition
        count++;
        current = current->next;
    }
    printf("Number of nodes in the list : %d\n",count);

    printf("Enter the position at which you want to add a new node : ");
    scanf("%d",&pos);

    if(pos < count)
    {
        current = head;
        for(int i = 1; i < pos; i++) { // Corrected loop condition
            current = current->next;
        }

        printf("Enter the value for %d position :\n",pos);
        scanf("%d",&data);

        struct node *temp = malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }

        temp->data = data;
        temp->prev = current;
        temp->next = current->next;
        if (current->next != NULL) {
            current->next->prev = temp;
        }
        current->next = temp;
    }
    else{
        printf("Out of node\n");
    }
    return head;
}


struct node *add_begin(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;

    return head;
}

struct node *add_last(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    struct node *ptr;
    ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    
    return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 12;
    head->next = NULL;

    int data;
    printf("Enter the value of new node to add at beginning :");
    scanf("%d",&data);

    head = add_begin(head,data);

    struct node *current = head;

    printf("Enter the value of new node to add at last : ");
    scanf("%d",&data);

    current = add_last(current,data);

    struct node *list;
    list = at_position(current);

    int i = 1;
    while(list != NULL)
    {
        printf("At the node %d value is %d\n", i++, list->data);
        list = list->next;
    }
    return 0;
}