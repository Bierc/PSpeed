#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "stack_proprieties.c"
#include "words.c"
#include "menu.c"
#include "game.c"
#include "instructions.c"

int main(){
	Stack *s = initStack();
    int choice;
    clock_t start = 0, end = 0;
    char exit_instructions;
    menu:
    choice = menu();
    switch (choice)
    {
    case 1:
        
        game();

        break;
    case 2:
        system("clear");
        exit_instructions = instructions();
        if (exit_instructions == 'o'){
            system("clear");
            goto menu;
        }
            break;
    case 3:
        return 0;
        break;

    default:
        break;
    }

}