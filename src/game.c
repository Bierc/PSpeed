#include <string.h>
#include "words.h"
#include "game.h"
#include "stack_proprieties.h"
#include "time.h"
#include <unistd.h>
#include <signal.h>


int FLAG = 1;

void handler() {
	FLAG = 0;
}
Stack *game()
{
	char c;
	char string[100];
	int words_per_min = 0;
	struct timespec start, end;
	double timeTaken;
	Stack *s = random_words();
	system("clear");
	int seconds = 10;
	printf("press ENTER to start the game");
	while (c != '\n')
	{
		__fpurge(stdin);
		scanf("%c", &c);
	}
	clock_gettime(CLOCK_MONOTONIC, &start);
	signal(SIGALRM,handler);

	alarm(seconds);

	while (s->top != NULL && FLAG){
		
		printf("%s", s->top);
		int i = strlen(s->top->data);

		__fpurge(stdin);
		fgets(string, 100, stdin);
		
		if (!strncmp(string, s->top->data, i - 2))
		{
			removeStackData(s);
			system("clear");
			words_per_min++;
		}

	}
	clock_gettime(CLOCK_MONOTONIC, &end);
	timeTaken = (end.tv_sec- start.tv_sec) + (end.tv_nsec - start.tv_nsec)* 1e-9;
	printf("\nYou typed %d words in %.2lfs, game over!\n",words_per_min , timeTaken);
	return;
}