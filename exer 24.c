
#include <stdio.h>
void ordena(int *pontvet);
void imprima(int *pontvet);
main(){
	int vetor[11];
	int i;
	for(i = 0;i<11;i++){
	  printf("\nDigite o %d valor do vetor:",i+1);
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
	for(apontador = pontvet;apontador < pontvet+11;apontador++){
		for( y = apontador; y < pontvet+11;y++){
			if(*apontador < *y){
			  aux = *apontador;
			  *apontador = *y;
			  *y = aux;	
			}
		}
	}
	for(apontador = pontvet;apontador < pontvet+6;apontador++){
		for( y = apontador; y < pontvet+6;y++){
			if(*apontador > *y){
			  aux = *apontador;
			  *apontador = *y;
			  *y = aux;	
			}
		}
	}
	aux = 0;
	
		
}
void imprima(int *pontvet){
	int *apontador;
	for(apontador = pontvet;apontador < pontvet+11;apontador++){
		   printf("%d   ",*apontador);
		}
}


