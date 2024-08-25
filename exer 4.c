#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorprimo(int fatores[20],int n, int *x);
 
int main(){

int fatores[20];
int n, *x = 0;
int retorno,quant;

int z = 0;
int g = 0;
printf("Digite um numero:");
scanf("%d",&n);

x = &quant;

 retorno = fatorprimo(fatores ,n ,x);
	
	//mensagem de acordo com o valor de x retornado
  if(retorno == 1){
  	printf("\nTem mais de 10 fatores");
  }
  if(retorno ==0){
  	printf("\nTem 10 ou menos fatores");
  }
  printf("\nSao exatamente %d fatores. ",quant);
  printf("\n______________________________");
  
  return 0;
}
int fatorprimo(int fatores[20],int n, int *x){
	
	int primo = 1;
	int i ;
	int cont;
	int z = 0;
    int g = 0;
    //ciclo para fatorar o numero n
	do{
  	
		primo++;
		for(i =1;i<=primo;i++){
			if(primo%i == 0){
			   cont++;
		    }
		}
		if(cont == 2){
		
    		while(n%primo == 0){
    			n = n/primo;
    		     fatores[z] = primo;
    		     z++;
			}
		  
	   }
		    
		cont = 0;
  }while(n > 1);
  
    //mostrar os fatores encontrados
    printf("______________________________");
    printf("\nFATORES PRIMOS:");
	for(g = 0;g<z;g++){
		printf("\n %d",fatores[g]);
	}
	printf("\n______________________________");
	*x = z;
	//retorno
	if(*x > 10){
		return 1;
	}else{
		return 0;
	}
}
