#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "hello";
    char str2[] = "world..";
    int j=0;
    for(int i = 6; i <= 10; i++){
        str1[i] = str2[j];
        j++;
    }
    printf("%s",str1);
    return 0;
}