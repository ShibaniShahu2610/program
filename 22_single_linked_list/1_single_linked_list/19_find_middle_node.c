
/* CODE TO ASK WHETHER USER WANT TO ADD A NEW DATA AND THEN PRINT THE LIST AFTER THAT PRINTING THE MIDDLE NODE DATA VALUE */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node_t;

void middle_node(node_t *list)
{
    int count = 0;

    node_t *ptr = list;

    /* LOOP TO COUNT THE NUMBER OF NODES IN LIST */

    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("total number of node = %d\n",count);

    int middle_index;
    /* IT WILL CHECK WHETHER NODE HAS EVEN NUMBER OF NODES OR ODD THEN CALCULATE MIDDLE INDEX */

    if(count % 2 != 0)
    {
        middle_index = (count + 1) / 2;
    }
    else
    {
        middle_index = count / 2;
    }
    printf("index of the middle node = %d\n",middle_index);

    ptr = list;
    int i=1;

    /* THIS LOOP WILL POINTS THE POINTER PTR TO THE MIDDLE INDEX OF LIST */
    while(i < middle_index)
    {
        ptr = ptr->link;
        i++;
    }
    
    node_t *middle = ptr;
    printf("At the middle node value is %d",middle->data);

}

// Function to insert a new node at the end of the list

node_t *insert_node(node_t *list, int data) 
{
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
    return list;
}

// Function to print the full list
void print_list(node_t *list) 
{
    if (list == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    int i = 1;
    printf("List:\n");
    node_t *ptr = list;
    while (ptr != NULL) 
    {
        printf("At node %d value is %d\n",i , ptr->data);
        ptr = ptr->link;
        i++;
    }
}

int main() 
{

    node_t *list = NULL;
    list = malloc(sizeof(node_t));
    list->data = 10;
    list->link = NULL;

   char choice = 'Y';

    while (choice == 'Y' || choice == 'y') {
        printf("Do you want to add a new node? (Y/N): ");
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y') {
            int data;
            printf("Enter the data for the new node: ");
            scanf("%d", &data);
            list = insert_node(list, data);
        }
    }

    // Print the full list
    print_list(list);

    middle_node(list);

    return 0;
}
