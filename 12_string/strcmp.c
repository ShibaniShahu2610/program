#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "abcd";
    char str2[] = "abce";
    strcmp(str1,str2);
    if(strcmp(str1,str2) < 0){
        printf("str1 is less than str2");
    }
    else{
        printf("str1 is greater than str2 ");
    }
    return 0;
}