// getchar() function reads the next available character. This function reads only single character at a time.
// putchar() function prints 1 character and print that
#include<stdio.h>

int main(){
    int s;

    printf("Enter text :");
    s = getchar();

    printf("\n");

    //printf("You entered :%c",s);

    putchar(s);

return 0;
}