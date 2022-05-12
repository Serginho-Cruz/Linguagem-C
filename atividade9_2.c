#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

int main() {
	
	int matriz_A[N][N], matriz_B[N][N], matriz_C[N][N], i, j, n_digitos, copia;
	
	srand(time(NULL));
	
	printf("\n********** Matriz A ***********\n");
	
	for(i = 0; i < N; i++) {
		
		if(i == 0) {
			printf("________________________________________\n");
		}
		
		
		for(j = 0; j < N; j++) {
			
			matriz_A[i][j] = rand() % 101;
			copia = matriz_A[i][j];
			
			for(n_digitos = 0; copia != 0; n_digitos++) {
				
				copia = copia / 10;
			}
			
			switch(n_digitos) {
				
				case 0: printf("| %d ", matriz_A[i][j]);break;
				case 1: printf("| %d ", matriz_A[i][j]);break;
				case 2:  printf("| %d", matriz_A[i][j]);break;
				case 3:   printf("|%d", matriz_A[i][j]);break;
			}
			
			if(j == N-1) {
				printf("|");
			}
			
		}
		printf("\n|___|___|___|___|___|___|___|___|___|___|\n");
	}
	
	
	printf("\n\n********** Matriz B **********\n");
	for(i = 0; i < N; i++) {
		
		if(i == 0) {
			printf("________________________________________\n");
		}
		
		for(j = 0; j < N; j++) {
			
			matriz_B[i][j] = rand() % 101;
			
			copia = matriz_B[i][j];
			
			for(n_digitos = 0; copia != 0; n_digitos++) {
				
				copia = copia / 10;
			}
			
			switch(n_digitos) {
				
				case 0: printf("| %d ", matriz_B[i][j]);break;
				case 1: printf("| %d ", matriz_B[i][j]);break;
				case 2:  printf("| %d", matriz_B[i][j]);break;
				case 3:   printf("|%d", matriz_B[i][j]);break;
			}
			
			if(j == N-1) {
				printf("|");
			}
		}
		printf("\n|___|___|___|___|___|___|___|___|___|___|\n");
	}
	
	printf("\n\n************* Matriz C *************\n");
	for(i = 0; i < N; i++) {
		
		if(i == 0) {
			printf("________________________________________\n");
		}
		for(j = 0; j < N; j++) {
			
			matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
			copia = matriz_C[i][j];
			
			for(n_digitos = 0; copia != 0; n_digitos++) {
				
				copia = copia / 10;
			}
			
			switch(n_digitos) {
				
				case 0: printf("| %d ", matriz_C[i][j]);break;
				case 1: printf("| %d ", matriz_C[i][j]);break;
				case 2:  printf("| %d", matriz_C[i][j]);break;
				case 3:   printf("|%d", matriz_C[i][j]);break;
			}
			
			if(j == N-1) {
				printf("|");
			}
		}
		printf("\n|___|___|___|___|___|___|___|___|___|___|\n");
	}
	return 0;
}
