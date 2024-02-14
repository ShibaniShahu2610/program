#include <stdio.h>

int main() {
   // arithmetic operator precedence
   int a = 10, b = 20, c = 5, result;

   printf("a<b:%d\n", a<b);
   printf("a>b:%d\n", a>b);
   printf("a==b:%d\n", a==b);
   printf("a!=b:%d\n", a!=b);
   printf("a>=b:%d\n", a>=b);
   printf("a<=b:%d\n", a<=b);

   result = a * b /c;
   printf("The result is: %d\n", result);
   return 0;
}