#include <stdio.h>

void listQuestao1() {
	int numeroDigitado, numeroAntecessor, numeroSucessor;
	printf("Digite um numero: ");
	scanf("%d", &numeroDigitado);
	numeroAntecessor = numeroDigitado - 1;
	numeroSucessor = numeroDigitado + 1;
	system("cls || clean");
	printf("Numero Antecessor: %d \nNumero digitado: %d \nNumero Sucessor: %d", numeroAntecessor,numeroDigitado, numeroSucessor);
}

int main() {
	listQuestao1();
	return 0;
}
