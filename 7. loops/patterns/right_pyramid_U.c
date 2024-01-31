#include<stdio.h>
int main(){
    int rows,i,j;
    rows=printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
        {
            for(j=1;j<=rows;j++)
            {
            if(j<=((rows+1)-i)){
                printf("*");
                }
            else{
                printf(" ");
                }
            }
        printf("\n");
        }
}