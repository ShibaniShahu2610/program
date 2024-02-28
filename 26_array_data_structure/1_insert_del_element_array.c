#include<stdio.h>

int array[50]; 

void del(int array[],int size)
{
    int position, i, num;
    printf("Enter the position to delete an element :\n");
    scanf("%d",&position);
    
    for(i = position -1; i < size ; i++)
    {
        array[i] = array[i + 1];
    }
    array[size] = 0;
}

void insert(int array[],int size)
{
    int position, i, num;
    printf("Enter the position to add an element :\n");
    scanf("%d",&position);
    printf("Enter an element to add at position %d\n",position);
    scanf("%d",&num);
    for(i = size -1; i>= position; i--)
    {
        array[i + 1] = array[i];
    }
    array[position] = num;

}

void print(int array[], int size)
{
    int i;
    printf("Array Elements:\n");
    for(i = 0; i < size; i++)
    {
        printf("At index %d value is %d\n", i, array[i]);
    }
}

int main()
{
    int size , i;
    printf("Enter the size of an array :\n");
    scanf("%d",&size);
    for(i = 0; i < size; i++)
    {
        printf("Enter the value for array[%d] :\n",i);
        scanf("%d",&array[i]);
    }
    print(array, size);
    
    del(array, size);
    printf("After deleting an element :\n");
    print(array, size);
    
    insert(array, size);
    printf("After inserting an element :\n");
    print(array, size);
    return 0; 
}
