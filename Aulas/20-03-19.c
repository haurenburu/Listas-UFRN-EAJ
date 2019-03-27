#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pratica1() {
	float numero1, numero2;
	char operacao, menu = 1;
	
	do {
			
		printf("Entrada: ");
		scanf("%f %c %f", &numero1, &operacao, &numero2);
		
		
		switch(operacao) {
			case '+':
				printf("Saida: %.2f", numero1 + numero2);
			break;
			
			case '-':
				printf("Saida: %.2f", numero1 - numero2);
			break;
			
			case '*':
				printf("Saida: %.2f", numero1 * numero2);
			break;
			
			case '/': 
			
			if(numero2 != 0) {
				printf("Saida: %.2f", numero1 / numero2);
			}
			else {
				printf("numero igual a zero!");
			} 
			break;
		}
		printf("\nContinuar(1) | Sair(0): ");
		scanf("%d", &menu);
	} while (menu == 1);
	
	
}
void pratica2() {
	int numeroRandomizado, numeroDigitado, tentativa = 0;
	srand(time(NULL));
	numeroRandomizado = rand()%100+1;
	
	do {
		printf("\nTentativa: %d | Digite um numero entre 1 e 10: ", ++tentativa);
		scanf("%d", &numeroDigitado);
		
		if(numeroDigitado > 10 || numeroDigitado < 1) {
			printf("O numero deve estar entre 1 e 10!\n");
		}
		
		else if (numeroDigitado > numeroRandomizado) {
			printf("\n\t\tO numero e menor\n");
		}
		
		else if (numeroDigitado < numeroRandomizado) {
			printf("\n\t\tO numero e maior\n");
		}
		
		else if (numeroDigitado == numeroRandomizado && tentativa == 1) {
			printf("\nUau de prima! o numero era: %d",numeroRandomizado);
		}
		
		else if (numeroDigitado == numeroRandomizado && tentativa > 3) {
			printf("\nFinalmente... O numero era: %d",numeroRandomizado);
		}
		
		else if (numeroDigitado == numeroRandomizado) {
			printf("\nBoa! O numero era: %d", numeroRandomizado);
		}
		
		
	} while(numeroDigitado != numeroRandomizado);
	
}

int main() {
	pratica2();
	return 0;
}
