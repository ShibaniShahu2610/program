#include<stdio.h>
int main(void){
    int n,i,count=0;
    n=printf("Enter a number:");
    scanf("%d",&n);
//int q=i;
for(i=1; i<=n; i++)
{
    if(n%i==0)
    {
        count++;
    }
}
if(count==2){
    printf("prime");
}
else{
    printf("not a prime");
}
//return 0;
}