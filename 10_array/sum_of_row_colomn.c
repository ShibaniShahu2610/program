#include<stdio.h>
int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
/*
123
123
123
*/
int i,j,sum=0;
int arr[3][3];
int main(){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=arr[i][j];
            }
            printf("sum of row %d is %d\n",i+1,sum);
            sum=0;
        }

    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            sum+=arr[i][j];
        }
        //printf("sum of colomn %d is %d\n",j+1,sum);
        //sum=0;
    }
    printf("Sum of all elements is %d\n",sum);

    return 0;
}
    