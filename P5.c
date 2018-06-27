//Nome: Guilherme Felipe da Silva
//Matrícula: 11811EEL039

#include<stdio.h>
int main(){
    char str[256];
	int o,j;
	printf("1. Codificar\n2. Decodificar:\n");
	scanf("%d",&o);getchar();
	if(o==1){
		int *pc;

		printf("O que quer codificar: ");
		fgets(str,256,stdin);
		printf("A palavra codificada e: ");
		for(j=0; str[j]!='\0'; j+=4){
			pc = (int *) &str[j];
			if(str[j+4]!='\0')
				printf("%d, ", *pc);
			else
				printf("%d", *pc);
		}

	}
	if(o==2){
		char vir;
		int vet[64];
		printf("O que quer decodificar: ");
		for(j=0;j<64;j++){
			scanf("%d%c",&vet[j],&vir);
			if(vir!=',')
                break;

		}
        printf("%s",vet);
	}
}
