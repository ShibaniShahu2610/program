#include<stdio.h>
//#pragma pack(1)

struct data
{
    int b;
    char c;
    char a; 
}s;
struct data s;
int main(){

    printf("%d ",sizeof(s));
    return 0;
}