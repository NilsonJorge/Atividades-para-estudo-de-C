#include <stdio.h>
void quadrado(float *numero);

int main(){
	
	float numero[10];
	
	for(int i=0;i<10;i++){
		printf("\nDigite o %d numero:",i+1);
		scanf("%f",&numero[i]);	 
	}
	quadrado(numero);
	
	return 0;
}

void quadrado(float *numero){
	int i;
	float quadrado[10];
	for (i=0;i<10;i++){
		quadrado[i] = numero[i]*numero[i];
		
	}
	for(i=0;i<10;i++){
	
	printf("\nO quadrado do %d numero que vale %.2f e : %.2f ",i+1, numero[i], quadrado[i]);
    } 
}
