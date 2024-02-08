#include<stdio.h>

typedef struct outnode{
    char x, y, z;
}node_t;

int main(){
    node_t p = { '2', '1', 'a'+2};
    node_t *q = &p;
    printf(" %c %c",*((char*)q +1),*((char*)q +2));
    return 0;
}