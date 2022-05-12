#include<stdio.h>
#include<string.h>
#define N 20
int main() {
	
	int i, barra_zero = 0;
	char string[N], str_inversa[N], verificador = 'T';
	
	printf("Digite uma palavra: ");
	gets(string);
	
	for(i = 0; string[i] != '\0'; i++) {
		
		barra_zero++;
	}
	
	for(i = 0; string[i] != '\0'; i++) {
		
		str_inversa[i] = string[barra_zero - 1-i];
	}
	
	
	
	for(i = 0; i < barra_zero - 1; i++) {
		
		if(string[i] != str_inversa[i]) {
			
			verificador = 'F';
			break;
		}

	}
	if(verificador == 'F') {
		
		printf("\nNao eh palindroma.");
	}
	
	else {
		printf("\neh palindroma.");
	}
	
	return 0;
}
