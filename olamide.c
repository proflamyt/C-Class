#include <stdio.h>

int a = 2 ;
int b = 4;


void swap (int a , int b){
        int swap = a;
        a = b;
        b = swap;
        return a,

    }


int main()
{
    printf("a is : %i, b is %i\n", a, b);
    
    swap(a, b );

    printf("a is now : %i, b is now %i", a, b);

    
}