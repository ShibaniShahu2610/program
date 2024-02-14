#include<stdio.h>

typedef struct numbers{
    unsigned int first : 2;
    unsigned int second : 3;
}num;

void main(){
    num n;
    n.first = 3;
    n.second = 7;
    printf(" First number : %d\n",n.first);
    printf(" Second number : %d\n",n.second);
}