#include<stdio.h>
#include<string.h>
int main(){

    char str1[6] = "hello";
    char str2[6];
    char str3[4];
    char str4[2];

    strcpy(str2, str1);
    printf("%s\n",str2);
    printf("%s\n",str1);
    strncpy(str3,str1,4);
    //str3[sizeof(str3) - 1] = '\0';
    printf("%s\n",str3);

   /* strncpy(str4,str1,sizeof(str4) -1);
    str3[sizeof(str4) - 1] = '\0';
    printf("%s\n",str4);*/

return 0;
}