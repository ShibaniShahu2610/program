#include <stdio.h>

int main(void) {
    int a[5] = {1,2,3,4,5};
    int *p = a + 2;
    printf("a[2] = %d\n", *p);
    int (*q)[5] = &a;
    printf("a[] = %d\n", q);
    printf("a[] = %d\n", *q); 
    printf("a[] = %d\n", **q); 


    return 0;
}
