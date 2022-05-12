#include<stdio.h>
#include<stdlib.h>

int main() {

	srand(time(NULL));

	int sorteado, chute, extremo_dir, extremo_esq, tentativas;
	
	tentativas = 0;
	extremo_esq = 1;
	extremo_dir = 99;
	
	sorteado = (rand() % 99) + 1;
	
	printf(" Chute o numero que foi sorteado(Ele esta entre 1 e 99): ");
	scanf("%d", &chute);
	
	
	
	while(chute != sorteado) {
		
		while(chute <= 0 || chute >= 100) {
		
		printf("\n  O numero nao pode ser negativo, nulo, nem maior que 99, por favor nao insista\n");
		printf("  Chute o numero que foi sorteado: ");
		scanf("%d", &chute);
		
		}
		
		tentativas = tentativas + 1;
		
		if(chute == sorteado - 1) {
			extremo_esq = chute;
		}
		
		else if(chute == sorteado + 1) {
			
			extremo_dir = chute;
		}
		
		else if(chute > sorteado) {
			
			extremo_dir = chute - 1;
		}
		else if(chute < sorteado) {
			
			extremo_esq = chute + 1;
		}
		
		printf("\n  Voce errou!!, mas aqui vai uma dica, o numero secreto esta entre %d e %d.\n", extremo_esq, extremo_dir);
		
		printf("  Digite outro chute: ");
		scanf("%d", &chute);
	}
	if(tentativas == 0) {
		
		printf(" Ja pensou na possibilidade de jogar na loteria? Voce conseguiu acertar o numero secreto de primeira\n com %d tentativas", tentativas);
	}
	
	else {
	
	printf("  Parabens!!! Voce acertou o numero oculto, e precisou de %d tentativas.\n", tentativas);
	printf("  Chutes invalidos nao contados.");
	
	}
	return 0;
}


