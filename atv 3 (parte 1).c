#include <stdio.h>
 int k=4, temp,i,j, comp[7];
int main(){
	
	for(i=0;i<7;i++){
	printf("qual a nota do competidor %d:",i+1);
	scanf("%d",&comp[i]);
	}
	
	for(i=0;i<7;i++){
	for (j = 0; j < 6 - i; j++) {
	if(comp[j]<comp[j+1]){
	temp=comp[j];
	comp[j]=comp[j+1];
	comp[j+1]=temp;
	}
	}
	}
	
	int notacorte=comp[k-1];
	int classificados=0;
	for(j=0;j<7;j++){
	if(comp[j]>=notacorte){
	classificados++;
	}
	else{
	break;
	}
	}
	printf("classificados:%d",classificados);
	
	return 0;
}
