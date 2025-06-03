#include <stdio.h>
int sitiosdiferentes,somarestantes;
int main(){
int n;
scanf("%d",&n);
int estrela[n];

for(int i=0;i<n;i++){
scanf("%d",&estrela[i]);
}
int i=0;
int sitiosdiferentes = 1;

while(1){
estrela[i]--;

    if((estrela[i]+1)%2==0) i=i-1;
    else{
        i=i+1;
    }

    if(i<n)sitiosdiferentes++;
    
    if(i<0 ||i>=n) break;


}

int somarestantes = 0;
    for(int k=0;k<n;k++){
        somarestantes+=estrela[k];

    }

printf("%d\n", sitiosdiferentes);
printf("%d", somarestantes);
return 0;
}