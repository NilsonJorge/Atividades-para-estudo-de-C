#include <stdio.h>

void primo(int *seq);

main(){
	
	int seq[10];
	
	for(int i = 0;i<10;i++){
		printf("\nDigite o %d numero:",i+1);
		scanf("%d",&seq[i]);
	}
	
	primo(seq);
	
}
void primo(int *seq){
	
	int *seqf;
	int cont = 0;
	int posicao = 0;
	
	for(seqf = seq; seqf < seq+10;seqf++){
		for(int i =1;i<=*seqf;i++){
			if(*seqf%i == 0)
			   cont++;
		}
		if(cont == 2){
			printf("\nO numero %d e primo e esta na posicao %d do vetor.",*seqf,posicao);
		}
		posicao++;
		cont = 0;
	}
	
}
