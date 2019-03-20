#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aula() {
	float numero1, numero2;
	char operacao;
	
	printf("asdas:");
	scanf("%f %c %f", &numero1, &operacao, &numero2);
	
	
	switch(operacao) {
		case '+':
			printf("%.2f", numero1 + numero2);
		break;
		
		case '-':
			printf("%.2f", numero1 - numero2);
		break;
		
		case '*':
			printf("%.2f", numero1 * numero2);
		break;
		
		case '/': 
		
		if(numero2 != 0) {
			printf("%.2f", numero1 / numero2);
		}
		else {
			printf("numero igual a zero!");
		} 
		break;
	}
	
}

void teste() {
	unsigned int valor1, valor2, valor3, menu;
	
	printf("(1 = Geometrica : 2 = Ponderada : 3 = Aritimetica) \n Escola o tipo de media: ");
	scanf("%d", &menu);
	printf("Digite o valor 1: ");
	scanf("%d", &valor1);
	printf("Digite o valor 2: ");
	scanf("%d", &valor2);
	printf("Digite o valor 3: ");
	scanf("%d", &valor3);
	
	switch (menu) {
		case 1: printf("Media geometrica: %d", valor1 * valor2 * valor3);
		break;

		case 2: printf("Media ponderada: %d", (valor1 + 2 * valor2 + 3 * valor3) / 6);
		break;
		
		case 3: printf("Media aritimetica: %d", (valor1 + valor2 + valor3) / 3);
		break;
	}
	
	
	if( valor1 < 0 || valor2 < 0 || valor3 <0) {
		printf("Inteiros prositivos plz!");
	}
	
}


void questao1() {
	int numeroDigitado;
	
	printf("Digite o numero: ");
	scanf("%d", &numeroDigitado);
	
	if (numeroDigitado >= 100 && numeroDigitado <= 200) {
		printf("O numero %d esta entre 100 e 200 :D", numeroDigitado);
	} else {
		printf("O numero %d nao esta entre 100 e 200 :<", numeroDigitado);
	}
	
}
void questao2() {
	int anoDeNascimento, idadePessoa, anoAtual = 2019;
	printf("Digite o ano de nascimento: ");
	scanf("%d", &anoDeNascimento);
	
	idadePessoa = anoAtual - anoDeNascimento;
	
	if (idadePessoa >= 0 && idadePessoa <= 18) {
		printf("Voce tem %d e eh uma pessoa jovem!", idadePessoa);
	}
	else if (idadePessoa >= 19 && idadePessoa <= 59) {
		printf("voce tem %d e eh uma pessoa adulta!", idadePessoa);
	}
	else if (idadePessoa >= 60) {
		printf("Voce tem %d e eh uma pessoa idosa!", idadePessoa);
	}
	else {
		printf("Ano digitado incorreto");	
	}
}
void questao3() {
	int numeroDigitado1, numeroDigitado2, numeroDigitado3;
	
	printf("Digite o 1 numero: ");
	scanf("%d", &numeroDigitado1);
	printf("Digite o 2 numero: ");
	scanf("%d", &numeroDigitado2);
	printf("Digite o 3 numero: ");
	scanf("%d", &numeroDigitado3);
	
	
	if (numeroDigitado1 <= numeroDigitado2 && numeroDigitado2 <= numeroDigitado3){
		printf("%d %d %d", numeroDigitado1, numeroDigitado2, numeroDigitado3);
	}
	else if (numeroDigitado1 <= numeroDigitado3 && numeroDigitado3 <= numeroDigitado2){
		printf("%d %d %d", numeroDigitado1, numeroDigitado3, numeroDigitado2);
	}
	else if (numeroDigitado2 <= numeroDigitado3 && numeroDigitado3 <= numeroDigitado1){
		printf("%d %d %d", numeroDigitado2, numeroDigitado3, numeroDigitado1);
	}
	else if (numeroDigitado2 <= numeroDigitado1 && numeroDigitado1 <= numeroDigitado3){
		printf("%d %d %d", numeroDigitado2, numeroDigitado1, numeroDigitado3);
	}
	else if (numeroDigitado3 <= numeroDigitado2 && numeroDigitado2 <= numeroDigitado1){
		printf("%d %d %d", numeroDigitado3, numeroDigitado2, numeroDigitado1);
	}
	else if (numeroDigitado3 <= numeroDigitado1 && numeroDigitado1 <= numeroDigitado2){
		printf("%d %d %d", numeroDigitado3, numeroDigitado1, numeroDigitado2);
	}
	/*
	int numerosDigitados[3], i;
	int ordenar( const void * a, const void * b) {
		return ( *(int*)a - *(int*)b);
	}
	
	for ( i = 0; i < 3; i++) {
		printf("Digite o %d numero: ", i);
		scanf("%d", &numerosDigitados[i]);
	}
	
	qsort(numerosDigitados, 3, sizeof(int), ordenar);
	
	for( i = 0; i < 3; i++ ){
		printf("%d", numerosDigitados[i]);
	}*/
	
}
void questao4() {
	
}
void questao5() {
	float alturaPessoa, pesoIdealPessoa;
	char sexoPessoa;
	
	printf("Digite o sexo (F:M): ");
	scanf("%c", &sexoPessoa);
	printf("Digite a altura: ");
	scanf("%f", &alturaPessoa);
	
	if( sexoPessoa == 'M' || sexoPessoa == 'm') {
		pesoIdealPessoa = (72.7 * alturaPessoa) - 58;
	} else if ( sexoPessoa == 'F' || sexoPessoa == 'f') {
		pesoIdealPessoa = (62.1 * alturaPessoa) - 44.7;
	}
	
	printf("O peso ideal da pessoa é: %.3f", pesoIdealPessoa);
}
void questao6() {
	float alturaPessoa, pesoPessoa, imcPessoa;
	
	printf("Digite a altura: ");
	scanf("%f", &alturaPessoa);
	printf("Digite o peso: ");
	scanf("%f", &pesoPessoa);
	
	imcPessoa = pesoPessoa / pow(alturaPessoa, 2);
	
	if (imcPessoa < 18.5) {
		printf("Abaixo do peso");
	} else if (imcPessoa <= 25) {
		printf("Peso normal");
	} else if (imcPessoa <= 30) {
		printf("Acima do peso");
	} else {
		printf("Obeso");
	}
}
void questao7() {
	int ladoTriangulo1, ladoTriangulo2, ladoTriangulo3;
	printf("Digite o valor do lado 1 do triangulo: ");
	scanf("%d", &ladoTriangulo1);
	printf("Digite o valor do lado 2 do triangulo: ");
	scanf("%d", &ladoTriangulo2);
	printf("Digite o valor do lado 3 do triangulo: ");
	scanf("%d", &ladoTriangulo3);

	if (fabs(ladoTriangulo2 - ladoTriangulo3) < ladoTriangulo1 && ladoTriangulo1 < ladoTriangulo2 + ladoTriangulo3) {
		if( ladoTriangulo1 == ladoTriangulo2 && ladoTriangulo2 == ladoTriangulo3 && ladoTriangulo1 == ladoTriangulo3) {
			printf("Equilatero");
		} else if( ladoTriangulo1 != ladoTriangulo2 && ladoTriangulo2 != ladoTriangulo3 && ladoTriangulo1 != ladoTriangulo3) {
			printf("Escaleno");
		} else {
			printf("Isoceles");
		}
	} else {
		printf("Nao eh um triangulo!");
	}
	
}
void questao8() {
	float salarioInicial;
	printf("Digite seu salario: ");
	scanf("%f", &salarioInicial);
	
	if( salarioInicial <= 500) {
		salarioInicial *= 1.05;
	}
	else if (salarioInicial > 500 && salarioInicial <= 1200) {
		salarioInicial *= 1.12;
	}
	
	if (salarioInicial <= 600 ) {
		salarioInicial += 150;
	}
	else if (salarioInicial > 600) {
		salarioInicial += 100;
	}
	printf("Novo salario: R$%.2f", salarioInicial);
	
	
	/*
	float salarioInicial;
	
	printf("Digite seu salario: ");
	scanf("%f", &salarioInicial);
	
	if (salarioInicial <= 500) {
		salarioInicial = (salarioInicial + salarioInicial * 5/100) + 150;
	}
	else if ( salarioInicial > 500 && salarioInicial <= 600) {
		salarioInicial = (salarioInicial + salarioInicial * 12/100) + 150;
	}
	
	else if ( salarioInicial > 500 && salarioInicial <= 1200) {
		salarioInicial = (salarioInicial + salarioInicial * 12/100) + 100;
	}
	
	else if ( salarioInicial > 1200){
		salarioInicial += 100;
	}
	
	printf("Novo salario: R$%.2f", salarioInicial);
	*/
}
void questao9() {
	float valorCordenadaX, valorCordenadaY;
	
	printf("Digite o valor da cordenada x: ");
	scanf("%f", &valorCordenadaX);
	printf("Digite o valor da cordenada y: ");
	scanf("%f", &valorCordenadaY);
	
	if (valorCordenadaX == 0 && valorCordenadaY == 0){
		printf("Esta na origem");
	} else if (valorCordenadaX == 0 || valorCordenadaY == 0) {
		printf("Estah sobre um dos eixos cartesianos");
	} else if (valorCordenadaX > 0 && valorCordenadaY > 0) {
		printf("Quadrante 1");
	}  else if (valorCordenadaX < 0 && valorCordenadaY > 0) {
		printf("Quadrante 2");
	} else if (valorCordenadaX < 0 && valorCordenadaY < 0) {
		printf("Quadrante 3");
	} else if (valorCordenadaX > 0 && valorCordenadaY < 0) {
		printf("Quadrante 4");
	}
	
}
void questao10() {
	float nota1, nota2, nota3, mediaNotas;
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
	mediaNotas = (nota1 + nota2 + nota3) / 3;
	
	if (mediaNotas >= 7 && nota1 >= 3 && nota2 >= 3 && nota3 >= 3) {
		printf("Voce estah Aprovado!");
	}
	
	else if (mediaNotas >= 3 && mediaNotas <= 7) {
		printf("Voce estah na 4 Prova");
	}
	
	else {
		printf("Voce estah reprovado");
	}
	
}


int main() {
	teste();
	return 0;
}
