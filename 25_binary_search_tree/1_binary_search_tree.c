/* TO CREATE A SIMPLE BINARY TREE */

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(int x){
    
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
   
    new_node->data = x;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
int main()
{
    struct node *root = NULL;
    root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->left->right = create(5);
    root->right->left = create(6);
    root->right->right = create(7);
    return 0;
}

/*
            1  ---> root
          /   \
         2     3
       /  \   / \ 
      4    5 6   7
      
*/