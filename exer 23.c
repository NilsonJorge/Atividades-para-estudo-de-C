#include <stdio.h>

void ordena(int *pontvet);
void imprima(int *pontvet);
main(){
	int vetor[10];
	int i;
	for(i = 0;i<10;i++){
	  printf("\nDigite o %d valor do vetor:",i);
	  scanf("%d",&vetor[i]);
	}
	
	ordena(vetor);
	
	imprima(vetor);
	return 0;
}

void ordena(int *pontvet){
	
	int *apontador;
	int *y = 0;
	int aux;
	
	for(apontador = pontvet;apontador < pontvet+10;apontador++){
		for( y = apontador; y < pontvet+10;y++){
			if(*apontador > *y){
			  aux = *apontador;
			  *apontador = *y;
			  *y = aux;	
			}
		}
	}
		
}
void imprima(int *pontvet){
	int *apontador;
	for(apontador = pontvet;apontador < pontvet+10;apontador++){
		   printf("%d   ",*apontador);
		}
}


