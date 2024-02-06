#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    while(b!=0){
        a++;
        b--;
    }
    printf("sum of two numbers is %d",a);
    return 0;
}