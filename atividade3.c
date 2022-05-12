#include<stdio.h>
#include<math.h>
int main(){
	
	int hora1, hora2, minuto1, minuto2, diferenca;
	
	printf("Este programa calcula a diferenca entre dois horarios, porem em segundos.\n\n");
	
	printf("  Digite um horario(hora minuto): ");
	scanf("%d%d", &hora1, &minuto1);
	printf("  Digite outro horario no mesmo formato: ");
	scanf("%d%d", &hora2, &minuto2);
	
	if((hora1 < 0 || hora1 > 23 || minuto1 < 0 || minuto1 > 59) || (hora2 < 0 || hora2 > 23 || minuto2 < 0 || minuto2 > 59)) {
		printf("\n  Algum valor digitado eh invalido , por favor digite uma hora de 0 a 23");
		printf("\n  e os minutos de 0 a 59");
	}
	else {
		hora1 = hora1 * 3600;
		hora2 = hora2 * 3600;
		minuto1 = minuto1 * 60;
		minuto2 = minuto2 * 60;
		
		diferenca = abs((hora1 + minuto1) - (hora2 + minuto2));
		
		printf("\n\n  A diferenca em segundos entre os horarios mencionados eh: %d segundos", diferenca);
	}
	
	return 0;
}
