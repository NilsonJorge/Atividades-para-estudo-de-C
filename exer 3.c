#include <stdio.h>

void troca(int *a1, int *b1);
int main(){
	int  a = 2,b = 3,*a1,*b1;
	a1 = &a;
	b1 = &b;
	troca(a1,b1);
	
    printf("a = %d. b = %d", a, b);
	
	return 0;
}
void troca(int *a1, int *b1){
	int aux;
	aux = *b1;
	*b1 = *a1;
	*a1 = aux;
	
}
