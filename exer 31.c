#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** triangularInferior(int **mat);
void imprime(int **mat,int **matinfe);

main(){
	int **mat, **matinfe1, i, j;
	srand(time(NULL)); 
	
    mat = malloc(4 * sizeof(int*));
    for(i = 0;i < 4;i++){ 
	   mat[i] = malloc(4 * sizeof(int));
	}
	//gerar matriz
	for(i = 0;i<4;i++){
		for(j=0; j < 4;j++){
		*(*(mat + i)+j) = 1+(rand() % 20); 
			}
		}
		
	
	
	//chamada da funçao
	matinfe1 = triangularInferior(mat); 
	
	
	imprime(mat, matinfe1);
	return 0;
}

int** triangularInferior(int **mat){
	
	int **matinfe,i,j;
	matinfe = malloc(4 * sizeof(int*));
	for(i = 0;i < 4;i++){ 
	   matinfe[i] = malloc(4 * sizeof(int));
	}
	
	for(i = 0;i<4;i++){
		for(j=0; j < 4;j++){
			if(i < j){
			 *(*(matinfe + i)+j) = 0;
			}else{
			  *(*(matinfe + i)+j) = *(*(mat + i)+j) ;
			}
        } 
    }
    
	return matinfe;
}

void imprime(int **mat,int **matinfe){
	int i,j;
	printf("\nA matriz gerada\n");
	for(i = 0;i<4;i++){
		for(j=0; j < 4;j++){
		  printf("%d ",*(*(mat + i)+ j));
		}
		printf("\n");
	}
	printf("\nAgora a matriz triangular inferior\n");
	for(i = 0;i<4;i++){
		for(j=0; j < 4;j++){
		  printf("%d ",*(*(matinfe + i)+ j));
		}
		printf("\n");
	}
	
}
