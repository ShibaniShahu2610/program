#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* ptr;
	int n, i;

	printf("Enter number of elements:");
    scanf("%d",&n);
	printf("Enter number of elements: %d\n", n);

	ptr = (int*)calloc(n, sizeof(int));

	if (ptr == NULL) {
		
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		printf("Memory successfully allocated using calloc.\n");

		for (i = 0; i < n; i++) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; i++) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}
