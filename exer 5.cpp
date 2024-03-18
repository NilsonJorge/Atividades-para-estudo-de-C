#include <stdio.h>
#include <stdlib.h>

void elementosunicos(int *numero); 

main(){
	int numero[20];
	
	for(int i = 0; i <20; i++ ){
		printf("\nDigite o %d elemento: ", i+1);
		scanf("%d",&numero[i]);
	}
	elementosunicos(numero);
	
	
}

void elementosunicos(int *numero){
	
	int *apontador, *apontadorseq;
	int *const finalnum = numero +20;
	int j = 0;
	int novovet[20];
	
	for(apontador = numero; apontador < finalnum; apontador++){
		int atual = *apontador;
		for(apontadorseq = apontador + 1;apontadorseq <finalnum; apontadorseq++){
			if(*apontadorseq == atual){
				*apontador = NULL;
			}
		}
	}
	
	for(apontador = numero; apontador < finalnum; apontador++){
         if(*apontador !=NULL){
         	novovet[j]= *apontador;
         	j++;
		 }	
	}
	
	for(apontador = novovet; apontador < novovet +j; apontador++){
	   printf("\nA sequencia de numeros e:%d",*apontador);
    }
}
