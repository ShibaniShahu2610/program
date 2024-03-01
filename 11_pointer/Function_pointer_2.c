// By using function pointer simply performe Calculation
// User can chose which operation will be performe

#include<stdio.h>
#define ope 5
// Function for Addition
int sum(int a, int b){
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
int mod(int a, int b){
    return a%b;
}
int main(void){
    int a,b,result; 
    int choice_Operator;
    int (*ptr[ope]) (int , int)= {sum, sub, mul, div, mod};
    printf("Enter Number for a : \n");
    scanf("%d", &a);
    printf("Enter the Operator(sum = 0, sub = 1, multi = 2, div = 3, mod = 4) :\n");
    scanf("%d", &choice_Operator);
    printf("Enter Number for b : \n");
    scanf("%d", &b);
   // result = (*ptr)[choice_Operator](a, b);
    printf("Result : %d\n", (ptr)[choice_Operator](a, b));
    return 0;
}