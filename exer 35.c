#include <stdio.h>
#include <stdlib.h>

int** cadastra(int **mat);
void soma(int **mat,int array[3]);
void imprime(int *array);

int main(){
	int **mat;
	int **mat1;
	int array[3];
	int i;
	
	mat = malloc(3 * sizeof(int*));
    for(i = 0;i < 3;i++){ 
	   mat[i] = malloc(3 * sizeof(int));
	}
	
	mat1 = cadastra(mat);
	soma(mat1,array);
	imprime(array);	
	
	return 0;
}

int** cadastra(int **mat){
	int i,j;
	
	for(i = 0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			scanf("%d",&*(*(mat +i)+j));
		}
	}
	
	return mat;
}

void soma(int **mat, int array[3]){
	int i,j,soma = 0;

	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma  = soma + *(*(mat +j)+i);
		}
		array[i] = soma;
		soma = 0;
	}
	

}

void imprime(int *array){
	int i;
	int *apontador;
	
	printf("\nArray:\n");
	for(apontador = array;apontador < array+3;apontador++){
		printf("%d  ", *apontador);
	}
	
}
