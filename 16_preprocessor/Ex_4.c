#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE* fptr;

	fptr = fopen("file1.txt", "w");

	if (fptr == NULL) {
		printf("The file is not opened. The program will "
			"exit now");
		return 0;
	}
	else {
		printf("The file is created Successfully.");
	}

	return 0;
}
