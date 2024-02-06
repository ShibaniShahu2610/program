#include<stdio.h>
int main(){
    int n,a=0,b=1,i,result;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d  ",a);
        result=a+b;
        a=b;
        b=result;
    }
    return 0;
}