#include<stdio.h>
//int arr[2][3] = {{7,8,9},{4,5,6}};
int i,j;
int arr[2][3];
int main(){
for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("Enter a [%d][%d] =",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}

