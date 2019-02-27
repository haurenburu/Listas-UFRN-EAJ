#include <stdio.h>

void listQuestao8() {
	float grauC, grauF;
	printf("Digite a temperatura em graus celsious: ");
	scanf("%f", &grauC);
	grauF = grauC * (9.0/5.0) + 32.0;
	printf("Celsius: %.2f \nFahrenheit: %.2f", grauC, grauF);
}

int main() {
	listQuestao8();
	return 0;
}
