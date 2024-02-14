//program to demonstrates the use of #if, #elif, #else,
// and #endif preprocessor directives.
#include <stdio.h>

// defining PI
#define PI 3.14159

int main()
{

#ifdef PI
	printf("PI is defined\n");

#elif defined(SQUARE)
	printf("Square is defined\n");
#else
    "Neither PI nor SQUARE is defined"
#endif

#ifndef SQUARE
	printf("Square is not defined"); 

#endif

	return 0;
}
