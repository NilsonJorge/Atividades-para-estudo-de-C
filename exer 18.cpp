
#include <stdio.h>
#include <stdlib.h>

float media(float *pontnum);
float variancia(float *pontm, float *pontnum);

main(){
	
	float num[10];
	float mediax;
	printf("Digite 10 numeros reais:\n");
	
	for(int i = 0; i<10;i++){
		
		scanf("%f", &num[i]);
		
	}
	
	mediax = media(num);//funcao para calcular a media
	
	float varianciax = variancia(&mediax,num);// para calcular a variancia
	
	printf("A media vale: %.2f E a variancia vale: %.2f",mediax, varianciax);
	
	
}

float media(float *pontnum){
	float *apontnum;
	float smedia, media;
	
	for(apontnum = pontnum; apontnum < pontnum+10;apontnum++){
		smedia = smedia + *apontnum;	
	}
	media = smedia/10;
	return media;
}

float variancia(float *pontm, float *pontnum){
	
	float *apontm, *apontnum;
	float xi, quadrado,svariancia = 0;
	
	for(apontnum = pontnum;apontnum < pontnum+10;apontnum++){
		xi = (*apontnum -  *pontm);
		quadrado = xi*xi;
		svariancia = svariancia + quadrado;
		
	}	
	float variancia = svariancia/10;
	
	return variancia;
}
