#include <stdio.h>
#include <stdlib.h>

float** ler(float **mat);
float** notafinal(float **mat);
void imprimemat(float **mat);
void imprimemedia(float **mat);

int main(){
	int i,j;
	float **mat;
	mat = malloc(5 * sizeof(float*));
    for(i = 0;i < 5;i++){ 
	   mat[i] = malloc(4 * sizeof(float));
	}
	
	mat = ler(mat);
	mat = notafinal(mat);
	imprimemat(mat);
	imprimemedia(mat);
	
	return 0;
}

float** ler(float **mat){
	
	int i,j;
	
		for(i = 0;i<5;i++){
		 for(j = 0;j<3;j++){
			if(j == 0){
				printf("\nDigite a matricula do %d aluno:",i+1);
				scanf("%f",&*(*(mat+i)+j));
				
			}
			if(j == 1){
				printf("\nDigite a media das provas do %d aluno:",i+1);
				scanf("%f",&*(*(mat+i)+j));
				
			}
			if(j==2){
				printf("\nDigite a media dos trabalhos do %d aluno:",i+1);
				scanf("%f",&*(*(mat+i)+j));
				
			}
			
		 }
	}
	return mat;
}
float** notafinal(float **mat){
	int i,j;
	for(i=0;i<5;i++){
	   *(*(mat+i)+3) = *(*(mat+i)+1) + *(*(mat+i)+2);
	}
	return mat;
}
void imprimemat(float **mat){
	int i,j,aluno;
	float maior = 0;
	
	for(i=0;i<5;i++){
		if(maior < *(*(mat+i)+3)){
			maior = *(*(mat+i)+3);
			aluno = i;
		}
	}
	printf("\nA matricula com a maior nota foi: %.0f",*(*(mat+aluno)+0));
}
void imprimemedia(float **mat){
	int i;
	float media = 0;
	for(i = 0;i<5;i++){
		media = media + *(*(mat+i)+3);
	}
	printf("\nA media aritmetica das notas finais foi: %.2f",media/5);
}
