#include<stdio.h>
int main(){

    int a = 5, b = 2;
    
    double c = a/b;
    double d = (double) a/b;  // it will convert int a into double a according to precedence

    printf("%d / %d = %d \n", a,b,a/b);
    printf("%d / %d = %f \n", a,b,c);
    printf("%d / %d = %f \n", a,b,d);

return 0;
}