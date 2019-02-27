#include <stdio.h>

void listQuestao4() {
	float valor1, valor2, valor3, valor4, mediaAritmetica;
	printf("Digite o numero 1: ");
	scanf("%f", &valor1);
	printf("Digite o numero 2: ");
	scanf("%f", &valor2);
	printf("Digite o numero 3: ");
	scanf("%f", &valor3);
	printf("Digite o numero 4: ");
	scanf("%f", &valor4);
	mediaAritmetica = (valor1+valor2+valor3+valor4)/4;
	printf("Media: %.2f", mediaAritmetica);
}

int main() {
	listQuestao4();
	return 0;
}
