#include <stdio.h>

void mostrarinvertida(float *numero);
void mostrardireta(float *numero);

int main(){

	float numero[10];

	int opcao;
	
	for(int i = 0; i<10; i++){
		printf("\nDigite o %d elemento:",i+1);
		scanf("%f",&numero[i]);
	}
	


  for(;;){
  	printf("\nAgora digite a opcao desejada.");
	printf("\n0 - para sair;");
	printf("\n1 - Para mostrar a sequencia na ordem original");
	printf("\n2 - Para mostrar a sequencia em ordem invertida\n");
	scanf("%d",&opcao); 
	
	if(opcao == 1)
	  mostrardireta(numero);
	  
	if(opcao == 2)
	  mostrarinvertida(numero);
	  
	if((opcao > 2)or(opcao <0)){
	   printf("\nComando invalido\n");
    }
	
	if(opcao == 0)
	   break;       
 }
	return 0;
}

void mostrardireta(float *numero){
	
	float *apontador;
	float *const finalnum = numero +10;
	
	for(apontador = numero; apontador < finalnum; apontador++){
		printf("%.2f  ",*apontador);
	
	}
	printf("\n\n");
}

void mostrarinvertida(float *numero){
	
	float *apontador1;
	float *const finalnum1 = numero +10;
	
	for(apontador1 = finalnum1 -1 ; apontador1 > numero -1 ; apontador1--){
		printf("%.2f  ",*apontador1);
		
	}
	printf("\n\n");
}
