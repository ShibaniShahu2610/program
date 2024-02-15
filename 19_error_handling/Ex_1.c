#include<stdio.h>
#include<errno.h>
int main(){

    FILE *fp;
    fp = fopen("error1.c", "r+");

    if (fp == NULL){
        printf("Error no: %d ", errno);
        perror("Error");
        return 1;
    }
    else {
        int num;
        fscanf(fp,"%d",&num);           
        printf("File Data: %d",num);

        fclose(fp); 
    }
    return 0;
}