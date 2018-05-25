//Nome: Guilherme Felipe da Silva
//Matricula: 11811EEL039
#include<stdio.h>

int soma(int*,int*);

int main(){
	
	float media,s;
	int vet[20];
	int i,j,n;
	int tam=sizeof(vet)/sizeof(int);
	int *pp=vet,*pu=vet+tam-1;
	
	printf("Quantidade de numeros a digitar [5 a 20]: ");
	scanf("%d",&n);
	
	for(j=0;j<20;j++)
		vet[j]=0;
	
	printf("Digite os numeros: ");
	for(i=0;i<n;i++){
		scanf("%d",&vet[i]);
	}getchar();
	
	s=soma(pp,pu);
	media=s/n;
	printf("A media: %.2f, a soma: %d",media,soma(pp,pu));
	
	return 0;	
}

int soma(int *pp, int *pu) {
	return (*pu) + ((pu == pp) ? 0 : soma(pp, pu-1));
}

