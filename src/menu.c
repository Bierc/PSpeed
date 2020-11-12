#include "menu.h"


int menu(){
    int n;
    printf("------------WSPEED GAME--------------\n");
    printf("press 1 to play the game\n");
    printf("press 2 to instructions\n");
    printf("press 3 to exit the game\n");
    scanf("%d", &n);
    return n;
}