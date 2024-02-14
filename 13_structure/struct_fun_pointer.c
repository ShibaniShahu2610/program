#include <stdio.h>

typedef struct {
    void (*func1)(int); 
    int (*func2)(int, int); 
} FunctionPointers_t;

void function1(int x) {
    printf("Function 1 called with argument: %d\n", x);
}

int function2(int x, int y) {
    printf("Function 2 called with arguments: %d, %d\n", x, y);
    return x + y;
}

int main() {
    FunctionPointers_t funcs;
    
    funcs.func1 = &function1;
    funcs.func2 = &function2;
    
    funcs.func1(10);
    int result = funcs.func2(20, 30);
    printf("Result of function 2: %d\n", result);
    
    return 0;
}