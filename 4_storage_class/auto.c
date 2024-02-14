#include <stdio.h>
int main( )
{
  auto int i= 1;
  {
    auto int j= 2;
    printf ("%d\n",j);
  }
  printf("%d\n", i);
}