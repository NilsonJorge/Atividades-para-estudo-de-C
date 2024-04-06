#include <stdio.h>
#include <stdlib.h>

int fatorial(int numx);

int main(int argc, char **argv){
	
	int num;
    num = atoi(argv[1]);
	
	/*printf("Digite o numero que deseja calcular o fatorial:");
	scanf("%d",&num);*/
	
	printf("O fatorial deste numero vale: %d",fatorial(num));
	
}

int fatorial(int numx){
	int result = 1;
	for(int i= 1; i<=numx;i++ ){
		result = result*i;
	}
	return result;
}
