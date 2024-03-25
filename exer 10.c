#include <stdio.h>
#include <stdlib.h>

void busca(float **dados);

int main(){
	
    int i,j;
	float **dados;
	
	dados = malloc(10 * sizeof(float*));
    for(i = 0;i < 2;i++){ 
	   dados[i] = malloc(2 * sizeof(float));
	}
	
	for( i = 0;i<10;i++){
		for( j = 0;j<2;j++){
			if(j == 0){
				printf("\nDigite o numero do %d aluno:",i+1);
				scanf("%f",&*(*(dados+j)+i));
			}else{
				printf("Digite a altura do %d aluno:",i+1);
				scanf("%f",&*(*(dados+j)+i));
			}
		}
	}
	busca(dados);
	return 0;
}

void busca(float **dados){
	int i,j;
	float maior,menor,maiorn = 0, menorn = 0;
	maior = *(*(dados +1)+i);
	menor = *(*(dados +1)+i);
	for(i = 0;i<10;i++){
		for(j=0;j<2;j++){
		   if(j == 1){
			if(*(*(dados +j)+i) > maior){
				maior = *(*(dados +j)+i);
				maiorn = *(*(dados +0)+i);
			}
			if(*(*(dados +j)+i) < menor){
				menor = *(*(dados +j)+i);
				menorn = *(*(dados +0)+i);
			} 
	      }
		}
	}
	printf("\nO numero do maior aluno e: %.0f e sua altura e: %.2f.\n",maiorn,maior);
	printf("\nO numero do menor aluno e: %.0f e sua altura e: %.2f.\n",menorn,menor);
	
	
}
