#include <stdio.h>
void add(int *a, int *b, int *sum);

int main() {
    int num1, num2, sum;
    num1= printf("Enter first number: ");
    scanf("%d", &num1);

    num2= printf("Enter second number: ");
    scanf("%d", &num2);
    
    add(&num1, &num2, &sum);
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
}
void add(int *a, int *b, int *sum) {
    *sum = *a + *b;
}