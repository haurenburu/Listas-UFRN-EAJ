#include <stdio.h>

void listQuestao7() {
	float valorReal, valorDolar = 0.27 , valorConvertido;
	printf("Digite o valor em Reais: ");
	scanf("%f", &valorReal);
	valorConvertido = valorReal * valorDolar;
	printf("R$%.2f = $%.2f (aproximadamente)", valorReal, valorConvertido);
}

int main() {
	listQuestao7();
	
	return 0;
}
