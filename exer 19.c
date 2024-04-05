#include <stdio.h>
#include <stdlib.h>


void cadastro(int quant,int prod[quant],int prodq[quant],float prodv[quant]);
void controle(int quant,int prod[quant],int prodq[quant]);
float venda(int quant,int prod[quant],int prodq[quant],float prodv[quant]);
void rendamensal(float renda);

int main(){
	
	int opcao,quant,i;
	printf("Digite quantos produtos deseja cadastra:");
	scanf("%d",&quant);
	
    int prod[quant];
    int prodq[quant];
    float prodv[quant];
    float renda = 0;
    
	for(;;){
	printf("\nDigite a opcao desejada:\n");
	printf("\n1- Cadastrar produtos.");
	printf("\n2- Controlar o estoque.");
	printf("\n3- Venda.");
	printf("\n4- Renda.");
	printf("\n0- Sair.\n");
	scanf("%d",&opcao);
	if(opcao==1){
		cadastro(quant,prod,prodq,prodv);
	
	}
	  if(opcao==2){
		controle(quant,prod,prodq);

      }
      if(opcao ==3){
      	renda = renda + venda( quant,prod,prodq, prodv);
	  }
	  if(opcao == 4){
	  	rendamensal(renda);
	  }
	  if(opcao == 0){
		return 0;
	  }
    }
	
	
	
	
	return 0;
}

void cadastro(int quant,int prod[quant],int prodq[quant],float prodv[quant]){
	
    int i,j;
    for(i=0;i < quant;i++){
    	for(j=0;j<3;j++){
    		if(j==0){
    			printf("\nInforme o codigo do produto:");
    			scanf("%d",&prod[i]);
			}
			if(j==1){
    			printf("\nInforme a quantidade de produtos: ");
    			scanf("%d",&prodq[i]);
			}
			if(j==1){
    			printf("\nInforme o valor do produto: ");
    			scanf("%f",&prodv[i]);
			}
		}
	}
}

void controle(int quant,int prod[quant],int prodq[quant]){
	int i,j,opcao;
	float codigo;
	int nquant = 0,valor  = 0;
	printf("\nDigite o codigo do produto que deseja alterar a quantidade estoque:");
	scanf("%f",&codigo);
	for(i=0;i<quant;i++){
		if(prod[i] == codigo){
			printf("\nO estoque atual é: %d",prodq[i]);
			printf("\nSe voce quer adicionar mais produtos ao estoque digite 1, se voce quer remover digite 2.\n");
			scanf("%d",&opcao);
			valor = prodq[i] ;
			if(opcao == 1){
				printf("\nDigite a quantidade que voce deseja adicionar:");
				scanf("%d",&nquant);
			    valor = valor + nquant;
			}
			if(opcao == 2){
				printf("\nDigite a quantidade que voce deseja remover:");
				scanf("%d",&nquant);
			    valor = valor - nquant;
			}
			prodq[i] = valor;
		}
	}
}

float venda(int quant,int prod[quant],int prodq[quant],float prodv[quant]){
	int i;
	int codigo,opcao;
	float valor;
	int quantidade;
	printf("\nDigite o codigo do produto:");
	scanf("%d",&codigo);
	 for(i = 0;i<quant;i++){
	   if(prod[i] == codigo){
	   	if(prodq[i] == 0){
	   		printf("\nFora de estoque.\n");
		   }else{
	   	    printf("\nValor:%.2f",prodv[i]);
	   	    printf("\nInforme quantas unidades serao vendidas:");
	   	    scanf("%d",&quantidade);
	   	      if(quantidade <= prodq[i] ){
	   	      	 printf("\nO valor sera:%.2f", valor = quantidade * prodv[i]);
	   	      	 printf("\nDeseja finalizar a compra?Digite 1 para sim e 0 para nao.");
	   	      	 scanf("%d",&opcao);
	   	      	  if(opcao ==1){
	   	      	  	    prodq[i] = prodq[i] - quantidade;
	   	      	  	    printf("\nPedido finalizado com sucesso.\n");
					   }else{
					   	 break;
					   }  
			  }else{
			  	printf("\nEstoque insuficiente.\n");
			  }
	        }
	   }		
	 }
	 return valor;
}
void rendamensal(float renda){
	printf("A renda mensal foi:%.2f",renda);
}
