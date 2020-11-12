#include "instructions.h"


char instructions(){
    char x;
    printf("The game consists in type the words that appears in screen\n");
    printf("press 'O' to return main menu...\n");
    scanf("%s", &x);
    return x;
}