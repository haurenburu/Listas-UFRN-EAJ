#include <stdio.h>

int main() {
	float angulo, radianos;
	const float pi = 3.141592;
	printf("Digite o valor do angulo(em raios): ");
	scanf("%f", &angulo);
	radianos = angulo * (pi/180);
	printf("Radianos: %.4f", radianos);
}
