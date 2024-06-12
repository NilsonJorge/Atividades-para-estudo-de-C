#include <stdio.h>
#include <stdlib.h>


main(){
	int A[3][3];
	int B[3][3];
	int C[3][3];
	int i,j,k1,k2,soma;
	
	printf("Digite a matriz A:\n");
	for(i = 0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Digite a matriz B:\n");
	for(i = 0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(k1 = 0;k1<3;k1++){
		for(k2=0;k2<3;k2++){
			soma = 0;
		  for(i = 0;i<3;i++){
		  	 soma = soma + (A[k1][i] * B[i][k2]) ;
		  }
	      C[k1][k2] = soma;
	    }	
	}
		
	for(i = 0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
		  printf("%d	",C[i][j]);
		}
	}	
	
	
}
