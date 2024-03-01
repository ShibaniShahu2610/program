// Printing 2D array using pointer

#include<stdio.h>

int main(void){
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *p;
    int i = 0, j = 0, k = 0, l = 0;
    printf("Values of the 3x3 array using pointer:\n");
    for (p = &a[0][0]; p <= &a[2][2]; p++) {
        if (p <= &a[0][2]) {
            printf("Value of a[%d][%d] = %d\n", i, j, *p);
            j++;
        } else if (p > &a[0][2] && p <= &a[1][2]) {
            i = 1;
            printf("Value of a[%d][%d] = %d\n", i, k++, *p);
        } else {
            i = 2;
            printf("Value of a[%d][%d] = %d\n", i, l++, *p);
        }
    }

    return 0;
}
/*
#include <stdio.h>

int main(void) {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *p = &a[0][0];

    printf("Values of the 3x3 array using pointer:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Value of a[%d][%d] = %d\n", i, j, *p);
            p++; // Move the pointer to the next element
        }
    }

    return 0;
}*/
