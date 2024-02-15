//clearerr will clear the error and it will not detect again 

#include <stdio.h>

int main(){

   FILE *fp;
   fp = fopen("test.txt","w");
   char ch = fgetc(fp); 

   if(ferror(fp)) {    
      printf("Error in reading from file!\n");
   }

   clearerr(fp);
   printf("hello");

   if(ferror(fp)){   
          printf("Error again in reading from file!");
   }

   fclose(fp);

   return 0;
}
