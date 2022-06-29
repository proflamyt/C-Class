#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *okiki;

    okiki = fopen("olamide.txt", "w"); 

    if (okiki == NULL){
        printf("Error has occured");
        exit(1);
    }

    printf("file opened in write mode successfully");

   
   for(int i=1; i<51 ; i++){
    fprintf(okiki, "hello i am okikiola %i\n", i);
    fprintf(okiki, "hello i am olamide %i\n", i);
   }

    fclose(okiki);

}