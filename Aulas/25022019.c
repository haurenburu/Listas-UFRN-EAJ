#include <stdio.h>
#include <stdlib.h>

void f_desenharBoneco() {
	printf("\n\n\t\t\t 0 \n\t\t\t/|\\ \n\t\t\t/ \\ \n\n\n------------------------------------------------\n");
}

void f_mostrarMenu() {
	printf("\tInforme a operacao desejada\n1-Soma\n2-Substracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n\n------------------------------------------------\n");
}
void f_aulaPrintfScanF() {
	char sexo = 'M';
	int dia = 0;
	float media = 0.0;
	
	printf("Digite o sexo: ");
	scanf("%c", &sexo);
	printf("\nDigite o dia: ");
	scanf("%d", &dia);
	printf("\nDigite a media: ");
	scanf("%f", &media);

	system("cls || clear");
	
	printf("\n\n------------------------------------------------\n\t\tValores informados\nSexo = %c\nDia = %d\nMedia = %.1f\n\n------------------------------------------------\n", sexo, dia, media);
}

int main() {	
	f_aulaPrintfScanF();
	f_desenharBoneco();
	f_mostrarMenu();
	system("pause");
	return 0;
}
