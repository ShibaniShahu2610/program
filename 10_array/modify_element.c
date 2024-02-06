#include <stdio.h>

int main() {
	int i;
  int myNumbers[] = {25, 50, 75, 100};
  myNumbers[0] = 33;
  myNumbers[1] = 22;
  for (i=0;i<4;i++){
  printf("%d ", myNumbers[i]);
 }
  printf("\n");
  int length = sizeof(myNumbers);
  printf("size of array is %d\n",length);
  int elements = sizeof(myNumbers)/sizeof(myNumbers[0]);
  printf("number of elements : %d",elements);
  return 0;
}