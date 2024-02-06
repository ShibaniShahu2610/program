#include<stdio.h>
int main(){
    int n,q,result,remainder,count,cnt,mul;
    n=printf("Enter the number:");
    scanf("%d",&n);
    q=n;
    result=0;
    count=0;
    mul=1;
    while(q!=0){
        q=q/10;
        count++;
    }
    cnt=count;
    q=n;
    while(q!=0){
            remainder=q%10;
        while(cnt!=0){
            mul=mul*remainder;
            cnt--;
            }
            result=result+mul;
            cnt=count;
            q=q/10;
            mul=1;
        }     
    if(result==n)
        printf("armstrong number");
    else
        printf("not a armstrong number"); 
}