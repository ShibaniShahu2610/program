#include<stdio.h>
int main(){
int i,j,length;
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
int minimum = a[0];
for(i=1;i<length;i++){
    if(a[i] < minimum){
        minimum= a[i];
    }
}
printf("\n");
printf("%d is minimum number",minimum);
return 0;

}