#include<stdio.h>
#pragma pack(1)

struct data{
    double a;
    int b;
    char c;
};
union data1{
    int p;
    char q;
    double r;
};

int main(){
    struct data d;
    union data1 d1;
    printf("size of structure : %d byte\n",sizeof(d));
    printf("size of structure : %d byte\n",sizeof(d1));
    printf("The address of a is %d \n",&d.a);
    printf("The address of b is %d \n",&d.b);
    printf("The address of c is %d \n",&d.c);
    printf("The address of p is %d \n",&d1.p);
    printf("The address of q is %d \n",&d1.q);
    printf("The address of r is %d \n",&d1.r);

return 0;
}