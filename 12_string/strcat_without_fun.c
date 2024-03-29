#include <stdio.h>
#include<string.h>
#define N 20

void combineStrings(char *str1, char *str2, char *combined) {
    int i,j;
    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }
    combined[i + j] = '\0';
}

int main() {
    char str2[N];
    char str1[N]; 

    printf("Enter a string for str1:");
    scanf("%[^\n]",str1);
    getchar();
    printf("str1 = %s\n",str1);

    printf("Enter another string for str2:");
    scanf("%[^\n]",str2);
    getchar();
    printf("str2 = %s\n",str2);

    char combined[50]; 
    combineStrings(str1, str2, combined);
    
    printf("Combined string: %s\n", combined);

    return 0;
}
