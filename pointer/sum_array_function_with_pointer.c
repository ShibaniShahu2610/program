#include<stdio.h>
int add(int b[], int len){
int i,sum=0;
    for(i=0;i<len;i++){
        sum += b[i];
    }
    return sum;
}
int main(){
    int a[]={5,10,15,20,25};
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d",add(a,len));
    return 0;
}