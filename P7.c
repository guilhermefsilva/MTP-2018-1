//Nome:Guilherme Felipe da Silva
//Matricula:11811EEL039

#include <stdio.h>
 
int A(int , int );

int main() {
	
	int m,n;
	
	printf("Digite o valor de m: ");
	scanf("%d", &m);
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	printf("%d", A(m, n));
    
  }
  
int A(int m, int n) {
	
	if (m == 0)
		return n + 1;
		
	if ((n == 0)&&(m>0))
		return A(m - 1, 1);
		
	if ((n>0)&&(m>0))
		return A(m - 1, A(m, n - 1));
		
}
 
