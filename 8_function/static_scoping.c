#include<stdio.h>
int x = 10;
int fun1(int);
//int fun2(int);
int fun1(int x){
    x=20;
    return x;
}
int main(){
    printf("%d",fun1(x));
    return 0;
}
