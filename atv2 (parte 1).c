#include <stdio.h>
int i,andares[3],temp[3],j ,melhorandar;
int main(){
	for(i=0;i<3;i++){
	printf("quantos funcionarios no andar %d:",i+1);
	scanf("%d",&andares[i]);
	}
	
	printf("andar 1:%d\n",andares[0]);
	printf("andar 2:%d\n",andares[1]);
	printf("andar 3:%d\n",andares[2]);

	temp[0]=(andares[1]*2+andares[2]*4);
	temp[1]=(andares[0]*2+andares[2]*2); 
	temp[2]=(andares[0]*4+andares[1]*2);
	
	int menor = temp[0];
	melhorandar=1;
	for (j=1;j<3;j++){
	if(temp[j]<menor){
	menor=temp[j];
	melhorandar=j+1;
	}
	
	}
	printf("melhor andar: %d\n",melhorandar);
	printf("tempo gasto:%d",menor);
	return 0;
}
