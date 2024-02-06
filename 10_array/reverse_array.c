`#include<stdio.h>
int main(){
int i,j=0,length,temp=0;

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
printf("\n reversed array elements :\n");

for(i=length-1;i>=0;i--){
    printf("Enter a [%d]= %d\n",j++,a[i]);
}
return 0;
}

