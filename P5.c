//Nome: Guilherme Felipe da Silva
//Matrícula: 11811EEL039
#include<stdio.h>
int main(){
	int o;
	printf("1. Codificar\n2. Decodificar:\n");
	scanf("%d",&o);getchar();
	if(o==1){
		char str[256];
		int *pc,i=0;
		
		printf("O que quer codificar: ");
		gets(str);
		fflush(stdin);
		
		printf("A palavra codificada e: ");
		for(pc=(int*)str; pc < ((int *) str) + sizeof(str); pc++){
			if(*pc==0)
				break;
			printf("%d, ",*pc);
		}
		
	}
	if(o==2){
		char *pd;
		int vet[10];
		int j,n=0;
		printf("O que quer decodificar: ");
		for(j=0;j<sizeof(char);j++){
			scanf("%d, ",&vet[j]);
			if(vet[j]==10)
			break;
			getchar();
		}
		for(n;n<sizeof(char);n++)
		pd=((char*)&vet[n]);
		for(;pd<(char*)&vet+sizeof(vet);pd++){
			if(*pd==0)
			break;
			printf("%c",*pd);
		}
		printf("%d",vet[1]);
	}
}
