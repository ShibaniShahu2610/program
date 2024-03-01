/*#include<stdio.h>
int fun(){
    int i = 10;
    return i;
}
int main(void){
    int p = fun();
    printf("%d", p);
    return 0;
}*/
//Arithmatic Adition and subtraction
#include<stdio.h>
int main(){
    int a[] = {1, 2, 3, 4};
    int b[] = {10, 20, 30, 40};
    int *p = a;
    int *q = &b[3];
    printf("a[1] address = %d\n", p + 1 );//Here adding 1 number means we add 4 bytes to p address bcoz its int data type
    printf("a[0] address = %d\n", p ); // Here the address of a[0] will print
    printf("a[2] address = %d\n", p + 2 );//Here adding 2 number means we add 4x2= 8 bytes to p address bcoz its int data type

    printf("a[3] address = %d\n", p + 3 );//Here adding 3 number means we add 4x3= 12 bytes to p address bcoz its int data type
    printf("Value at a[0] = %d\n", *p);// it print content of a[0]
    printf("a[3] - b[3] = %d\n", (p+3)-q);//Undefined
        printf("b[0] addres= %d", q);//Undefined

     return 0;
}