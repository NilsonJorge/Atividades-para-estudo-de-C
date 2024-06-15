#include<stdio.h>


main(){
	
	int A[3][3];
	int B[3][3];
	int i,j,k1,k2,soma;
	printf("Digite a matriz A:\n");
	
	for(i = 0;i<3;i++){
		for(j = 0;j<3;j++){
		  scanf("%d",&A[i][j]);	
		}	
	}
	
	for(k1 = 0;k1<3;k1++){
		for(k2 = 0;k2<3;k2++){
			soma = 0;
			for(i = 0;i <3;i++){
				soma = soma + A[k1][i] * A[i][k2];
			}
			B[k1][k2] = soma;
		}
	}
	for(i = 0;i<3;i++){
		printf("\n");
		for(j = 0;j<3;j++){
		  printf("%d	",B[i][j]);	
		}	
	}	
}
