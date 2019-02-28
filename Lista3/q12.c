#include <stdio.h>

int main() {
	float alturaCilindro, raioCilindro, volumeCilindro;
	const float pi = 3.141592;
	printf("Digite a altura do cilindro: ");
	scanf("%f", &alturaCilindro);
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raioCilindro);
	volumeCilindro = pi * pow(raioCilindro, 2) * alturaCilindro;
	printf("Volume do cilindro: %.2f", volumeCilindro);
}
