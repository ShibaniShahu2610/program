#include <stdio.h>
#define N 10

// Function to compare two strings
int compareStrings(char *str1, char *str2) {
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] == str2[i])
            continue;
        else if (str1[i] == '\0' && str2[i] == '\0')
            return 0;
        else if(str1[i] < str2[i])
            return -1;
        else 
            return 1;
    }
    return 0;
}

int main() {
    char str1[N]; 
    char str2[N];

    printf("Enter a string for str1:");
    scanf("%s",str1);
    printf("str1 = %s\n",str1);
    printf("Enter another string for str2:");
    scanf("%s",str2);
    printf("str2 = %s\n",str2);

    int result = compareStrings(str1, str2);

    if (result == 0)
        printf("Both strings are same\n");
    else if (result < 0)
        printf("str1 is less than str2\n");
    else
        printf("str1 is greater than str2\n");

    return 0;
}
