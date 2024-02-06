#include<stdio.h>
int a,b;
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    switch(a){
        case 1:
            printf("Case 1 executed");
            break;
        case 2:
            switch(b){
                case 3:
                    printf("Case 3 executed");
                    break;
                case 4:
                    printf("Case 4 executed");
                    break;
                    break;
                default:
                    printf("Enter a valid number");
                    break;
            }
        default:
            printf("enter a valid number");
            break;
        }
        return 0;
    }