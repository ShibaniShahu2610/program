#include<stdio.h>

int main(void){
    int a[2][2] = {{1, 2}, {3, 4}};
    int *p = &a[0][0];
    int **py = &p;
    printf("Values of the 3x3 array using pointer:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Value of a[%d][%d] = %d\n", i, j, p);
            p++; // Move the pointer to the next element
        }
    }
    printf("Value of **p : %d", *(*py));
    return 0;
}