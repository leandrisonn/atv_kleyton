#include <stdio.h>
float valor,tax,newvalor;
int ano; 
int main (){
	printf("qual o valor total:");
	scanf("%f",&valor);
	printf("quantos anos  de depreciacao:");
	scanf("%d",&ano);	
	
	for(int i=0;i<ano;i++){
		printf("=================================\n");
		tax=valor*0.015;
		newvalor=valor-tax;
		printf("valor:%.2f taxa:%.2f new valor:%.2f\n",valor,tax, newvalor);
		valor=newvalor;
	}
	
	
	return 0;
}
