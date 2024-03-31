#include <stdio.h>


void interseccao(int vet1[10],int vet2[10],int vet3[20]);

main(){
	
	int vet1[10], vet2[10], vet3[20];
	int i;
	
	for(i = 0;i<10;i++){
		printf("\nDigite o %d elemento do vet1:",i+1);
		scanf("%d",&vet1[i]);
	}
	for(i = 0;i<10;i++){
		printf("\nDigite o %d elemento do vet2:",i+1);
		scanf("%d",&vet2[i]);
	}
	
	interseccao(vet1,vet2,vet3);
}

void interseccao(int vet1[10],int vet2[10],int vet3[20]){
	
	int i,j,k,count = 0,l = 0,aux;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(vet1[i]==vet2[j]){
				aux = vet1[i];
				for(k = 0;k < 20;k++){
					if(aux == vet3[k]){
						break;
					}
					if(k==9){
						vet3[l] = aux;
						l++;
						count ++;
					}
				}
			}
		}
	}
	for(i = 0;i < count;i++){
		printf("\nO %d elemento do vetor e:  %d",i+1,vet3[i]);
	}
}
