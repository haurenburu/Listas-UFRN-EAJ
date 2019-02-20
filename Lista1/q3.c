// 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	// declaracao dos variaveis
	float area, raio, pi = 3.1415926535898;
    // recebe o raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
	// calcula a area
	area = pi * pow(raio, 2);
	// saida xD
	printf("O valor da area e: %.2f", area);
	
	return 0;
}

