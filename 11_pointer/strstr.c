// C program for strstr() function

#include <stdio.h>
#include <string.h>
#define M 10
#define N 10

int main(){
	char str1[M]; 
    char str2[N];

    printf("Enter a string for str1:\n");
    scanf("%99[^\n]",str1);
    printf("str1 = %s\n",str1);
    printf("Enter another string for str2:\n");
    scanf("%99[^\n]",str2);
    printf("str2 = %s\n",str2);
	char *p;

	p = strstr(str1, str2);

	if (p) {
		printf("String found\n");
		printf("First occurrence of string '%s' in '%s' is "
			"'%s'",
			str2, str1, p);
	}
	else
		printf("String not found\n");

	return 0;
}
