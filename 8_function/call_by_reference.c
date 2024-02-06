#include<stdio.h>
int swap(int *a,int *b);
int main(){
    int a,b;
    a=10;b=20;
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
}
int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a=%d,b=%d\n",*a,*b);
    printf("a=%d,b=%d\n",a,b);
}