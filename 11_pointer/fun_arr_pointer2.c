// to find a square and cube of a number using function pointer

#include<stdio.h>
void number(int a){
    printf("Function1: The number is %d\n", a);
}
void square(int a){
    printf("Function2: Square of number is %d\n", a*a);
}
void cube(int a){
    printf("Function3: Cube of number is %d", a*a*a);
}

int main(){

    void (*ptr[])(int )={number, square, cube};
    
    int size= sizeof(ptr)/sizeof(ptr[0]);
    printf("size of an array : %d \n",size);

    printf("Enter any number\n");     
    int number;
    scanf("%d", &number);

    for(int i=0;i<size;i++)
    {
        ptr[i](number);
    }
}
