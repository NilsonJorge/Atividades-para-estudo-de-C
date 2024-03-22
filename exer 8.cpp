#include<stdio.h>

void fundirvetores(int *pontseq1 , int *pontseq2);

main(){
	
	int seq1[10];
	int seq2[10];
	int i;
	for(i = 0; i < 10;i++){
		printf("\nDigite o %d elemento do primeiro vetor: ",i+1);
		scanf("%d",&seq1[i]);
	}
	printf("____________________________________________________");
	for(i = 0; i < 10;i++){
		printf("\nDigite o %d elemento do segundo vetor: ",i+1);
		scanf("%d",&seq2[i]);
	}
	
	fundirvetores(seq1,seq2);
	
}

void fundirvetores(int *pontseq1 , int *pontseq2){
	
	int vetoresunidos[20];
	int *apontadorseq1 = pontseq1;
	int *apontadorseq2 = pontseq2;
	int *apontadorvetduplo;
	int j = 0, k = 0;
	

	 
	for(apontadorvetduplo = vetoresunidos; apontadorvetduplo < vetoresunidos+20;apontadorvetduplo = apontadorvetduplo + 2){
		
		*apontadorvetduplo = pontseq1[j];
		j = j+1;
	}
	for(apontadorvetduplo = vetoresunidos+1;apontadorvetduplo < vetoresunidos+20;apontadorvetduplo = apontadorvetduplo + 2){
		
	    *apontadorvetduplo = pontseq2[k];
	    k = k+1;
		
	
	}
	apontadorvetduplo = vetoresunidos;
	printf("\n____________________________________________________\n");
	printf("O vetor duplo tera a seguinte sequencia:");
	for(int i = 0; i <20; i++){
		
		printf("%d ",*apontadorvetduplo);
		apontadorvetduplo++;
	}
	
}
