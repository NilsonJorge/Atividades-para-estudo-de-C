#include <stdio.h>

void maiormenor(int *num1);

main(){
	
	int num[10];
	
	for(int i=0; i<10; i++){
		printf("\nDigite o %d numero:",i+1);
		scanf("%d",&num[i]);
		
	}
	maiormenor(num);
	
	
}

void maiormenor(int *num1){
	
	int *apontador;
	int *const finalnum = num1 +10;
	int maior = num1[0];
	int menor = num1[0];
	int seqmaior = 0;
	int seqmenor = 0;
	int seq = 0;
	int seq1 = 0;
	
	for(apontador = num1 ; apontador < finalnum ; apontador++){
	
		if(*apontador > maior){
			maior = *apontador;
			seqmaior = seq;
			
		}
		seq = seq +1;
	}
	for(apontador = num1 ; apontador < finalnum ; apontador++){
		if(*apontador < menor){
			menor = *apontador;
			seqmenor = seq1;
			
		}
		seq1 = seq1 +1;
	}
	printf("\nO maior elemento do vetor e %d e esta na posicao %d", maior , seqmaior);
	printf("\nO menor elemento do vetor e %d e esta na posicao %d", menor , seqmenor);
	
}
