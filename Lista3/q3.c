#include <stdio.h>

void listQuestao3() {
	int valor1, valor2, valor3, somaValores;
	printf("Digite o numero 1: ");
	scanf("%d", &valor1);
	printf("Digite o numero 2: ");
	scanf("%d", &valor2);
	printf("Digite o numero 3: ");
	scanf("%d", &valor3);
	somaValores = valor1 + valor2 + valor3;
	printf("Resultado: %d", somaValores);
}

int main() {
	listQuestao3();
	return 0;
}
