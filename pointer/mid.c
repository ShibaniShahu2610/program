#include<stdio.h>
int *findmid(int a[],int n){
    return &a[n/2];
}
int main(){
    int a[] ={1,2,5,7,9};
    int n =sizeof(a)/sizeof(a[0]);
    int *mid = findmid(a,n);
    printf("%d",*mid); 
return 0;
}