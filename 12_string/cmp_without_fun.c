#include<stdio.h>
#include<string.h>
#define N 5
int main(){

    char str1[N]; 
    char str2[N];

    printf("Enter a string for str1:");
    scanf("%s",str1);
    printf("str1 = %s\n",str1);
    printf("Enter another string for str2:");
    scanf("%s",str2);
    printf("str2 = %s\n",str2);

    for(int i=0; str1[i] != '\0' && str2[i] != '\0';i++){
        if(str1[i] == str2[i]){
            continue;
        }
        else if(str1[i] == str2[i] && i == N && i == N ){
            printf("both strings are same");
            return 0;
        }
        else {
            printf(" both are different");
        }
    }
    return 0;
}