// 4
#include <stdio.h>
#include <stdlib.h>

int main() {
	// declaracao das variaveis
	float salario;
	// recebe o valor do salario
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	// calcula o acrescimo do salario
	salario = salario * 1.25;
	// mostra o novo salario
	printf("Seu novo salario e: %.2f", salario);
	
	return 0;
}
