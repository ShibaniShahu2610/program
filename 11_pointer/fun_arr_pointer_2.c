// using function pointer calculate square and cude of a number

#include<stdio.h>

int number(int a){
    return a;
}
int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}
int main(){

    int (*ptr[])(int )={number, square, cube};
    
    printf("Functions are being called using pointers to functions\n");
    int size= sizeof(ptr)/sizeof(ptr[0]);
    printf(" size of the array = %d\n",size);
    printf("Enter any number\n");
    int number;
    scanf("%d", &number);

    int a= ptr[0](number);
    printf("Function1: The number is %d\n", a);

    int b = ptr[1](number);
    printf("Function2: Square of number is %d\n",b);

    int c = ptr[2](number);
    printf("Function3: Cube of number is %d",c);

    return 0;
}
