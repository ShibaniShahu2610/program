#include<stdio.h>

struct point {
    int x;
    int y;
};
void display(struct point arr[]){
    int i;
    for (i = 0; i < 2; i++)
        printf("%d %d \n",arr[i].x,arr[i].y);
}
int main(){
    struct point arr[] = {{1,2},{3,4}};
    display(arr);
    return 0;
}