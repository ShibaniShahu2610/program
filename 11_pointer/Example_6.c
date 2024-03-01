//Neso 115 Passing array as an Argument to a function
#include<stdio.h>
int add(int b[], int len){
    int sum = 0, i;
    for(i=0; i<len; i++)
        {
            sum += b[i];
        }
    return sum;
}
int main(){
    int a[] ={1, 2, 3, 4};
    int len = sizeof(a)/ sizeof(a[0]);
    for(int i = 0; i<len; i++)
        {
            printf("%d ", a[i]);
        }
    printf("\nSum is %d", add(a, len));
    return 0;
}