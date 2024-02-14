#include <stdio.h>
int sum(int x, int y) {
    return(x + y);
    }
int sub(int x, int y) {
    return(x - y);
    }
int mult(int x, int y) {
    return(x * y);
    }
int div(int x, int y) {
    return(x/y);}

int main() 
{  int x, y, choice, result;
  int (*ptr[4])(int, int) ={sum , sub,mult, div};

  printf("Enter two integer numbers: \n");
  scanf("%d%d", &x, &y);

  printf("Enter a number \n");
  printf("Enter 0 to sum, 1 to subtract, 2 to multiply, or 3 to divide: ");
  scanf("%d", &choice);

  result = ptr[choice](x, y);
  printf("result = %d", result);

return 0;
}

