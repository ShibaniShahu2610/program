#include<stdio.h>
int fun(int *a,int *b);
int sum,division;
int main(){
    int x,y;
    x=10;
    y=20;
    printf("BEFORE FUNCTION CALL: value of x and y is %d ,%d respectively\n",x,y);
    fun(&x,&y);
    printf("AFTER FUNCTION CALL: value of x is %d,value of y is %d\n",x,y);
    sum=x+y;
    printf("%d\n",sum);
    return 0;
}
int fun(int *a,int *b){
    *a *= 10;
    *b *= 10;
    printf("In function value of x is %d and value of y is %d\n",*a,*b);
    
    division=*b / *a;
    printf("%d\n",division);
}