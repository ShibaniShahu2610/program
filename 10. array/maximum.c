#include<stdio.h>
int main(){
int i,j,length,temp=0;

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
int max=a[0];
for(i=1;i<length;i++){
    if(a[i]>max){
        max= a[i];
    }
}
printf("\n");
printf("%d is max number",max);
return 0;
}