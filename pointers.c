// #pragma comment(linker, "/subsystem:console")
#include <stdio.h>

int userinputs[2];
// swap changes the values of the variables it takes
void swap(){

    int c = *(userinputs);
    *(userinputs) = *(userinputs+1);
    *(userinputs+1 ) = c;

   // printf("done");
}

// this function gets user input 
void getuserinput(){

 

    for (int i = 0; i< 2 ; i++){
        printf("enter a number \n");
        scanf("%i", &userinputs[i]); // supply user input address to scanf
        
    }
    
   

}

int main(){

  getuserinput();

  printf("first number is %i, second number is %i\n", *(userinputs), *(userinputs+1)); // printing content of user input 

  swap(); 
  // let us swap the content of user input 

  printf("first number is %i, second number is %i", *(userinputs), *(userinputs+1)); 

}
