#include <stdio.h>
#include <math.h>

void listQuestao9() {
	const float pi = 3.141592;
	float area, raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
	area = pi * pow(raio, 2);
	printf("O valor da area e: %.2f", area);
}

int main() {
	listQuestao9();
	return 0;
}
