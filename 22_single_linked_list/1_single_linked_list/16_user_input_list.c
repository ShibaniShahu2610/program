
/* CODE TO PRINT THE NODE VALUE BY TAKING THE USER INPUT DATA */

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node_t;

void print_data(node_t *list, int n){
    if(list == NULL){
        printf("linked list is empty");
    }
    
    node_t *ptr = list;
    for(int m = 1; m <= n; m++)
    {
        printf("At node %d value is %d\n", m, ptr->data);
        ptr = ptr->link;
    }
}

node_t *create_node(int data) 
{
    node_t *new_node = malloc(sizeof(node_t));
    if(new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}

void insert_node(node_t *list)
{   
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    
    node_t *head = NULL;
    node_t *ptr = NULL;  

    for (int i = 1; i <= n; i++) 
    {
        int value;
        printf("Enter the value of node %d: ", i);
        scanf("%d", &value);
        
        node_t *temp = create_node(value); 
    
        if(head == NULL) {
            head = temp;
        } else {
            ptr->link = temp; 
        }
        
        ptr = temp; 
    }
    list = head;
    print_data(list, n);
}

int main()
{
    node_t *list = NULL;
    insert_node(list); 
    
    return 0;
}
