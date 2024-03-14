#include <stdio.h>
void procurarxy(int *apontador, int x, int y);

main(){
	int numero[8];
	int x, y, i;
	for(i=0;i<8;i++){
		printf("Digite o %d numero: ",i+1);
		scanf("%d",&numero[i]);
	}	
	printf("\nAgora digite o primeiro numero que deseja comparar:");
	scanf("%d",&x);
	printf("\nAgora digite o segundo numero que deseja comparar:");
	scanf("%d",&y);
	
	procurarxy(numero, x , y);
	
	
}

void procurarxy(int *numero, int x, int y){
	
	int *apontador;
	int *const finalnum = numero +8;
	int posicaox, posicaoy, seq, seq1 = 0;
	int soma;
	
	for(apontador = numero; apontador < finalnum; apontador++ ){
		if(*apontador == x){
			soma = *apontador;
			posicaox = seq;
		}
		seq = seq + 1;
	}
	for(apontador = numero; apontador < finalnum; apontador++ ){
		if(*apontador == y){
			soma = soma + *apontador;
			posicaoy = seq1;
		}
		seq1 = seq1 + 1;
	}
	printf("A soma dos valores sao: %d e a posicao de x e: %d e a posicao de y e: %d.", soma, posicaox, posicaoy );
}
