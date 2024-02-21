// find average of the variable aeeguments

#include<stdio.h>
#include<stdarg.h>

int average(int num, ...)
{
    va_list var;
    int sum =0;

    va_start(var, num);
    for (int i = 0; i< num; i++){
        sum += va_arg(var,int);
    }
    va_end(var);
    return sum / num;
}
int main (){
    printf("Average of the numbers : %d\n", average(5,1,2,3,4,5));
    printf("Average of the numbers : %d\n", average(8,18,82,30,54,59,78,10,63));

    return 0;
}