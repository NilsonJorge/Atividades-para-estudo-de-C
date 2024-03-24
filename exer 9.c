#include<stdio.h>

void armazenar(float conjunto1[15],float conjunto2[15]);

float escalar(float conjunto1[15], float conjunto2[15]);
void imprimir(float conjunto1[15], float conjunto2[15], float result);

main(){
	float result;
	float conjunto1[15];
	float conjunto2[15];
	int i;
	armazenar(conjunto1,conjunto2);
	
	result = escalar(conjunto1, conjunto2);
	
	imprimir(conjunto1,conjunto2,result);
	
	return 0;
}

void armazenar(float conjunto1[15],float conjunto2[15]){
	float *apontador1;
	float *apontador2;
	int i = 0, j = 0,k=0;
	
	for(apontador1 = conjunto1; apontador1 < conjunto1+15; apontador1++){
	printf("\nDigite o %d elemento do primeiro conjunto:",i+1);
	scanf("%f",&*apontador1);
	i++;
	
    }  
    for(apontador2 = conjunto2; apontador2 < conjunto2+15; apontador2++){
	printf("\nDigite o %d elemento do segundo conjunto:",j+1);
	scanf("%f",&*apontador2);
	j++;
    }
}


float escalar(float conjunto1[15], float conjunto2[15]){
	float result = 0;
	float multi;
	float *conjunto1pont1;
	int i = 0;
	for(conjunto1pont1 = conjunto1;conjunto1pont1<conjunto1+15; conjunto1pont1++){
		multi = (conjunto1[i]) * (conjunto2[i]);
		result = result + multi;
		i++;
	}
	
	return result;
}

void imprimir(float conjunto1[15], float conjunto2[15], float result){
	int i = 0,j = 0;
	
	float *apontador1, *apontador2;
	
	for(apontador1 = conjunto1;apontador1<conjunto1+15;apontador1++){
		printf("\nO %d elemento do primeiro conjunto foi:%.2f",i+1, *apontador1);
		i++;
	}
	printf("\n_______________________________________________________\n");
	for(apontador2 = conjunto2;apontador2<conjunto2+15;apontador2++){
		printf("\nO %d elemento do segundo conjunto foi:%.2f",j+1, *apontador2);
		j++;
	}
	printf("\n_______________________________________________________\n");
	printf("\n E o produto escalar entre eles foi:%.2f",result);
	
}
