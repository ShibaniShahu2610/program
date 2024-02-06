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

    temp=a[length-1];
    for(i=length-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
    
printf("Array elements after rotate to 1 shift towards right:\n");
    for (int i = 0; i < length; i++){
        printf("%d ",a[i]);
    }
return 0;
}