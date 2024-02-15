#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(){
    FILE *ptr;
    ptr = fopen("error.txt", "r");

    printf(" Error no : %d \n", errno);
    perror("error is :");
    printf("\nThe error message is : %s\n", strerror(errno));
    return 0;
}