//  Arithmatic operation ---> addition

#include<stdio.h>
int main(){
    int a[] = { 1,2,3,4,5,6,7,8,9,10};
    int *p =a;                          //a will assign the base address to *p
    printf("%d\n",*p);
    p=p+1;                              //p+1=&a[1]
    p=p+2;
    printf("%d\n",*p);
    *p=20;
    printf("%d\n",*p);
    printf("address of (p+4) : %d\n",(p+4));
    printf("value of (p+4) : %d\n",*(p+4));

return 0;
}