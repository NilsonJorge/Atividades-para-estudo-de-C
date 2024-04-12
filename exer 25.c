#include<stdio.h>


void ordena(int *pontvet);
void imprima(int *pontvet);

main(){
	
	int vetor[10];
	
	ordena(vetor);
	
	imprima(vetor);
	return 0;
}

void ordena(int *pontvet){
	
	int *apontador;
	int *apont2;
	int aux;
	
	printf("Digite os valores:\n");
	
	for(apontador = pontvet;apontador < pontvet+10;apontador++){
		scanf("%d",&*apontador);
    }
	for(apontador = pontvet;apontador < pontvet+10;apontador++){
	      
		for(apont2 = apontador;apont2 < pontvet+10;apont2++){
			if(*apontador > *apont2){
				aux = *apontador;
				*apontador = *apont2;
				*apont2 = aux;
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
