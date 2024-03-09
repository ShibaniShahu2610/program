#include<stdio.h>
#include<stdlib.h>

int add(int a, int b, void (*print_callback)(int));
void console_print(int value);
void file_print(int value);

int main()
{
    add(10, 20, console_print);
    
    add(10, 20, file_print);

    return 0;
}

int add(int a, int b, void (*print_callback)(int))
{
    int sum = a + b;
    print_callback(sum);
    return sum;
} 

void console_print(int value)
{
    printf("%d",value);
}

void file_print(int value)
{
    FILE *fp = fopen("hello.txt", "w");
    fprintf(fp, "%d", value);
    fclose(fp);
}