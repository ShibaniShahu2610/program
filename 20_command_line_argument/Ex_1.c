#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("The value of argc is %d\n", argc);
    if(argc < 2){
        printf("No arguments is passed\n");
    }
    else{
        printf("Arguments are :\n");

        for(int i = 0 ; i< argc; i++){
            printf(" argv[%d] = %s\n ",i,argv[i]);
        }
    }
    return 0;
}

//  ./Ex_1.exe "hello how r u?"
//  The value of argc is 2
//  Arguments are :
//  argv[0] = D:\EmbeddedC\20_command_line_argument\Ex_1.exe
//  argv[1] = hello how r u?