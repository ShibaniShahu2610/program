#include<stdio.h>

void sort(int *ptr, int n)
{
    int i,j, temp;
    for(i = 0; i<n; i++){
        for(j = i+1; j<n; j++){
            if(*(ptr + i) > *(ptr + j)){
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    for(i = 0; i<n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
}
int main(){
    int n=5;
    int a[] = {1,5,0,41,2};
    sort(a,n);
}