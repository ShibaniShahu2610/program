#include<stdio.h>
int main(){
    int a[][3] = {1,2,3,4,5,6};
    int (*p)[3] =a;
    printf(" %d %d ",(*p)[1],(*p)[2]);
    ++p;                                    // it will go to the next row 
    printf(" %d %d ",(*p)[1],(*p)[2]);
    ++p;                                    // it will go to the next row and there is nothing after that row 
    printf(" %d %d ",(*p)[1],(*p)[2]);      // so this will return garbage value 
    --p;
    printf(" %d %d ",(*p)[1],(*p)[2]);
    --p;                                   
    printf(" %d %d ",(*p)[1],(*p)[2]);      
    --p;                                   // this will go outside array towards left
    printf(" %d %d ",(*p)[1],(*p)[2]);      // so this will print zero
    return 0;
}