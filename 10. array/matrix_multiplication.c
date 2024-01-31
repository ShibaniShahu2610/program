#include<stdio.h>
#define MAX 50
int main(void){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arow, acolumn, brow, bcolumn;
    int i,j,k,sum = 0;

    printf("Enter the rows and columns of matrix a: ");
    scanf("%d %d", &arow, &acolumn);
    printf("Enter the elements of matrix a:\n");
    for ( i = 0; i < arow; i++)
    {
        for ( j = 0;j<acolumn; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the rows and columns of matrix b: ");
    scanf("%d %d", &brow, &bcolumn);
    
    if(brow != acolumn)
        {
            printf("Sorry! We can't multiply the matrices a and b.");
        }
    else{
        printf("Enter the elements of matrix b:\n");
        for ( i = 0; i < brow; i++)
            {
            for ( j = 0; j < bcolumn; j++)
                {
                scanf("%d", &b[i][j]);   
                }
            }
        
        }
        printf("\n");
        for(i=0; i<arow; i++){
            for(j=0; j<bcolumn; j++){
                for(k=0; k<brow; k++){
                    sum += a[i][j] * b[i][j];
                    }
                    product[i][j] = sum;
                    sum = 0;
            }
        }
        printf("Resultant Matrix\n");
        for(i=0; i<arow; i++){
            for(j=0; j<bcolumn; j++){
                printf("%d ",product[i][j]);
            }
            printf("\n");
        }
    return 0;
}
