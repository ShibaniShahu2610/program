#include<stdio.h>
int i;
int min_max(int a[], int length,int *min,int *max);
int main(){
    int a[]={5,47,20,10,50};
    int min,max;
    int length=sizeof(a)/sizeof(a[0]);
    min_max(a, length, &min, &max);
    printf("Minimum value is %d and maximum value is %d",min,max);
return 0;
}
int min_max(int a[], int length,int *min, int *max){
*min =*max=a[0];
for (i=1;i<length;i++){
    if(a[i] > *max){
        *max = a[i];
    }
    if(a[i] < *min){
        *min = a[i];
    }
}
}