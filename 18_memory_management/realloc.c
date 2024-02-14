#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n, i;

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);

    ptr = (int *)calloc(n, sizeof(int));

    if(ptr == NULL){
        printf("Memory not allowcated. \n");
        exit(0);
    }
    else{
        printf("Memory successfully allowcated using calloc. \n");

        for(i = 0; i < n; i++){
            ptr[i] = i + 1;
        }
        printf("Elements of the array are : ");
        for(i = 0; i < n; i++){
            printf("%d, ",ptr[i]);
        }

        n = 10;

        
        printf("\nEntered new size of array: %d\n", n);

        ptr = (int*)realloc(ptr, n*sizeof(int));
        printf("Memory is reallocated using realloc. \n");

        for(i = 0; i<n; i++){
            printf("%d, ",ptr[i]);
        }
        free(ptr);
    }
    return 0;
}