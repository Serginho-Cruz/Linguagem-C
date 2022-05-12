#include<stdio.h>
int main() {

	
	int  numero, dividendo, divisores , soma;
	
	
	soma = 0;
	divisores = 0;
	dividendo = 1;
					
					//Versao com DO WHILE
	/*
	do{
		
		printf("Digite um numero positivo: ");
		scanf("%d", &numero);
		
	}while(numero <= 0);
	
	do{
		if(numero%dividendo == 0) {
			
			soma = soma + dividendo;
			divisores = divisores + 1;
		}
		dividendo = dividendo + 1;
	}while(numero >= dividendo);*/
	
						//Versao com While
	
	numero = 0;	
	
	while(numero <= 0) {
		
		printf("Digite um numero positivo: ");
		scanf("%d", &numero);
	}
	
	while( dividendo <= numero) {
		
		
		if(numero%dividendo == 0) {
			
			divisores = divisores + 1;
			soma = soma + dividendo;
			
			printf(" %d ", dividendo);
			
		}
		
		dividendo = dividendo + 1;
		
	} 
	
	printf("\n Esses sao os divisores de %d, ao todo sao %d divisores e a soma de todos eles eh: %d", numero , divisores , soma);
	
	return 0;
}
