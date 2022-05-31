#include<stdio.h>
#include<stdlib.h>
#define S 6

int *numeros;

int verificaNumeros(int tamanho, int numero);
int* geraSenha();
void ponteiroFalho(int* ponteiro);
int main(){
	
	srand(time(NULL));
	int num, i, indice, senha[S], *megaSenha,  total;
	numeros = malloc(6 * sizeof(int));
	
	printf("ATENCAO!!! Os numeros informados aqui NAO PODEM se repetir\n");
	for(i = 0; i < 6; i++){
		
		printf("\n  Por favor, escolha um numero de 1 a 60 para sua Senha ");
		scanf("%d", &num);
		while(num < 1 || num > 60 || verificaNumeros(i, num) == 1) {
			
			printf("\n  O numero deve estar entre 1 e 60 e nao pode ser igual aos anteriores ");
			scanf("%d", &num);
		}
		numeros[i] = num;
		senha[i] = num;		
	}
	free(numeros);
	megaSenha = malloc(6 * sizeof(int));
	megaSenha = geraSenha();
		
	for(i = 0; i < 6; i++){
		
		for(indice = 0; indice < 6; indice++){
			
			if(senha[i] == megaSenha[indice]){		
				
				total++;
				break;
			}
		}
	}
	printf("\n  Total de Acertos: %d\n\n", total);
	
	switch(total) {
		
		case 4: printf("  Parabens!!! Fez a Quadra.");
				break;
				
		case 5: printf("  Parabens!!! Fez a Quinta.");
				break;
				
		case 6: printf("  Parabens!!! Voce Acaba de ficar Rico ganhando a Mega Sena!!");
				break;
				
		default: printf("  Infelizmente nao foi dessa vez, quem sabe na proxima");
				 break;
	}	
	free(numeros);
	free(megaSenha);		
	return 0;
}
int verificaNumeros(int tamanho, int numero){
	
	int i;
	for(i = 0; i < tamanho; i++){
		
		if(numeros[i] == numero){
			
			return 1;
		}
	}
	return 0;	
}

int* geraSenha(){
	
	int *senha, i, num;
	senha = malloc(6 * sizeof(int));
	ponteiroFalho(senha);
	numeros = malloc(6 * sizeof(int));
	ponteiroFalho(numeros);
	
	for(i = 0; i < 6; i++){
		num = (rand() % 59)+ 1;
		
		while(verificaNumeros(i, num) == 1){
			
			num = (rand() % 59) + 1;
		}
		numeros[i] = num;
		senha[i] = num;
	}
	return senha;
}

void ponteiroFalho(int* ponteiro){
	
	if(!ponteiro){
		
		printf("Problema no ponteiro");
		exit(1);
	}
}
