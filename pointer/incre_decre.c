// Arithmatic ---> increment and decrement

#include<stdio.h>
int main(){
int a[] = {5,10,15,20,25,30};
int *p=a;
printf("p++ = %d %d\n",*(p++),*(p++));  // it will performs from right to left bcz it has same precendence so accociativity is from RIGHT TO LEFT
printf("*p = %d\n",*p);     //after performing above line pointer will point to incremented position
printf("++p = %d\n",*++p);
printf("p-- = %d\n",*p--);
printf("--p = %d\n",*--p);
printf("--p = %d\n",*--p);
printf("--p = %d\n",*--p);
printf("--p = %d\n",*--p);

return 0;
}