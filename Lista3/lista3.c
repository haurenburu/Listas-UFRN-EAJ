#include <stdio.h>
#include <math.h>

void menu() {
	int questao;
	printf("\n--------------------------------\nDigite o numero da questao: ");
	scanf("%d", &questao);
	system("cls || clean");
	switch(questao) {
		case 1:
			listQuestao1();
		break;
		case 2:
			listQuestao2();
		break;
		case 3:
			listQuestao3();
		break;
		case 4:
			listQuestao4();
		break;
		case 5:
			listQuestao5();
		break;
		case 6:
			listQuestao6();
		break;
		case 7:
			listQuestao7();
		break;
		case 8:
			listQuestao8();
		break;
		case 11:
			listQuestao11();
		break;
	}
}

void listQuestao1() {
	int numeroDigitado, numeroAntecessor, numeroSucessor;
	printf("Digite um numero: ");
	scanf("%d", &numeroDigitado);
	numeroAntecessor = numeroDigitado - 1;
	numeroSucessor = numeroDigitado + 1;
	system("cls || clean");
	printf("Numero Antecessor: %d \nNumero digitado: %d \nNumero Sucessor: %d", numeroAntecessor,numeroDigitado, numeroSucessor);
	menu();
}

void listQuestao2() {
	float numeroDigitado, quintaParte;
	printf("Digite um numero: ");
	scanf("%f", &numeroDigitado);
	quintaParte = numeroDigitado / 5;
	system("cls || clean");
	printf("Numero digitado: %.2f \nQuinta parte: %.2f", numeroDigitado, quintaParte);
	menu();
}

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
	menu();
}

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
	menu();
}

void listQuestao5() {
	int anoAtual, idade, dataNascimento;
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	printf("Digite quantos anos voce fara esse ano: ");
	scanf("%d", &idade);
	dataNascimento = anoAtual - idade;
	printf("Sua data de nascimento: %d", dataNascimento);
	menu();
}

void listQuestao6() {
	float velocidadeEmKm, velocidadeEmMs;
	printf("Digite a velocidade em Km/h: ");
	scanf("%f", &velocidadeEmKm);
	velocidadeEmMs = velocidadeEmKm/3.6;
	printf("Velocidade em m/s: %.2f", velocidadeEmMs);	
	menu();
}

void listQuestao7() {
	float valorReal, valorDolar = 0.27 , valorConvertido;
	printf("Digite o valor em Reais: ");
	scanf("%f", &valorReal);
	valorConvertido = valorReal * valorDolar;
	printf("R$%.2f = $%.2f (aproximadamente)", valorReal, valorConvertido);
	menu();
}

void listQuestao8() {
	float grauC, grauF;
	printf("Digite a temperatura em graus celsious: ");
	scanf("%f", &grauC);
	grauF = grauC * (9.0/5.0) + 32.0;
	printf("Celsius: %.2f \nFahrenheit: %.2f", grauC, grauF);
	menu();
}

void listQuestao11() {
	const float pi = 3.141592;
	float area, raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
	area = pi * pow(raio, 2);
	printf("O valor da area e: %.2f", area);
	menu();
}

int main() {
	menu();
	return 0;
}
