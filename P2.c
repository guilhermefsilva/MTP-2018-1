//Matrícula: 11811EEL039
//Nome: Guilherme Felipe da Silva
#include <stdio.h>
int main(){
	long int nd,r;
	int x,j=0,i=0,jb;
	char num[256];
	printf("Escolha uma opcao:\n1. Binario para Decimal\n2- Binario para Hexadecimal\n3- Hexadecimal para Decimal\n4. Hexadecimal para Binario\n5. Decimal para Binario\n6. Decimal para Hexadecimal\n7. Octal para Decimal\n8. Decimal para Octal\n");
	scanf("%d",&x);
		if(x==1){
		printf("Digite o numero binario: ");
		scanf("%s",&num);
		for(i; num[i]!='\0'; i++){
			j=j*2+(num[i]-'0');
		}
		printf("O numero decimal e: %d",j);

	}
		else if(x==2){
		printf("Digite o numero binario: ");
		scanf("%s",num);
		for(i; num[i]!='\0'; i++){
			j=j*2+(num[i]-'0');
		}
		printf("O numero hexadecimal e: %X",j);
	}
		else if(x==3){
		printf("Digite o numero hexadecimal: ");
		scanf("%x",&j);
		printf("O numero e decimal e: %d",j);
	}
		else if(x==4){
		printf("Digite o numero hexadecimal: ");
		scanf("%x",&j);
		for(jb = 0; j >= (1 << jb); jb++){
		}
		char conv[jb];
		for(i;i<jb;i++){
			if(j%2==0)
			conv[i]=0;
			else
			conv[i]=1;
			j=j/2;

	}
			printf("O numero binario e:");
			for(i=jb-1; i>=0; i--){
			printf("%d", conv[i]);
		}
	}
		else if(x==5){
		int nb[100],n=1,j;
		printf("Digite um numero decimal: ");
		scanf("%ld",&nd);
		r = nd;
		while(r!=0){
			nb[n++]= r % 2;
			r = r / 2;
		}
		printf("O numero binario e: ");
		for(j = n -1 ;j> 0;j--)
			printf("%d",nb[j]);
	}
		else if(x==6){
		printf("Digite o numero decimal: ");
		scanf("%d",&j);
		printf("O numero hexadecimal e: %X",j);
		
	}
		else if(x==7){
		printf("Digite o numero octal: ");
		scanf("%o",&j);
		printf("O numero decimal e: %d",j);
		
	}
		else if(x==8){
		int no[100],i=1,j;
	printf("Digite um numero decimal: ");
	scanf("%ld",&nd);
	r = nd;
	while(r!=0){
		no[i++]= r % 8;
		r = r / 8;
	}
	printf("O numero octal e: ");
	for(j = i -1 ;j> 0;j--)
		printf("%d",no[j]);
	}
}
