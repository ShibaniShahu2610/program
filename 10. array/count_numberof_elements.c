#include<stdio.h>
int array[] = { 1,2,2,3,4,2,5,4,7,8,9,6,3,2,5,10,45,45,75,78,6,35,485,
470,452,78,66,44,789,412,453,12,45,63,32,21,45,74,98,99,10,103,100,123,456,74,15,236,45,789,92};

int main(){
    int elements = sizeof(array)/sizeof(array[0]);
    printf("No of elements in the array : %d",elements);
    return 0;
}