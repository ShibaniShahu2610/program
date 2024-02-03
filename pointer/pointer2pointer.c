#include<stdio.h>
int main (){
int a=10;
int *p = &a;
int **q = &p;
int ***r = &q;
*p =20;
**q = 30;
***r =40;
printf("value of a is %d\n",a);
printf("value of a is %d\n)",*p);
printf("value of a is %d\n", *(*q) );
printf("value of a is %d\n", *(*(*r)) );
printf("address of *q is %d\n",*q);
printf("address of *r is %d\n",*r);
printf("address of **r is %d\n",**r);

return 0;
}