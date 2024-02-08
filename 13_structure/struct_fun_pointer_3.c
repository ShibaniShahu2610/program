#include <stdio.h>

typedef struct calculator{
    int (*ptr[4])(int,int);
    // int (*ptr2)(int,int);
    // int (*ptr3)(int,int);
    // int (*ptr4)(int,int);
}calc_t;

int sum(int x, int y) {
    return(x + y);
    }
int sub(int x, int y) {
    return(x - y);
    }
int mult(int x, int y) {
    return(x * y);
    }
int div(int x, int y) {
    return(x/y);
    }
    
int main(){
    calc_t calc;
    
    calc.ptr[0] = &sum;
    calc.ptr[1] = &sub;
    calc.ptr[2] = &mult;
    calc.ptr[3] = &div;
    
    int x, y,ope,result;
    printf("Enter the 1st number :");
    scanf("%d",&x);
    printf("Enter the 2nd number :");
    scanf("%d",&y);
    printf("Enter the number: ");
    printf("For operation....\n 0 for sum\n 1 for subtraction\n 2 for multiplication\n 3 for division\n");
    scanf("%d",&ope);
    
    result = calc.ptr[ope](x,y);
    printf("result = %d",result);
    
    return 0;
}