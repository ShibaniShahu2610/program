#include<stdio.h>
int main(){
    int n,i,q,remainder,fact=1,result;
    n=printf("Enter a number:");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        remainder=q%10;
        for(i=1;i<=remainder;i++){
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
    }
    if(result==n)
        printf("strong number");
    else
        printf("not a strong number");
}