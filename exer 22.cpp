#include <stdio.h>
#include <stdlib.h>


void triangulo(float *pl1,float *pl2,float *pl3);

int main(int argc, char **argv){
	
float l1;
float l2;
float l3;

l1 = atoi(argv[1]);
l2 = atoi(argv[2]);
l3 = atoi(argv[3]);

   triangulo(&l1,&l2,&l3);

 return 0;
}

 void triangulo( float *pl1,float *pl2,float *pl3){
	float ll2,ll3,ll1;
	ll1 = *pl1;
	ll2 = *pl2;
	ll3 = *pl3;
	
	if((ll1 < (ll2 + ll3))&&(ll2 < (ll1 + ll3))&&(ll3 < (ll1 + ll2))){
		
		printf("As medidas sao de um triangulo.");
		if((ll1 == ll2)&&(ll1 == ll3))
		 printf("\nE um triangulo equilatero");
		if((ll1!=ll2)&&(ll1!=ll3))
		 printf("\nE um triangulo escaleno");
		if(((ll1 ==ll2)&&(ll2 !=ll3))||((ll1 == ll3)&&(ll3!=ll2))||((ll2 == ll3)&&(ll3!=ll1)))
		 printf("\n E um triangulo isosceles");  
	}else{
		printf("As medidas nao sao de um triangulo.");
	
   
 }
}
