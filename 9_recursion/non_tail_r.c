#include<stdio.h>
void fun(int num)  
{  
if ( num > 0 )  
{  
fun(num -1);  
printf (" %d", num);  
}  
}  
int main ()  
{  
int a = 5;  
fun(a);   
return 0;  
}  