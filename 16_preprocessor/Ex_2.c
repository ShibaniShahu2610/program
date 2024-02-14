#include <stdio.h>

#define MIN_VALUE 10

int main() {
    
printf("Min value is: %d\n",MIN_VALUE);

//undefining max value 
#undef MIN_VALUE

// again redefining MIN_VALUE 
#define MIN_VALUE 20

	printf("Min value after undef and again redefining it: %d\n", MIN_VALUE);

	return 0;
}
