#include <stdio.h>
int myfunc() 
{
static int sum =4 ; 
sum++;
return sum; 
}
void main()
{
printf("sum = %d \n", myfunc());
printf("sum = %d \n", myfunc());    
}