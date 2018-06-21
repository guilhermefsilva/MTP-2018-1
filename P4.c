//Nome:Guilherme Felipe da Silva
//Matricula: 11811EEL039
#include<stdio.h>
int main(){
	int i=0,j=0;
	char num[256];
	printf("Digite um conjunto com caracteres: ");
	scanf("%s",num);getchar();
	printf("Os numeros presente no conjunto de caracteres sao: ");
	while(num[i]!='\0'){
		if(num[i]>='0' && num[i]<='9'){
			num[i]=num[i]-48;
			printf("%d",num[i]);
			i++;
		}
		else{
			i++;
			j++;
		}
	}
	if(j==i)
	printf("0");
}
