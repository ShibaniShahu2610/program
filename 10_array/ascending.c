#include<stdio.h>
int main(){
int i,j,length,temp=0;
//int a[5] ={5,4,6,2,4};
printf("Enter the length of array:");
scanf("%d",&length);
int a[length];

printf("Enter the elements of array: \n");

for(i=0; i<length; i++){
        printf("Enter a [%d]=",i);
        scanf("%d", &a[i]);
        }

printf("Array elements:\n");
    for (int i = 0; i < length; i++){
        printf("%d ",a[i]);
    }
    
for (i = 0; i < length; i++) {
        for (j = i+1; j < length; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nArray elements in ascending order: ");
        for (i = 0; i < length; i++) {
            printf("%d ", a[i]);
    }
return 0;
}