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
		case 9:
			listQuestao9();
		break;
		case 10:
			listQuestao10();
		break;
		case 11:
			listQuestao11();
		break;
		case 12:
			listQuestao12();
		break;
		case 13:
			listQuestao13();
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

void listQuestao9() {
	float angulo, radianos;
	const float pi = 3.141592;
	printf("Digite o valor do angulo(em raios): ");
	scanf("%f", &angulo);
	radianos = angulo * (pi/180);
	printf("Radianos: %.4f", radianos);
	menu();
}

void listQuestao10() {
	float dinheiroTotal = 780000.00,dinheiro, vencedor1, vencedor2, vencedor3;
	
	dinheiro = dinheiroTotal;
	
	vencedor1 = dinheiroTotal * 0.46;
	dinheiro -= vencedor1;
	
	vencedor2 = dinheiroTotal * 0.32;
	dinheiro -= vencedor2;
	
	vencedor3 = dinheiro;
	
	printf("Vencedor 1: %.2f\nVencedor 2: %.2f\nVencedor 3: %.2f", vencedor1, vencedor2, vencedor3);
	
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

void listQuestao12() {
	float alturaCilindro, raioCilindro, volumeCilindro;
	const float pi = 3.141592;
	printf("Digite a altura do cilindro: ");
	scanf("%f", &alturaCilindro);
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raioCilindro);
	
	volumeCilindro = pi * pow(raioCilindro, 2) * alturaCilindro;
	
	printf("Volume do cilindro: %.2f", volumeCilindro);
}

void listQuestao13() {
	float catetoA,catetoB,hipotenusa, raiz;
	printf("Digite o valor do cateto A: ");
	scanf("%f", &catetoA);
	
	printf("Digite o valor do cateto B: ");
	scanf("%f", &catetoB);

	hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));
	
	printf("Hipotenusa: %.2f", hipotenusa);
}

int main() {
	menu();
	return 0;
}
