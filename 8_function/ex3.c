#include<stdio.h>
int fun(int);
int main(){
    int a=10;
    //int b=11;
    a=fun(a);
    printf(" value of a is %d  ",a);
}
int fun(int a){
    int b=5;
    b=b+a;
    return b;
}