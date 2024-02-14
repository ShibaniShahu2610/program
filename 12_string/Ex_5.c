#include<stdio.h>
void fun(char *a)
{
    if (*a && *a != ' ')
    {
        fun(a+1);
        putchar(*a);
    }
}
//int main(){
//     fun(int a);
//     return 0;
// }