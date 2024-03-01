//C program for finding middel number in array by using pointer
#include<stdio.h>
int *findMid(int a[], int n){
    return &a[n/2];
}
int main(void){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a,n);
    printf("%d", *mid);
    return 0;
}
