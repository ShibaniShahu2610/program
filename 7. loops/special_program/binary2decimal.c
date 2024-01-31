#include<stdio.h>
int main(){
    int n,i,binary,remainder,decimal=0,result=0,order=1;
    printf("Enter the binary number:");     //1001
    scanf("%d",&binary);
    n=binary;
    while(n != 0){
        remainder = n % 10;
        result=result+remainder*order;
        order=order*2;
        n=n/10;
    }
    printf("value of result is %d",result);
    return 0;
}