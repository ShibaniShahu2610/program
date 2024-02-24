
/* CODE TO ADD A NEW NODE AT POSITION GIVEN BY USER */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *add_last(struct node *head) {
    int data;
    printf("Enter the value of node to add at last: ");
    scanf("%d", &data);

    struct node *temp = malloc(sizeof(struct node));

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    if (head == NULL) 
    {
        head = temp;
    } 
    else {
        struct node *ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }

    return head;
}

struct node *at_position(struct node *head, int pos) {
    int data;

    if (pos < 0) {
        printf("Invalid position\n");
        return head;
    }

    struct node *current = head;

    for (int i = 1; i < pos - 1; i++) {
        if (current == NULL) {
            printf("Position out of bounds\n");
            return head;
        }
        current = current->next;
    }

    printf("Enter the value for %d position: ", pos);
    scanf("%d", &data);

    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    temp->data = data;

    if (current == NULL) {
        temp->prev = NULL;
        temp->next = NULL;
        return temp;
    }

    temp->prev = current;
    temp->next = current->next;

    if (current->next != NULL) {
        current->next->prev = temp;
    }

    current->next = temp;

    return head;
}

int count_nodes(struct node *head) {
    int count = 0;
    struct node *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void print_list(struct node *head) {
    struct node *current = head;
    int i = 1;
    while (current != NULL) {
        printf("At the node %d value is %d\n", i++, current->data);
        current = current->next;
    }
}

int main() {
    struct node *head = NULL;

    head = add_last(head);
    head = add_last(head);
    head = add_last(head);
    head = add_last(head);

    int count = count_nodes(head);
    printf("Number of nodes in the list: %d\n", count);

    int pos;
    printf("Enter the position at which you want to add a new node: ");
    scanf("%d", &pos);
    head = at_position(head, pos);

    printf("Updated list:\n");
    print_list(head);

    return 0;
}
