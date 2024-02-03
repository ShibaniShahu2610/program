#include<stdio.h>
int main(){
    int a[] = {5,10,15,20,25,30,35,40};
    int b[] = {10,20,30,40,50,60,70,80};
    int *p = a;
    int *q = &a[5];
    int *r = &b[4];
    printf("value of *p is %d \n",*p);
    printf("value of *q is %d\n",*q);
    q= q-1;
    printf("value of *q is %d\n",*q);
    printf("(q-p)= %d\n",q-p);
    q=q-1;
    p=p+2;
    printf("(q-p)= %d\n",q-p);
    
    printf("\n");
    printf("p-r = %d\n",p-r);
    printf("q-r = %d",q-r);

return 0;
}