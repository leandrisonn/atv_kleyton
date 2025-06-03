#include<stdio.h>
int quantidade,reais,centavos,itens,moeda1,nota2,nota5,nota10,nota20,nota50,nota100;
char opc;
float valor,total,media;
int main(){
do{	
	total = 0;
    itens = 0;
	do{
	printf("informe a quantidade do produto (0 para parar):");
	scanf("%d",&quantidade);	
	if (quantidade <= 0){
	break;
	}
	printf("informe o valor do produto:");
	scanf("%f",&valor);
	total+=valor*quantidade;
	itens=itens+quantidade;
	}while(quantidade>0);
	if(itens>0){
	media = total/itens;
	reais=(int)total;
	centavos=(int)(total-reais)*100;
	printf("====================================\n");
	printf("valor total:%d reais e %d centavos\n", reais ,centavos);
    printf("valor medio:%.2f \n", media);		
	printf("%d reais eh igual a: \n",reais);
	printf("====================================\n");		
	}
	else{
	printf("nenhum produto foi informado/n");
	}
	nota100=reais/100; 
	reais%=100;
	
    nota50=reais/50;  
	reais%=50;
	
    nota20=reais/20;  
	reais%=20;
	
    nota10=reais/10;  
	reais%=10;
	
    nota5=reais/5;   
	reais%=5;
	
    nota2=reais/2;   
	reais%=2;
	
    moeda1=reais;
    
	printf("%d notas de 100\n", nota100);
	printf("%d notas de 50\n", nota50);
	printf("%d notas de 20\n", nota20);
	printf("%d notas de 10\n", nota10);
	printf("%d notas de 5\n", nota5);
	printf("%d notas de 2\n", nota2);
	printf("%d moedas de 1\n", moeda1);
	printf("deseja fazer denovo 's' ou 'n':");
	scanf(" %c",&opc);
}while(opc=='s'|| opc=='S');

	
	return 0;
}
