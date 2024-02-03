// pointer pointing to the entire array

#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5}; 

    int (*p)[5] =&a;        //pointer p points to the address of whole array
    int *q =a;              // pointer q points to the base address of the array

    printf("p = %d, q = %d\n", p, q);
    printf("*p = %d, *q = %d\n", *p, *q);
    printf("\n");
    printf("address of whole array : %d\n ",p);
    p++;
    printf("address of array : %d\n ",p);
    printf("address of 1st element of array : %d\n ",*p);
    p++;
    printf("address of 1st element of array : %d\n ",*p);
    printf("address of 2nd element of array : %d\n ",*p+1);
    printf("address of 3rd element of array : %d\n ",*p+2);
    printf("address of 4th element of array : %d\n ",*p+3);
    printf("address of 5th element of array : %d\n ",*p+4);
    printf("value of first element of an array : %d\n ",**p);
    printf("\n");
    printf("address of array : %d\n ",q);       //address of array which is the address of 0th index
    q++;
    printf("address of array : %d\n ",q);       // it will shift to the 1st index of an array and print address of that
    
    return 0;
}