/*Arquivo com as principais funções de Pilha*/

#include "stack_proprieties.h"


Stack *initStack(){
	Stack *s;
	s = (Stack *)malloc(sizeof(Stack));
	s->top = NULL;
	return s;
}

void insertStackData(char c[100], Stack *s){
	Element *newData;
	newData = (Element *)malloc(sizeof(Element));
	strcpy(newData->data, c);

	newData->next = s->top;
	s->top = newData;
}

char *removeStackData(Stack *s){
	char* exit = s->top->data;
	Element *aux = s->top;
	s->top = s->top->next;
	free(aux);
	aux = NULL;
	return exit;
}

void printStack(Stack *s){
	Element *iterator;
	iterator = s->top;
	while(iterator != NULL){
		printf("%s",iterator->data);
		iterator = iterator->next;
	}
	printf("\n");
}
