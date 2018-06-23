//Nome: Guilherme Felipe da Silva
//Matricula: 11811EEL039
#include<stdio.h>

void bin(unsigned int num)
{
	int i=0, j=31;

	char nb[33];

	for(i=0; i<32; i++){
		if(num%2==0)
			nb[j]=0;
		else
			nb[j]=1;
		num=num/2;
		j--;
	}

	for(i=0; i<32; i++)
		printf("%i", nb[i]);
}

int main(){

	int op, arg1, arg2;
	char bin1[32];

	printf("Calculadora Bitwise\n1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift\nOpcao Escolhida: ");

	scanf("%d", &op); getchar();
	scanf("%d", &arg1); getchar();

	if(op!=1){
		scanf("%d", &arg2); getchar();
	}

	switch(op)
	{
		case 1:
			printf("NOT %d (", arg1);
			bin(arg1);
			int num_not = ~arg1;
			printf("): %d (", num_not);
			bin(num_not);
			printf(")");
			break;
		case 2:
			printf("%d (", arg1);
			bin(arg1);
			printf(") AND %d (", arg2);
			bin(arg2);
			int num_and = arg1&arg2;
			printf("): %d (", num_and);
			bin(num_and);
			printf(")");
			break;
		case 3:
			printf("%d (", arg1);
			bin(arg1);
			printf(") OR %d (", arg2);
			bin(arg2);
			int num_or = arg1|arg2;
			printf("): %d (", num_or);
			bin(num_or);
			printf(")");
			break;
		case 4:
			printf("%d (", arg1);
			bin(arg1);
			printf(") XOR %d (", arg2);
			bin(arg2);
			int num_xor = arg1^arg2;
			printf("): %d (", num_xor);
			bin(num_xor);
			printf(")");
			break;
		case 5:
			printf("%d (", arg1);
			bin(arg1);
			printf(") RIGHT SHIFT %d (", arg2);
			bin(arg2);
			int num_right = arg1>>arg2;
			printf("): %d (", num_right);
			bin(num_right);
			printf(")");
			break;
		case 6:
			printf("%d (", arg1);
			bin(arg1);
			printf(") LEFT SHIFT %d (", arg2);
			bin(arg2);
			int num_left = arg1<<arg2;
			printf("): %d (", num_left);
			bin(num_left);
			printf(")");
			break;
		default:
			printf("Erro\n");
	}

	return 0;
}
