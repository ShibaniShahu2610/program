// strcpy and strncpy function 

#include<stdio.h>
#include<string.h>
int main(){

    char str1[] = "hello world\n";
    char str2[11];
    char str3[5];
 

    printf("str1 = %s\n",str1);

    strcpy(str2, str1);
    printf("str2 = %s\n",str2);

    printf("str1 = %s\n",str1);
    strcpy(str3,str1);
    printf("str3 = %s\n",str3);

return 0;
}