#include<stdio.h>
#define N 5
void main(){
    int a[N] , *p,i;
    printf("Enter the elements :\n");
    i=0;
    for(p=a;p<=(a+4);p++){
        printf("Enter a value at a[%d] = ",i++);
        scanf("%d",p);
            }
    printf("reverse order array elements\n");
    i=0;
    for(p=(a+4);p>=a;p--){
        printf("a[%d] = %d\n",i++,*p);
        
    }
}