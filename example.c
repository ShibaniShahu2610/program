// find reverse of array using pointer

#include<stdio.h>
#include<string.h>

void minimax( int arr[] , int n)
{
    int i;
    int *ptr = arr;
    int *min = ptr;
    int *max = ptr;
    
    for(i = 0; i < n ; i++)
    {
        if(*ptr < *min)
        {
            min = ptr;
        }
        
        if(*ptr > *max) 
        {
            max = ptr;
        }
        ptr++;
    }
    
        printf("%d\n",*max);
        printf("%d ",*min);
}


int main()
{
    int len,i;
    int arr[] = {11,2,23,14,25,68,71,8,39};

    len = sizeof(arr) / sizeof(arr[0]);
    printf("number of elements : %d\n",len);  
    minimax(arr,len); 

    
    return 0;
}