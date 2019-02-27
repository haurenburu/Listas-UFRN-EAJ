#include <stdio.h>

void listQuestao6() {
	float velocidadeEmKm, velocidadeEmMs;
	printf("Digite a velocidade em Km/h: ");
	scanf("%f", &velocidadeEmKm);
	velocidadeEmMs = velocidadeEmKm/3.6;
	printf("Velocidade em m/s: %.2f", velocidadeEmMs);	
}

int main() {
	listQuestao6();
	return 0;
}
