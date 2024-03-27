#include <stdio.h>
#include <stdlib.h>
main(){
	
	int vet[100];
	int i, j = 0,l;
	
	while(i<100){
	
		
        if((j%7 != 0)){
		  	vet[i]=j;
		  	i++;
		}
	  j++;
		
	}
	for(int k = 0;k<100;k++)
	 printf("\n %d   ",vet[k]);
}
