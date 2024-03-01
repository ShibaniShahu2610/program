// Arithmatic Operation By using function Pointer

#include<stdio.h>
// Function for Addition
int add(int a, int b){
    return a+b;
}

// Function for Substraction
int sub(int a, int b){
    return a-b;
}

//Function for Multiplication
int mul(int a,int b){
    return a*b;
}

//Function for division
int div(int a, int b){
    return a/b;
}

//Function for modulus
float mod(int a, int b){
    return a%b;
}
int main(void){
    int a,b,result;
    printf("Enter Number for a : \n");
    scanf("%d", &a);
    printf("Enter Number for b : \n");
    scanf("%d", &b);

    int (*ptr)(int, int) = &add;
    result = (*ptr)(a, b);
    printf("Result of Sum : %d\n",result);
    printf("Address of add func : %d\n", (*ptr));
    
    int (*ptr1)(int, int) = &sub;
    result = (*ptr1)(a, b);
    printf("Result of Substraction : %d\n",result);
    printf("Address of sub func : %d\n", (*ptr1));

    int (*ptr2)(int, int) = &mul;
    result = (*ptr2)(a, b);
    printf("Result of Multiplication : %d\n",result);
    printf("Address of Multiplication func : %d\n", (*ptr2));

    int (*ptr3)(int, int) = &div;
    result = (*ptr3)(a, b);
    printf("Result of Division : %d\n",result);
    printf("Address of Div func : %d\n", (*ptr3));

    float (*ptr4)(int, int) = &mod;
    result = (*ptr4)(a, b);
    printf("Result of Modulus : %.2f\n",result);
    printf("Address of Mod func : %d\n", (*ptr4));

    return 0;
}