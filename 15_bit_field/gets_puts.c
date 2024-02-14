#include <stdio.h>

int main() {
    char s[20];

    printf("%d\n",sizeof(s));

    printf("Enter text: ");
    fgets(s, sizeof(s), stdin);

    printf("\n");

    //printf("You entered: %s", s);
    puts(s);
    return 0;
}
