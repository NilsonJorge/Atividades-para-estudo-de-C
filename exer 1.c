#include <stdio.h>

main(){
	
	int i, j, *p_1, **p_2, **p_3, ***p_4;
	i = 4;
	j = 5;
	p_1 = &j;
	p_2 = &p_1;
	p_3 = p_2;
	p_4 = &p_3;
	
/*	printf("\n%d",j);
	printf("\n%x",&j);
	printf("\n%x",p_1);
	printf("\n%x",p_2);
	printf("\n%x",p_3);
	printf("\n%x",&p_3);
	printf("\n%x",p_4);*/
	printf("\n%x",&p_1);
	printf("\n%x",*p_2);
	printf("\n%x",&j);
	printf("\n%x",&p_2);
	printf("\n%x",**p_3);
	printf("\n%x",**p_4);
	printf("\n%x",***p_4);
	printf("\n%x",*p_1);
	printf("\n%x",*&p_2);
	printf("\n%x",*p_4);
	
	
	
	
	
}
