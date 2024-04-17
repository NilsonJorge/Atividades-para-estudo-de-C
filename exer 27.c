#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preencher(int **mat);

int main(){
	int **mat, i, j;
	
    mat = malloc(5 * sizeof(int*));
	
    for(i = 0;i < 5;i++){ 
	   mat[i] = malloc(5 * sizeof(int));
	}
	
	preencher(mat);
	
}

int preencher(int **mat){
	int  i, j;
	
    

    
	
	for(i = 0;i<5;i++){
		for(j=0; j < 5;j++){
			if(i==j){
				*(*(mat + i)+j) = 1; 
			}else{
				*(*(mat + i)+j) = 0;
			}
			
		}
		
	}	
	for(i = 0;i<5;i++){
		for(j=0; j < 5;j++){
		  printf("%d ",*(*(mat + i)+ j));
		}
		printf("\n");
	}
	
}
