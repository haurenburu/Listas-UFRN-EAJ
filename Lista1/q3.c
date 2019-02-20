// 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float area, raio, pi = 3.14;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

	area = pi * pow(raio, 2);

	printf("O valor da area e: %.2f", area);
	
	return 0;
}

