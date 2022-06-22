// #pragma comment(linker, "/subsystem:console")
#include <stdio.h>

int userinputs[2];
// swap changes the values of the variables it takes
void swap(){

}

// this function gets user input 
int getuserinput(){

 

    for (int i = 0; i< 2 ; i++){
        printf("enter a number \n");
        scanf("%i", &userinputs[i]);
        // =input;
    }
    
   printf("first is %i  and second is %i", *(userinputs), *(userinputs+1));

}

int main(){

  getuserinput();

}
