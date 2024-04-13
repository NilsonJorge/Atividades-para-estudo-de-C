#include <stdio.h>
#define MAXDIM 25
static int matriz[MAXDIM][MAXDIM];
int Combina(int i, int j);

int main(){
int i,j;
int dim;

do{
	printf("Digite a dimensao(no maximo 25) = ");
	scanf("%d",&dim);
}	
while(dim>MAXDIM);
	
	for(i = 0;i<dim;i++){
		for(j = 0;j <=i;j++){
			printf("%d   ",Combina(i,j));
		}
		printf("\n");
	}
	return 0;
}

int Combina(int i, int j){
	int aux;
	if(j == 0 || i ==j){
		matriz[i][j] = 1;
		return 1;
	}
	matriz[i][j] = (matriz[i-1][j-1]+ matriz[i-1][j]);
	aux = matriz[i][j];
	return aux ;
}
