// access the value of 2d array pointer

#include<stdio.h>
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("address of the 1st 1D array : %d \n",a); 
    printf("address of the 2nd 1D array : %d \n",(a+1));
    printf("address of the 3rd 1D array : %d \n",(a+2));
    printf("address of the 1st element of 1st 1D array : %p \n",*a);            // %p gives the address in hexa decimal number
    printf("address of the 1st element of 2nd 1D array : %p \n",*(a+1));
    printf("address of the 1st element of 3rd 1D array : %p \n",*(a+2));
    printf("value of the first element of 1st 1D array : %d \n",**a);
    printf("value of the first element of 2nd 1D array : %d \n",*(*(a+1)));
    printf("value of the first element of 3rd 1D array : %d \n",*(*(a+2)));
    printf("value of the second element of 1st 1D array : %d \n",*(*(a)+1));
    printf("value of the second element of 2nd 1D array : %d \n",*(*(a+1)+1));
    printf("value of the second element of 3rd 1D array : %d \n",*(*(a+2)+1));
    printf("value of the third element of 1st 1D array : %d \n",*(*(a)+2));
    printf("value of the third element of 2nd 1D array : %d \n",*(*(a+1)+2));
    printf("value of the third element of 3rd 1D array : %d \n",*(*(a+2)+2));

    return 0;
}