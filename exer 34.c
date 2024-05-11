#include <stdio.h>

void verifica(char gabarito[10],char listaresp[5][10],int resultado[5]);
void imprime(char listaresp[5][10],int matricula[5],int resultado[5]);

int main(){
	
	char listaresp[5][10];
	int matricula[5];
	char gabarito[10];
	int resultado[5];
	int i,j;
	
	printf("Digite o gabarito da prova:\n");
	for(j=0;j<10;j++){
		printf("Questao %d: ",j+1);
		scanf("%s",&gabarito[j]);
	}
	
	for(i=0;i<5;i++){
		printf("\nDigite a matricula do %d aluno:",i+1);
		scanf("%d",&matricula[i]);
		printf("\nAgora digite as resposta deste aluno referente a cada questao:\n");
		for(j=0;j<10;j++){
			printf("\nQuestao %d: ",j+1);
			scanf("%s",&listaresp[i][j]);
		}
	}
	
	verifica(gabarito,listaresp,resultado);
	imprime(listaresp,matricula,resultado);
	return 0;
	
}
void verifica(char gabarito[10],char listaresp[5][10],int resultado[5]){
	int i,j,cont = 0;
	
	for(i=0;i<5;i++){
		cont = 0;
		for(j = 0;j<10;j++){
			if(listaresp[i][j] == gabarito[j]){
				cont++;
			}
		}
		resultado[i] = cont; 
	}
}
void imprime(char listaresp[5][10],int matricula[5],int resultado[5]){
	
	int i,j;
    int aprov = 0;
	for(i = 0;i<5;i++){
		printf("\nO aluno referente a matricula: %d .Forneceu essas resposta:",matricula[i]);
		for(j = 0;j<10;j++){
			printf("\nQuestao %d:%c",j+1,listaresp[i][j]);
			
		}
		printf("\nSua media foi:%d e ",resultado[i]);
		if(resultado[i] < 6){
			printf("esta reprovado.");
		}else{
			printf("esta aprovado");
			aprov++;
		}
		printf("\n________________________________________________________________________________\n");
	}
	
	printf("Resumindo: a taxa de aprovacao foi de %d %% ",(aprov*100)/5);
	
}
