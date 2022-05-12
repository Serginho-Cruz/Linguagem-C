#include<stdio.h>
#define N 10

int main() {
	
	int numero, i = 0, valores[N], maior;
	
	while(i < N) {
		
		printf("\n  Digite um Valor: ");
		scanf("%d", &numero);
		
		if(numero > 0) {			
			valores[i] = numero;
			i++;
		}
	}
	
	printf("\n Todos os valores positivos: [");
	for(i = 0; i < N; i++) {
		
		if(i == N - 1) {
			printf(" %d]", valores[i]);
		}
		
		else {
			printf("%d, ", valores[i]);
		}
	}
	
	maior = valores[0];
	
	for(i = 1; i < N; i++) {
		
		if(valores[i] > maior) {
			
			maior = valores[i];
		}
	}
	
	printf("\n\n Dentre todos esses valores positivos, o maior foi: %d" , maior);
	
	return 0;
}
