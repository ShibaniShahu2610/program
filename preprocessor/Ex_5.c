//Program to Open a File, write in it, And Close the File

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *ptr;

	char data[50] = "Hello";

	ptr = fopen("h1.c", "r+");

	if (ptr == NULL) {
		printf("h2.c file failed to open.");
	}
	else {

		printf("The file is now opened.\n");

		if (strlen(data) > 0) {
			fputs(data, ptr);
			fputs("\n", ptr);
		}
		fclose(ptr);

		printf("Data successfully written in file " "h1.c\n");
		printf("The file is now closed.");
	}

	return 0;
}
