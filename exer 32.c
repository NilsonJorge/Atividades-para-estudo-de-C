
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** gerarDados(int **mat);
void imprime(int **mat);

main(){
	int **mat, **matgerado, i, j;
	
    mat = malloc(5 * sizeof(int*));
    for(i = 0;i < 5;i++){ 
	   mat[i] = malloc(5 * sizeof(int));
	}
	
	matgerado = gerarDados(mat);
	
	imprime(matgerado);
}

int** gerarDados(int **mat){

	int **mat1, i, j;
	srand(time(NULL)); 
	
    mat1 = malloc(5 * sizeof(int*));
    for(i = 0;i < 5;i++){ 
	   mat1[i] = malloc(5 * sizeof(int));
	}
	
	for(i = 0;i<5;i++){
		for(j=0; j < 5;j++){
		*(*(mat1 + i)+j) = rand() % 99; 
		  if(*(*(mat1 + i)+j) != *(*(mat + i)+(j-1))){
		 	*(*(mat + i)+j) = *(*(mat1 + i)+j);
		  }    
		}
	}
	
	return mat;
}
void imprime(int **mat){
	int i,j;
	
	printf("\nA cartela de bingo gerada foi:\n");
	for(i = 0;i<5;i++){
		for(j=0; j < 5;j++){
		  printf("%d ",*(*(mat + i)+ j));
		}
		printf("\n");
	}
}
