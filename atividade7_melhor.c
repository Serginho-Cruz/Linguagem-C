#include<stdio.h>
#include<stdlib.h>
int main() {
	
	int decomposicao[10], numero, copia_numero, indice = 0;
	
	printf("Digite o numero para decomposicao: ");
	scanf("%d", &numero);
	
	numero = abs(numero);
	copia_numero = numero;
	
	while(copia_numero >= 1) {
				
		decomposicao[indice] = copia_numero%10;
		copia_numero = copia_numero / 10;
		indice++;
	}
	
	printf("\n Decomposicao: [");
	
	for(indice = indice - 1; indice >= 0 ; indice = indice - 1) {
		
		if(indice == 0) {
			
			printf(" %d ", decomposicao[indice]);
		}
		else {
			
			printf(" %d,", decomposicao[indice]);
		}
	}
	
	if(numero == 0) {
		
		printf(" 0 ");
	}
	printf("]");
}
