#include <stdio.h>
#include <math.h>

main(){
	
	float vet[10];
	float smed = 0,media;
	float variancia, quadrado,xi, svariancia,desvio;
	printf("Digite os dez valores:");
	
	for(int i = 0;i<10;i++){
	scanf("%f",&vet[i]);
	}
	
	for(int i = 0;i<10;i++){
	  smed = smed + vet[i];
	
	}
	media = smed/10;
	printf("\nmedia: %.2f",media);
	
	for(int i =0;i<10;i++){
		xi = (vet[i] - media);
		quadrado = xi*xi;
		svariancia = svariancia + quadrado;
	}
	variancia = svariancia/10;
	printf("\n variancia: %.2f",variancia);
	
	desvio = sqrt(variancia);
	
	printf("\nO desvio padrao e de: %f",desvio);
	
}
