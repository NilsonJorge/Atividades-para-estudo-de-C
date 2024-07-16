#include <stdio.h>
#include <string.h>

void InverteS(char *s, int tamanho);
int main(){
	char palavra[20];
	int tamanho,i;
	
	printf("\nDigite uma palavra:");
	scanf("%s",palavra);
	tamanho  = strlen(palavra);
	
	InverteS(palavra,tamanho);
	
	for(i = 0;i <= tamanho;i++){
		printf("%c",palavra[i]);
	}
	return 0;
}
 
void InverteS(char *s,int tamanho){
	
	char *apontador;
	char invertido[20];
	int i = 0;
	for(apontador = s+tamanho;apontador >= s ;apontador--){
		invertido[i] = *apontador;
		i++;
	}
	i=0;
	for(apontador = s;apontador <= s+tamanho ;apontador++){ 
	   *apontador = invertido[i];
	   i++;
	}
}
