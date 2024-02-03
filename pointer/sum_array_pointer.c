#include<stdio.h>
int main(){
int a[5] ={2,4,6,8,10};
int sum=0,*p;
for (p=&a[0];p<=&a[4];p++){     // for(p=a;p<=(a+4);p++)   this can be use for simplicity as ....*(a+i) = a[i]
        sum+=*p;  
        }

printf("\n sum of an array elements is %d",sum);
return 0;
}
