

#include <stdio.h>
#include <stdlib.h>

int** preenche(int **matriz);
void imprime(int **matriz);
int* elementos(int **matriz);
int* buscaelemento(int **matriz, int x);

int main(){
	int **matriz;
	int i,x,*loca;
	int *locax;
	
	matriz = malloc(4 * sizeof(int*));
    for(i = 0;i < 4;i++){ 
	   matriz[i] = malloc(4 * sizeof(int));
	}
	
	matriz = preenche(matriz);
	imprime(matriz);
	loca = elementos(matriz);
	printf("\nA localizacao do elemento com maior valor e:%d",*loca);
	
	printf("\nDigite o valor que voce deseja procurar na matriz:");
	scanf("%d",&x);
	locax =  buscaelemento(matriz,x);
	if(*locax > -1){
	printf("A localizacao do elemento x e:%d",*locax);
    }
	
	return 0;
}
int** preenche(int **matriz){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			*(*(matriz+i)+j) = i*j;
		}
	}
	return matriz;
}

void imprime(int **matriz){
	int i,j;
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<4;j++){
			printf("%d   ",*(*(matriz+i)+j) );
		}
	}
}
 int* elementos(int **matriz){
 	int i,j,maior,loca,locai,locaj, *locap;
 	
 	maior = *(*(matriz+0)+0);
 	for(i=0;i<4;i++){
 		for(j=0;j<4;j++){
 			if(*(*(matriz+i)+j) > maior){
 				maior = *(*(matriz+i)+j);
 				locai = i*10;
 				locaj = j;
 				loca = locai+j;
			 }
		 }
	 }
	 locap = &loca;
 	return locap;
 }
 
 int* buscaelemento(int **matriz,int x){
 	int i,j,loca = -1,locai,locaj;
 	int *locap;
 	for(i=0;i<4;i++){
 		for(j=0;j<4;j++){
 			if(*(*(matriz+i)+j) == x){
 				locai = i*10;
 				locaj = j;
 				loca = locai+j;
			}
		 }
	 }
	 if(loca == -1){
	 	printf("\nNao encontrado.\n");
	 }
	 locap = &loca;
	 return locap;
 }
