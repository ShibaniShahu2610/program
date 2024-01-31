#include<stdio.h>
int main(){
    int a=10;
    int ans;
    ans = (a==10)?(--a):(a--);
    printf("ans :%d\n",ans );
    printf("size of ans is %d",sizeof(ans));
    return 0;
}
