#include <stdio.h>


void soma(int x[10],int y[10]);
void produto(int x[10], int y[10]);
void diferenca(int x[10], int y[10]);
void intersecao(int x[10], int y[10]);
void uniao(int x[10], int y[10]);

main(){
	
	int x[10];
	int y[10];
	int i = 1,j = 0,k = 0,aux = 0;
	printf("Digite os elementos da primeira sequencia\n");
	
	scanf("%d",&x[0]);
	while(i<10){
		
		scanf("%d",&aux);
		for(j = 0;j<10;j++){
			if(aux == x[j]){
				printf("Valor nao permitido, digite outro: ");
				break;
			}
			if(j == 9){
				x[i] = aux;
				i++;
			}
		}	
	}
	
	i=1;
	printf("\nDigite os elementos da segunda sequencia\n");
	scanf("%d",&y[0]);
	while(i<10){
		
		scanf("%d",&aux);
		for(j = 0;j<10;j++){
			if(aux == y[j]){
				printf("Valor nao permitido, digite outro: ");
				break;
			}
			if(j == 9){
				y[i] = aux;
				i++;
			}
		}	
	}
	for(k = 0;k<10;k++)
		printf("%d  ",x[k]);
	printf("\n");
	for(k = 0;k<10;k++)
		printf("%d  ",y[k]);
	
	soma(x,y);
	produto(x,y);
	diferenca(x,y);
	intersecao(x,y);
	uniao(x,y);
	
	return 0;
}

void soma(int x[10],int y[10]){
	
	int vetsoma[10];
	int i,j;
	printf("\n");
	printf("\nO vetor resultante da soma dos dois vetores e:");
	for(i = 0;i<10;i++){
		vetsoma[i] = x[i] + y[i];
	   printf("%d	,",vetsoma[i]);
    }
}

void produto(int x[10], int y[10]){
	int i, vetprod[10];
	printf("\n");
	printf("\nO vetor resultante do produto dos dois vetores e:");
	for(i = 0;i<10;i++){
		vetprod[i] = x[i] * y[i];
		printf("%d	 ,",vetprod[i]);
	}
}

void diferenca(int x[10], int y[10]){
	
	int i,j,k = 0,count = 0 ,vetdif[10];
	
	for( i = 0;i<10;i++){
		for(j = 0;j<10;j++){
			if( x[i] ==y[j]){
				break;
			}
			if(j == 9){
			  vetdif[k] = x[i];
			  k++;
			  count++;	
			}
		}
	}
	printf("\n");
	printf("\nO vetor resultante da diferenca entre os dois vetores e:");
	for( i = 0;i<count;i++)
	  printf("%d	",vetdif[i]);
}

void intersecao(int x[10], int y[10]){
	int i,j,k = 0,count = 0, vetinter[10];
	
	for(i = 0;i<10;i++)
		for(j = 0; j<10;j++)
			if(x[i] == y[j]){
				vetinter[k] = x[i];
				k++;
				count++;
			}
    printf("\n");
	printf("\nO vetor resultante da intersecao entre os dois vetores e:");
	for(i = 0;i<count;i++)
		printf("%d	 ",vetinter[i]);
	
}

void uniao(int x[10], int y[10]){
	int i,j,k = 0,count = 0, vetuni[20],aux = 0;
	for(i=0;i<10;i++){
	  vetuni[i] = x[i];
	  count++;
	  k++;
}
	  
	for(i = 0;i<10;i++){
	  aux = y[i];
	  for(j=0;j<10;j++){
	  
	    if(x[j] == y[i]){
	       break;
	    }
	    if(j == 9){
	    	vetuni[k] = aux;
	    	k++;
	    	count++;
		}
	  }
    }
	   printf("\n");
	printf("\nO vetor resultante da uniao entre os dois vetores e:");    
	for(i = 0;i<count;i++)
	  printf("%d	 ",vetuni[i]);
}
