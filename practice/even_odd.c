#include<stdio.h>
int main(){
int i,j,length,temp=0;

printf("Enter the length of array:");
scanf("%d",&length);
int a[length];
int aeven[length];
int aodd[length];

printf("Enter the elements of array: \n");
for(i=0; i<length; i++){
        printf("Enter a [%d]=",i);
        scanf("%d", &a[i]);
        }
printf("Array elements:\n");
    for (int i = 0; i < length; i++){
        printf("%d ",a[i]);
    }

for(i=0;i<length;i++){
    if(a[i]%==0){
        aeven[]=a[i];
    }
    else{
        aodd[]=a[i];
    }
}
return 0;
} 