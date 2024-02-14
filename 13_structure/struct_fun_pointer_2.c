// to find square and cube of number with function pointer with structure

#include<stdio.h>

typedef struct MATHS{
    int (*ptr1)(int);
    int (*ptr2)(int);
}math_t;

int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}

int main(){
    math_t maths;
    
    maths.ptr1 = &square;
    maths.ptr2 = &cube;
     
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    
    printf("Square of %d : %d\n", a, maths.ptr1(a));
    printf("Cube of %d : %d\n", a, maths.ptr2(a));
    
    return 0;
}