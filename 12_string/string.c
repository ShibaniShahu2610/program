#include<stdio.h>
int main(){

    char s[6] = "hello";
    printf("%s",s);

    printf("\n");
    int i;
    char t[6];
    for (i=0;s[i] !='\0';i++){
    t[i] = s[i];
    }
    t[i] = '\0';
    printf("t = %s \n",t);

    printf("All characters of string\n");
    for (int j=0 ;j<6;j++){
        printf("%c \n",s[j]);
    }

    printf("change the hello to cello \n");
    s[0] = 'c';
    printf("new string after changing the letter s to c : %s",s);

    return 0;
}