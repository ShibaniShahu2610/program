// strlen, strcat and strncat function

#include<stdio.h>
#include<string.h>
int main(){
    char str1[10] = "hello";
    char str2[10] = "world..";
    char str3[10] = "!!!!!!!";

    printf("---Before concatenate string---\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    printf("str3 = %s\n",str3);

    strcat(str1,str2);
    printf("---After concatenate string---\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    printf("---using strncat function---\n");
    strncat(str2,str3,sizeof(str2) - strlen(str2)-1);
    printf("str2 = %s\n",str2);

return 0;
}