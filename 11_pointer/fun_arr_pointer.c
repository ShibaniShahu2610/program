// to perform the arithamtic operations such as add, sum ,multiply and division
// using funtion pointer

#include <stdio.h>

int sum(int x, int y) {
    return x+y;
    }
int sub(int x, int y) {
    return x-y;
    }
int mult(int x, int y) {
    return x*y;
    }
int div(int x, int y) {
    return x/y;
}

int main(){ 
  int x, y, choice,result;
  int (*ptr[4])(int, int) = {sum, sub , mult, div};

  printf("Enter two integer numbers: \n");
  scanf("%d%d", &x, &y);

  printf("Enter your choice \n");
  printf("Enter 0 for sum, 1 for subtract, 2 for multiply, or 3 for divide: ");
  scanf("%d", &choice);

  result = (ptr)[choice](x, y);
  printf("result = %d \n",(ptr)[choice](x, y));

  return 0;
  }

