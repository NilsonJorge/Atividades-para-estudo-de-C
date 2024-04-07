#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
	
	int dia, mes, ano;
	
	dia = atoi(argv[1]);
	mes = atoi(argv[2]);
	ano = atoi(argv[3]);
	printf("%d", argc);
	if( argc > 4 ){
		printf("\nNumero de parametro incorreto");
	}else{
		if((dia > 31 )||(mes > 12)){
			printf("\nData nao valida");
			return 0;
		}
		if((dia > 28)&&(mes == 02)){
			printf("\nData nao valida");
			return 0;
		}
		if((dia>30)&&(mes == 04||06||9||11)){
			printf("\nData nao valida");
			return 0;
		}
		switch(mes){
			
			case 01: printf("\n%d de janeiro de %d",dia,ano);break;
			case 02: printf("\n%d de fevereiro de %d",dia,ano);break;
			case 03: printf("\n%d de marco de %d",dia,ano);break;
			case 04: printf("\n%d de abril de %d",dia,ano);break;
			case 05: printf("\n%d de maio de %d",dia,ano);break;
			case 06: printf("\n%d de junho de %d",dia,ano);break;
			case 07: printf("\n%d de julho de %d",dia,ano);break;
			case 8: printf("\n%d de agosto de %d",dia,ano); break;
			case 9: printf("\n%d de setembro de %d",dia,ano);break;
			case 10: printf("\n%d de outubro de %d",dia,ano);break;
			case 11: printf("\n%d de novembro de %d",dia,ano);break;
			case 12: printf("\n%d de dezembro de %d",dia,ano);
			break;
			
		}
		
	}
 return 0;	
}
