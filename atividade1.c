#include<stdio.h>
int main(){
	float temperatura, temp_convertida;
	int conversao;
	
	printf("*****Escolha a Conversao a ser feita*****\n\n");
	printf("       (1) Kelvin para Celsius\n");
	printf("       (2) Kelvin para Fahrenheit\n");
	printf("       (3) Celsius para Kelvin\n");
	printf("       (4) Celsius para Fahrenheit\n");
	printf("       (5) Fahrenheit para Celsius\n");
	printf("       (6) Fahrenheit para Kelvin\n\n");
	printf("  Escolha a conversao desejada: ");
	scanf("%d", &conversao);
	
	if(conversao < 1 || conversao > 6) {
		printf("\n  Valor invalido, por favor digite valor de 1 a 6");
	}
	else {
		printf("  Escreva qual a temperatura a ser convertida: ");
		scanf("%f", &temperatura);
		
		if((conversao == 1 || conversao == 2) && temperatura < 0) {
			printf("  Temperatura invalida para Kelvin, esse valor eh considerado abaixo do zero absoluto.");
		}
		else {
			
			if(conversao == 1) {
			temp_convertida = (temperatura - 273.15);
			printf("\n  A temperatura em Celsius eh: %.2f", temp_convertida);
		}
		
			else if(conversao == 2){
				temp_convertida = (temperatura - 273.15) * 9/5 + 32;
				printf("\n  A temperatura em Fahrenheit eh: %.2f", temp_convertida);
			}
			
			else if(conversao == 3){
				
				temp_convertida = (temperatura + 273.15);
				printf("\n  A temperatura em Kelvin eh: %.2f", temp_convertida);
				
			}
			
			else if(conversao == 4) {
				
				temp_convertida = ((temperatura * 9/5) + 32 );
				printf("\n  A temperatura em Fahrenheit eh: %.2f", temp_convertida);
				
			}
			
			else if(conversao == 5) {
				
				temp_convertida = (temperatura - 32) * 5/9;
				printf("\n  A temperatura em Celsius eh: %.2f", temp_convertida);
				
			}
			
			else if(conversao == 6) {
				
				temp_convertida = (temperatura - 32) * 5/9 + 273.15;
				printf("\n  A temperatura em Kelvin eh: %.2f", temp_convertida);
				
			}
		}
		
		
		
	}
}
