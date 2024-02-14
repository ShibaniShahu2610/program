// to find square and cube of number 
// using typedef make a pointer variable
// when all function has same return type and agrument type

#include<stdio.h>


typedef int (*opt)(int);

typedef struct MATHS{
   opt opt1;
   opt opt2;
}math1_t;


int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}

int main(){
    math1_t maths;
    
    maths.opt1 = &square;
    maths.opt2 = &cube;
     
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    
    printf("Square of %d : %d\n", a, maths.opt1(a));
    printf("Cube of %d : %d\n", a, maths.opt2(a));
    
    return 0;
}