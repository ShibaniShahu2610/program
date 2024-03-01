// C Program for Reverse Number by using array in pointer

#include<stdio.h>
#define N 5
int main(){
    int a[N], *p;
    printf("Enter 5 element in the array: \n",N);
    int i = 0;
    for(p=a; p <= a+N-1; p++){
        printf("a[%d] = ",i++);
        scanf("%d", p);
        //i++;
    }
    printf("Elements in reverse order:\n");
    i = 0;
    for(p = a+N-1; p >= a; p--)
        printf("a[%d] = %d\n", i++, *p);
     return 0;
}