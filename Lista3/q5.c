#include <stdio.h>

void listQuestao5() {
	int anoAtual, idade, dataNascimento;
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	printf("Digite quantos anos voce fara esse ano: ");
	scanf("%d", &idade);
	dataNascimento = anoAtual - idade;
	printf("Sua data de nascimento: %d", dataNascimento);
}

int main() {
	listQuestao5();
	return 0;
}
