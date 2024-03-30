#include <stdio.h>


void exibir(int *vet);

main(){
	
	int vetnum[20];
	
	for(int i = 0; i<20; i++){
		printf("Digite o %d valor:",i+1);
		scanf("%d",&vetnum[i]);
	}//ler os valores
	
	exibir(vetnum);//chamada da função
	
}
void exibir(int *vet){
	
	int *pont;//ponteiro
	int pares[20], impares[20] ;// vetores para numeros parese impares
	int i = 0,j = 0, n = 0;
	int quantimpar = 0; // quantidade de impares
	int soma = 0;
	
	for(pont = vet; pont < vet+20;pont++ ){
		
		if(*pont%2==0){
		   pares[n]= *pont;	
		   soma = soma + pares[n];
		   n++;
		}else{
			
			impares[quantimpar] = *pont;
			quantimpar++;
		}
	}
	printf("\nOs numeros pares digitados foram: ");
	for(i=0;i<n;i++){
		printf("%d  ",pares[i]);
	}
	printf("\nA soma dos numeros pares foi: %d",soma);
	printf("\n Os numeros impares digitados foram: ");
	for(i=0;i<quantimpar;i++){
		printf("%d  ",impares[i]);
	}
	printf("\n Um total de %d numeros impares.",quantimpar);
}
