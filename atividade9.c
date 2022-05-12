#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

int main() {
	
	int matriz[N][N], i, j, maior, menor;
	
	srand(time(NULL));
	
	for(i = 0; i < N; i++) {
		
		for(j = 0; j < N; j++) {
			
			matriz[i][j] = rand() % 101;
		}
	}
	
/*	for(i = 0; i < N; i++) {
		
		printf("\n");
		for(j = 0; j < N; j++) {
			
			printf("%d ", matriz[i][j]);
		}
	}
	
	
	printf("\n\n"); */
	for(i = 0; i < N; i++) {
		
		maior = matriz[i][0];
		menor = matriz[i][0];
		
		for(j = 0; j < N; j++) {
			
			if(matriz[i][j] > maior) {
				
				maior = matriz[i][j];
			}
			
			else if(matriz[i][j] < menor) {
				
				menor = matriz[i][j];
			}
		}
		printf("  Maior valor da linha %d eh: [%d]", i, maior);
		printf("\n  E o menor valor eh: [%d]\n\n", menor);
	}
	
	return 0;
}
