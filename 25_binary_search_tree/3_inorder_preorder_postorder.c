
/* BINARY TREE IMPLEMENTATION USING RECURSION TO GET DESIRED TREE */

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *preorder(struct node *root)
{
    if(root == NULL){
        return 0; 
    }
    //printf("Preorder list:\n");
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
} 

struct node *inorder(struct node *root)
{
    if(root == NULL){
        return 0; 
    }
    //printf("Inorder list:\n");
    inorder(root->left); 
    printf("%d\t",root->data);
    inorder(root->right);
} 

struct node *postorder(struct node *root)
{
    if(root == NULL){
        return 0; 
    }
    //printf("Postorder list:\n");
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
} 

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
    printf("\n");
    // THIS WILL AGAIN CALL THE FUNCTION TO ADD DATA FOR LEFT CHILD DATA 
    new_node->left = create();

    printf("Enter right child of %d : ",x);
    printf("\n");
    // THIS WILL AGAIN CALL THE FUNCTION TO ADD DATA FOR RIGHT CHILD DATA 
    new_node->right = create();
    
    return new_node;
}

int main()
{
    struct node *root = NULL;
    root = create();

    printf("Preorder list:\n");
    preorder(root);
    printf("\n");

    printf("Inorder list:\n");
    inorder(root);
    printf("\n");

    printf("Postorder list:\n");
    postorder(root);
    printf("\n");

    return 0;
}

/*
            1  ---> root
          /   \
         2     3
       /  \   / \ 
      4    5 6   7

Preorder list:
1       2       4       5       3       6       7
Inorder list:
4       2       5       1       6       3       7
Postorder list:
4       5       2       6       7       3       1

*/