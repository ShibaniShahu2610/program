#include <stdio.h>
 
int main()
{
    int a = 10, b = 4, ans;
 
    // printing a and b
    printf("a is %d and b is %d\n", a, b);
 
    ans = a + b; // addition
    printf("a + b is %d\n", ans);
 
    ans = a - b; // subtraction
    printf("a - b is %d\n", ans);
 
    ans = a * b; // multiplication
    printf("a * b is %d\n", ans);
 
    ans = a / b; // division
    printf("a / b is %d\n", ans);
 
    ans = a % b; // modulus
    printf("a %% b is %d\n", ans);
 
    return 0;
}