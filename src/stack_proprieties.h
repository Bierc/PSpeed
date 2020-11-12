#include <stdio.h>
#include <stdlib.h>
#ifndef STACK_PROPRIETIES_H_INCLUDED
#define STACK_PROPRIETIES_H_INCLUDED


typedef struct element{
	char data[100];
	struct element *next;
}Element;


typedef struct stack{
	Element *top;
}Stack;


Stack *initStack();
char *removeStackData(Stack *s);
void insertStackData(char c[100], Stack *s);
void printStack(Stack *s);


#endif //STACK_PROPRIETIES_H_INCLUDED