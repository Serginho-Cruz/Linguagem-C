#include<stdio.h>
#include<math.h>
int main(){
	float base, altura , resposta;
	int escolha;
	
	printf("****Escolha o tipo de calculo desejado****\n\n");
	printf("        (1) Calculo do Perimetro\n");
	printf("        (2) Calculo da Area\n");
	printf("        (3) Calculo da Diagonal\n\n");
	printf(" De qual conversao gostaria? ");
	scanf("%d", &escolha);
	
	if(escolha < 1 || escolha > 3) {
		printf("\nEscolha invalida, por favor escolha um numero de 1 a 3");
	}
	else {
		printf(" Digite a base e a altura do rertangulo: ");
		scanf("%f%f", &base, &altura);
		
		if(base <= 0 || altura <= 0) {
			printf("\n Medida invalida, por favor insira valores positivos");
		}
		else {
			switch(escolha) {
			case 1: resposta = 2 * (base + altura);
					printf("\n O Perimetro do retangulo eh: %.2f", resposta); break;
					
			case 2: resposta = base * altura;
					printf("\n A Area do retangulo eh: %.2f", resposta); break;
			
			case 3: resposta = sqrt(pow(base, 2) + pow(altura, 2));
			printf("\n A Diagonal do retangulo mede: %.2f", resposta);
		}
		}
		return 0;
	}
}
