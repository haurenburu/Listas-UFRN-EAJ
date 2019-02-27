#include <stdio.h>

void listQuestao2() {
	float numeroDigitado, quintaParte;
	printf("Digite um numero: ");
	scanf("%f", &numeroDigitado);
	quintaParte = numeroDigitado / 5;
	system("cls || clean");
	printf("Numero digitado: %.2f \nQuinta parte: %.2f", numeroDigitado, quintaParte);
}

int main() {
	listQuestao2();
	return 0;
}
