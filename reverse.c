/*#include<stdio.h>
int i,num,rem;
int main(){
    printf("Enter the number :");
    scanf("%d",&num);
    i=num;
    while(i!=0){
        rem=i%10;
        printf("%d",rem);
        i=i/10;
    }
    return 0;
}*/
#include<stdio.h>
int num,i,rem;
int main(){
    printf("Enter the number:");
    scanf("%d",&num);
    i=num;
    do{
        rem=i%10;
        printf("%d",rem);
        i=i/10;
    }
    while
    (i!=0);
}
