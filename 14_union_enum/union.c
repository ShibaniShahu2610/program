#include<stdio.h>
union abc  
{  
   int a;  
   char b;   
};  

int main()  
{  
  union abc var;
  var.a = 66;  // initialize the value with dot(.) operator

  printf("\n a = %d", var.a);  
  printf("\n b = %c", var.b);  // ans will be 'B'

}   