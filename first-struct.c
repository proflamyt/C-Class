#include <stdio.h>

#define A 20

typedef struct People{
    char * name;
    int age;
    char type;
    } person;

int main(){


    person okiki;
    char o;
    person olamide;
    float h;
    person tolu;
    
    person arrays[3];

    okiki.name = "okikiola";
    okiki.age = 50;
    okiki.type = 'T';
    tolu.name = "tolulope";
    tolu.age = 70;
    tolu.type = 'S';

    arrays[0] = okiki;
    arrays[1] = olamide;
    arrays[2] = tolu;
 
    printf("%c\n", okiki.type);
    printf("%i\n", tolu.age);
    printf("okiki : %i", arrays[0].age);
    





}