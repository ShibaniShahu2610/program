#include<stdio.h>
int main(){
    int a=1,i,j,rows;
    rows=printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
         printf("\n");
        }
    return 0;
}