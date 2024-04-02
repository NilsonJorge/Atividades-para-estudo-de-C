#include <stdio.h>
#include <stdlib.h>

void compacta(int *vetor);

int main(){
	
	int i,vetor[15],quant = 0,compara;
	for(i=0;i<15;i++){
		printf("\nDigite o %d elemento:",i+1);
		scanf("%d",&vetor[i]);
		
	}
    compacta(vetor);
    for(i=0;i<15;i++){ 
       compara = vetor[i];
	  if(compara != 0 ){
	   quant = quant +1;
      }
	}
	for(i=0;i<quant;i++)
	 printf("%d  ",vetor[i]);
	
	
}
void compacta(int *vetor){
	int *apontador,*apontadorp;
	int i = 1,j=0,quant = 0;
	for(apontador = vetor;apontador < vetor+15;apontador++){
		if(*apontador == 0){
			for(apontadorp = apontador;apontadorp < vetor+15;apontadorp++){
			*apontadorp = *(apontador+i);
			i++;
		    
		    }
		}	
	}
}
