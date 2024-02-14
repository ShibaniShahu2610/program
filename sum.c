#include<stdio.h>
int i,sum=0;
int main(){
    for(i=1;i<=100;i++){
        sum=sum+i;
    }
    printf("sum is: %d",sum);
    return 0;
}