#include<stdio.h>
#include<stdlib.h>
int main() {
	
	int numero, verificacao, algarismo, tamanho = 1;
	
	printf("\n AVISO!!!! Qualquer zero a esquerda sera DESCARTADO\n");
	printf(" EXEMPLO--Numero: 0080\n");
	printf(" Decomposicao: [ 8, 0 ]\n\n");
	
	printf(" Digite um numero para a Decomposicao: ");
	scanf("%d", &numero);
		
	numero = abs(numero);
	verificacao = numero;
		
	while(verificacao > 9) {
			
		verificacao = verificacao/10;
		tamanho = tamanho * 10;
	}
		
	printf("\n Decomposicao do numero [ ");
		
	while(tamanho >= 1) {
			
		algarismo = numero/tamanho;
			
		numero = numero%tamanho;
				
		tamanho = tamanho/10;
			
		if(tamanho == 0) {
				
			printf("%d ", algarismo);
		}
			
		else {
			
			printf("%d, ", algarismo);	
		}
	}
	printf("]\n Tenha um bom dia!!");
	
	return 0;
}
