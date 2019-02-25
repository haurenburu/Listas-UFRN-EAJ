#include <stdio.h>
#include <stdlib.h>

void f_desenharBoneco() {
	printf("\t\t\t 0 \n\t\t\t/|\\ \n\t\t\t/ \\ \n");
}

void f_mostrarMenu() {
	printf("\tInforme a operacao desejada\n1-Soma\n2-Substracao\n3-Multiplicacao\n4-Divisao\n5-Sair");
}



int main() {
	
	char sexo = 'F';
	int dia = 31;
	float media = 9.5;
		
	printf("sexo = %c \nDia = %d\nMedia = %.1f", sexo, dia, media);
	
	printf("\n\n");
	f_desenharBoneco();
	printf("\n\n------------------------------------------------\n");
	f_mostrarMenu();
	printf("\n\n------------------------------------------------\n");
	system("pause");
	return 0;
}
