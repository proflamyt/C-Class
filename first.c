#pragma comment(linker, "/subsystem:console")
#include <stdio.h>

// getting a box from C and we stored 2 inside
int box1 = 3000000000;
char box2 = 'A';
float box3 = 2.69999999999999999888;
double box4 = 294353654657657658787876.75555;

int main(){
    // printing first program 
    printf("hello olamide, i am  %i years old . my favourite caracter is %c with the decimal number of %f with the double %f"
                                            , box1, box2, box3, box4);
    return 0;
}