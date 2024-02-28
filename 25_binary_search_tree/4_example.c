/* BINARY SEARCH TREE EXAMPLE TO ADD, DELETE, SEARCH NODES */

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

/* FUNCTION TO ADD NEW NODE WITH GIVEN VALUE */

struct node *new_node(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

/* FUNCTION TO INSERT NODES WITH SPECIFIC VALUE IN THE TREE */

struct node *insert(struct node *root, int x)
{
    if(root == NULL)
        return new_node(x);
    else if (x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    
    return root;
}

/* FUNCTION TO PERFORM INORDER TRAVERSAL */

struct node *inorder(struct node *root)
{
    if(root == NULL){
        return 0; 
    }
    
    inorder(root->left); 
    printf("%d\t",root->data);
    inorder(root->right);
} 

/* FUNCTION TO PERFORM PREORDER TRAVERSAL */

struct node *preorder(struct node *root)
{
    if(root == NULL){
        return 0; 
    }
   
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
} 

/* FUNCTION TO PERFORM POSTORDER TRAVERSAL */

struct node *postorder(struct node *root)
{
    if(root == NULL){
        return 0; 
    }
    
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
} 

/* FUNCTION TO SEARCH A NODE IN THE TREE */

struct node *search(struct node *root, int x)
{
    if(root == NULL || root->data == x)
        return root;
    else if(x < root->data)
        return search(root->left, x);
    else if(x > root->data)
        return search(root->right, x);
}

/* FUNCTION TO FIND MINIMUM VALUE VALUE */

struct node *find_min(struct node *root)
{
    if(root == NULL)
        return NULL;
    else if(root->left != NULL)
    {
        return find_min(root->left);
    }
    return root;
}

/* FUNCTION TO DELETE A NODE FROM TREE */

struct node *delete(struct node *root , int x)
{
    if(root == NULL)
        return NULL;
    else if(x < root->data)
        root->left = delete(root->left,x);
    else if(x > root->data)
        root->right = delete(root->right,x);
    else
        {
            if(root->left == NULL && root->right == NULL)
            {
                free(root);
                return NULL;
            }
            else if(root->left == NULL || root->right == NULL)
            {
                struct node *temp;
                if(root->left == NULL)
                {
                    temp = root->right;
                }
                else
                {
                    temp = root->left;
                }
                free(root);
                return temp;   
            }
            else
            {
                struct node *temp = find_min(root->right);
                root->data = temp->data;
                root->right = delete(root->right, temp->data);
            }
        }
        return root;
}
int main()
{
    struct node *root = NULL;
    root = new_node(20);
    insert(root,5);
    insert(root,1); 
    insert(root,15); 
    insert(root,9); 
    insert(root,7); 
    insert(root,12); 
    insert(root,30); 
    insert(root,25); 
    insert(root,40); 
    insert(root,45);
    insert(root,42); 
  
    printf("Inorder list:\n");
    inorder(root);
    printf("\n");

    printf("Preorder list:\n");
    preorder(root);
    printf("\n");

    printf("Postorder list:\n");
    postorder(root);
    printf("\n");

    struct node *result = search(root, 7);
    if(result != NULL)
        printf("7 is found\n");
    else
        printf("7 is not found");
    
    result = search(root, 26);
    if(result != NULL)
        printf("26 is found\n");
    else
        printf("26 is not found\n");

    root = delete(root, 1);  
  
    root = delete(root, 40);  
  
    root = delete(root, 45);  
  
    root = delete(root, 9);  
  
    printf("After deleting nodes inorder list:\n");
    inorder(root);  
    printf("\n");  

    return 0;
}

/*
                    20
                   /  \
                  5    30
                /  \   / \
               1   15 25 40
                   /      \
                  9       45
                 / \      /
                7   12   42

Inorder list:
1       5       7       9       12      15      20      25      30      40      42      45
Preorder list:
20      5       1       15      9       7       12      30      25      40      45      42
Postorder list:
1       7       12      9       15      5       25      42      45      40      30      20


*/