#include<stdio.h>
int main() {
	int numero, impar, par, soma_pares, soma_impares;
	
	par = 0;
	impar = 0;
	soma_pares = 0;
	soma_impares = 0;

	printf(" Assim que quiser que o programa acabe, so digite um numero nulo ou negativo");
	printf("\n assim o teste final sera feito\n");

                       //  Versao com DO WHILE  //	
	do {
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero);
		
		if(numero%2 == 0) {
			
			par = par + 1;
			soma_pares = soma_pares + numero;
		}
		
		else {
			
			impar = impar + 1;
			soma_impares = soma_impares + numero;
		}
		
	} while(numero > 0);

                        // Versao com WHILE //

/*	numero = 1;
	
	printf(" Assim que quiser que o programa acabe, so digite um numero nulo ou negativo");
	printf("\n assim o teste final sera feito");

	while(numero > 0) {
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero);
		
		if(numero % 2 == 0) {
			
			par = par + 1;
			soma_pares = soma_pares + numero;
		}	
		else {
			impar = impar + 1;
			soma_impares = soma_impares + numero;
		}
		
	}	 */
	printf(" Voce digitou %d numeros pares e a soma deles eh %d", par , soma_pares);
	printf("\n E tambem digitou %d numeros impares, a soma desses eh %d", impar , soma_impares);
} 
