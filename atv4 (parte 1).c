	#include <stdio.h>
	int n,n1,n2,n3,n4,soma,conta;
	int sequenciainver,sequencia,verificador;
	int result,numcalc;
	int main(){
		
	do {
	printf("Digite um numero de 1000 a 9999: ");
	scanf("%d",&n);
	}while(n<1000 || n>9999);
	conta = n/10;
	verificador = n%10;
	sequencia=conta;
	sequenciainver=0;
		
	while(sequencia>0){
	sequenciainver=sequenciainver*10+sequencia%10;
	sequencia=sequencia/10;	
	}
	soma=conta+sequenciainver;		
	n1=(soma/100)%10;
	n2=(soma/10) % 10;
	n3=soma%10;
			
	result=n1*1+n2*2+n3*3 ;	
			 
	numcalc =result%10;
	
	printf("\nconta:%d",conta);
	printf("\nverificador informado:%d",verificador);
	printf("\nverificador calculado:%d",numcalc);
	
	if(verificador==numcalc){
	printf("\nnumero de conta correto\n");
	}		
	else{
	printf("\nnumero de conta incorreto");
	}
	return 0;
	}
