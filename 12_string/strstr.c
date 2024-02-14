// C program for strstr() function

#include <stdio.h>
#include <string.h>
#define M 10
#define N 10
char *p;
int main(){
	char str1[M]; 
    char str2[N];

    printf("Enter a string for str1:");
    scanf(" %[^\n]",str1);
    getchar();
    printf("str1 = %s\n",str1);
    printf("Enter another string for str2:");
    scanf(" %[^\n]",str2);
    getchar();
    printf("str2 = %s\n",str2);
	

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
