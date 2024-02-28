
/* BINARY TREE IMPLEMENTATION USING RECURSION TO GET DESIRED TREE */

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{   
    int x; 
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
   
    printf("Enter the data (-1 for no node) : ");
    scanf("%d",&x);

    /* THIS WILL RETURN VALUE 0 IF CONDITION IS TRUE */

    if(x == -1)
    {
        return 0;
    }

    new_node->data = x;
    printf("Enter left child of %d : ",x);

    // THIS WILL AGAIN CALL THE FUNCTION TO ADD DATA FOR LEFT CHILD DATA 
    new_node->left = create();

    printf("Enter right child of %d : ",x);

    // THIS WILL AGAIN CALL THE FUNCTION TO ADD DATA FOR RIGHT CHILD DATA 
    new_node->right = create();
    
    return new_node;
}

int main()
{
    struct node *root = NULL;
    root = create();
    return 0;
}