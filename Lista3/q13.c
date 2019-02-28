#include <stdio.h>
#include <math.h>

int main() {
	float catetoA,catetoB,hipotenusa, raiz;
	printf("Digite o valor do cateto A: ");
	scanf("%f", &catetoA);
	printf("Digite o valor do cateto B: ");
	scanf("%f", &catetoB);
	hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));
	printf("Hipotenusa: %.2f", hipotenusa);
}
