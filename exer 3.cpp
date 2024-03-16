#include <stdio.h>
#include <stdlib.h>
void contarnumeros(int*num1);

int main(){
	
	int num[10];
	for(int i=0; i<10;i++){
		printf("\nDigite o %d numero:",i+1);
		scanf("%d",&num[i]);
	}
	contarnumeros(num);
	
	
	
	return 0;
}

void contarnumeros(int *num1){
	int contpar = 0, contimpar = 0 ;
	for (int i = 0; i<10;i++){
		int result = num1[i] % 2;
		if(result == 0){
		   contpar = contpar + 1;
		}else{
		   contimpar = contimpar + 1;
		}
		
	}
	printf("A sequencia possui %d numeros pares e %d numeros impares", contpar, contimpar);
	
}
