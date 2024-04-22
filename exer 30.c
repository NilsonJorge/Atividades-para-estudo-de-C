#include <stdio.h>
#include <stdlib.h>

void calcular(int **mat);
main(){
	
	
	int **mat,i,j;
	mat = malloc(3 * sizeof(int*));
	
    for(i = 0;i < 3;i++){ 
	   mat[i] = malloc(3 * sizeof(int));
	}
	
	for(i = 0;i<3;i++){
		printf("\n");
		for(j = 0;j<3;j++){
			scanf("%d",&*(*(mat + i)+j));
		}
	
	}
	
	calcular(mat);
}

void calcular(int **mat){
	int  i, j;
	int somadp = 0;//diagonal principal 
    int somaacdp = 0;//acima da diagonal principal
    int somaabdp = 0;//abaixo da diagonal principal
    int somads = 0;//diagonal secundaria
    
	
	for(i = 0;i<3;i++){
		for(j=0; j < 3;j++){
			if(i==j){
				 somadp = somadp + *(*(mat + i)+j);
			}
			if(i < j){
			 somaacdp = somaacdp +	*(*(mat + i)+j) ;
			}
			if(i > j){
			  somaabdp = somaabdp + *(*(mat + i)+j);	
			}
			if(((i == 0)&&(j == 2))||((i == 1)&&(j==1))||((i == 2 )&&(j==0))){
			  somads = somads +  *(*(mat + i)+j);
			}
			
		}
		
	}	
	int **mattrans;
	mattrans = malloc(3 * sizeof(int*));
	
    for(i = 0;i < 3;i++){ 
	   mattrans[i] = malloc(3 * sizeof(int));
	}
	int k1,k2;
	for(k1 = 0;k1 < 3;k1++){
		for(k2=0;k2<3;k2++){
		  	*(*(mattrans + k1)+k2)  = *(*(mat + k2)+k1);

	    }	
	}
	printf("\nA soma dos elementos acima da diagonal principal vale:%d\n",somaacdp);
	printf("\nA soma dos elementos abaixo da diagonal principal vale:%d\n",somaabdp);
	printf("\nA soma dos elementos  da diagonal principal vale:%d\n",somadp);
	printf("\nA soma dos elementos  da diagonal secundaria vale:%d\n",somads);
	printf("\n A matriz transposta e:\n");
	for(i = 0;i<3;i++){
		printf("\n");
		for(j = 0;j<3;j++){
			printf("%d   ",*(*(mattrans + i)+j));
		}
	}
}
