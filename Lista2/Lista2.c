#include <stdio.h>
#include <stdlib.h>

void teste() {
	
	
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
	//questao1();
	//questao2();
	//questao3();
	//questao10();
	questao8();
	//teste();
	return 0;
}
