#include<stdio.h>
int main(){

int n,result,q,remainder;
n=printf("Enter the number:"); //1221
scanf("%d",&n);
result=0;
q=n;
while(q!=0){
    remainder=q%10;
    result=result*10+remainder;
    q=q/10;
}
if(result == n)
    printf("The number is palindrom");
else
    printf("The number is not palindrom");

    return 0;
}