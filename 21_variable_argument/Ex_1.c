// variable arguments can pass many argument

#include <stdarg.h>
#include <stdio.h>

int min(int arg_count, ...)
{
	int min, a, i;
    int sum = 0;

	va_list ap;

	va_start(ap, arg_count);
	
    min = va_arg(ap, int);

	for (i = 2; i <= arg_count; i++)
		if ((a = va_arg(ap, int)) < min)
			min = a;

	va_end(ap);

	return min;
}

int main()
{
	int count = 5;
	printf("Minimum value is %d", min(5, 12, 1, 67, 6, 7, 100));
	return 0;
}
