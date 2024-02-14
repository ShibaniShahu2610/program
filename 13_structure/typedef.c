#include <stdio.h>

typedef struct information{
  int Num;
  char Letter;
  char Name[30];
}info;

int main() {

  info s1 = {.Name = "Shivani", .Num = 8, .Letter = 'S'};
  
  printf("%d\n%c\n%s\n", s1.Num, s1.Letter, s1.Name);

  return 0;
}