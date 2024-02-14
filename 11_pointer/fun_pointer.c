#include <stdio.h>
void CallbackFunction(void)
{
    printf("CallbackFunction called\n");
}

void MyFunction(void (*p)(void))
{
    (*p)();
    printf("hello");
}

int main( void)
{
    printf("Example: Function_ptr_01 : Callback function demo\n");
    MyFunction(CallbackFunction);
    return 0;
}