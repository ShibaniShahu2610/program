#include<stdio.h>
int main(){
    int x=10;
    int y=0;
    int *p;
    p=&x;
    int *q=&y;
    printf("address of p is %d\n",p);
    printf("address of x is %d\n",&x);
    printf("value of *p is %d\n",*p);
    printf("value of *q is %d\n",*q);
    printf("address of y is %d\n",&y);
    printf("address of q is %d\n",q);

return 0;
}