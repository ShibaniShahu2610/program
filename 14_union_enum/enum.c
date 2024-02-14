#include<stdio.h>

enum weekdays{sunday, monday, tuesday, wednesday, thursday, friday, saturday};
//enum months{jan=1, feb, mar, apr, may=10, june, july, aug=25, sep, oct, nov=8, dec, sunday};
enum months{jan=1, feb, mar, apr, may=10, june, july, aug=25, sep, oct, nov=8, dec};

int main (){

    printf("For weekdays, it will take the values starts from 0\n\n");
    
    for(int i = sunday; i<=saturday; i++){
        printf("%d\t",i);
    }
    printf("\n");
    printf("\n");

    printf("For months, it will take assign values\n");
    printf("Where the value is not assigned, it will take the value of previous member and add 1 to it\n ");
    printf("When we try to assign same name in different enum within the same scope it will give an error\n");
    printf("Advantage of the enum over macro is\n");
    printf("\n 1. The compiler can automatically assign values to enum elements. Hence, the declaration becomes easier.\n");
    printf("2. Enums follows the ‘scope’ rules\n\n");

    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t",jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec);
    return 0;
}