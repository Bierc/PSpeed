/*Arquivo gerador da pilha com palavras aleatórias*/

#include "words.h"
#include "stack_proprieties.h"

Stack *random_words(){
	Stack *s = initStack();
	FILE *arq;
	char line[100];
	char *result;
	int i, x;
	int contador = 0, x_anterior;
	
	arq = fopen("bin/words_alpha.txt", "rt");
if (arq == NULL)  // Se houve erro na abertura
  	{
     printf("Problemas na abertura do arquivo\n");
     return ;
 	}

i = 1;

x = rand() % 370099;//gera um número aleatório, utilizado para procurar no arquivo de palavras a palavra correspondente ao número
srand(time(NULL));
do{

    result = fgets(line, 100, arq);
    if (result){
        contador++;
        if(contador==x){
        insertStackData(line, s);
		
        x = rand() % 370099;
        i++;
        }
        if(feof(arq)){
            contador=0;
            rewind(arq);
        }
    }
}while(i<=200);
fclose(arq);
return s;
}