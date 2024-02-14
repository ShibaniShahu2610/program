#include<stdio.h>
/*int arr[2][3][3] = {
                        {{1,2,3},{4,5,6},{7,8,9}},
                        {{1,2,3},{4,5,6},{7,8,9}}
                    };
*/
int i,j,k;
int arr[2][3][3];
int main(){
for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
            printf("Enter a [%d][%d][%d] =",i,j,k);
            scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("\n arrange the number in the array");
    for(i=0;i<2;i++){
        //printf("\n");
        printf("\n");
        for(j=0;j<3;j++){
            printf("\n");
            for(k=0;k<3;k++){
                printf("%d ",arr[i][j][k]);
            }
        }
    }
    //int a = arr[0][0][0];
    printf("\n%d",arr[0][0][0]);    //access the number
    return 0;
}
