//Program to Open a File, Read from it, And Close the File

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *ptr;

	char data[50] = "Hello";

	ptr = fopen("h1.c", "r");

	if (ptr == NULL) {
		printf("h1.c file failed to open.");
	}

	return 0;
}
