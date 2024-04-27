#include <stdio.h>
#include <stdlib.h>

void verifica(char listaresp[5][10],char gabarito[10],int cont[5]);
void imprime(int result1[5]);

main(){
	int i, j;
	char gabarito [10] = {'a','c','d','a','b','c','b','d','d','c'};
	
	char listaresp[5][10];
	int cont[5] = {0,0,0,0,0};
	
	
	for(i = 0; i<5;i++){
		printf("\nDigite a resposta do %d aluno:",i+1);
		 for(j = 0;j<10; j++){
		  scanf("%s",&listaresp[i][j]);
	    }
    }
	verifica(listaresp, gabarito,cont);
	
	imprime(cont);
	return 0;
	
}

void verifica(char listaresp[5][10],char gabarito[10],int cont[5]){
	int i,j;
	
	for(i = 0; i<5;i++){
		for(j = 0;j<10;j++){
			if(listaresp[i][j] == gabarito[j]){
				cont[i] = cont[i] + 1;
			}
		}
	}
}
void imprime(int cont[5]){
	int i = 0;

	for(i = 0 ;i < 5;i++){
	 printf("\nO %d aluno acertou %d questoes.\n",i+1,cont[i]);
	 
    }
}
