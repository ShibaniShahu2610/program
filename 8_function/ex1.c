#include<stdio.h>
//#include<stdlib.h>
#include"ex11.c"
static int add(int n1,int n2);
int add(int n1,int n2);  // function prototype
int main(){
    int n1,n2,ans;
    n1 = printf("Enter the value of n1 :");
    scanf("%d",&n1);
    n2 = printf("Enter the value of n2 :");
    scanf("%d",&n2);
    ans = add(n1,n2);
    printf("Sum of 2 numbers is : %d",ans);
    return 0;
}/*
int add(int n1,int n2){
        return (n1 + n2);
}*/