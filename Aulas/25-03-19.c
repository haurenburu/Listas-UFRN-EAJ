#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void teste() {
	
	int entrada, quantidade = 1;
	float contaFinal = 0;
	float precos[5] = { 1.5, 1.0, 1.3, 1.4, 1.2 };
	
	
	do {
		system("cls || clean");
		printf("-------- C A R D A P I O --------\nCodigo \t Produto \t preco\n  1 \t Refrigerante \t R$ 1,50\n  2 \t Hotdog \t R$ 1,00\n  3 \t Bauru \t\t R$ 1,30\n  4 \t Hamburguer \t R$ 1,40\n  5 \t Cheeseburguer \t R$ 1,20\n");
		printf("\n\tConta: R$ %.2f", contaFinal);
		printf("\n---------------------------------\n");
		printf("\n\tDigite 0 para sair!\t\t\n");
		printf("\n---------------------------------\n");

		printf("Produto: ");
		scanf("%d", &entrada);
		if (entrada > 5 || entrada <= 0) continue;
		printf("Quantidade: ");
		scanf("%d", &quantidade);
		
		contaFinal += precos[entrada - 1] * quantidade;
		
	} while(entrada != 0) ;
	
}

void pratica3() {
	float x = 100, y = 200;
	int v1,v2,v3;
	int contador = 0;
	
	do {
		x *= 1.05;
		y *= 1.03;
		contador++;
		
	} while (x <= y);
	
	printf("Levou %d meses!", contador);
}


int main() {
	teste();
	return 0;
}


/*
printf("******** C A R D A P I O ********\n");
		printf("Codigo \t Produto \t preco\n");
		printf("  1 \t Refrigerante \t 1,50\n");
		printf("  2 \t Hotdog \t 1,00\n");
		printf("  3 \t Bauru \t\t 1,30\n");
		printf("  4 \t Hamburguer \t 1,40\n");
		printf("  5 \t Cheeseburguer \t 1,20\n");
		printf("\n\tConta R$: %.2f", contaFinal);
		printf("\n\tDigite 0 para sair!\t\t\n");
		printf("\n*********************************\n");
		printf("Entrada: ");




system("cls || clean");
printf("-------- C A R D A P I O --------\n");
printf("Codigo \t Produto \t preco\n");
printf("  1 \t Refrigerante \t R$ 1,50\n");
printf("  2 \t Hotdog \t R$ 1,00\n");
printf("  3 \t Bauru \t\t R$ 1,30\n");
printf("  4 \t Hamburguer \t R$ 1,40\n");
printf("  5 \t Cheeseburguer \t R$ 1,20\n");
printf("\n\tConta: R$ %.2f", contaFinal);
printf("\n---------------------------------\n");
printf("\n\tDigite 0 para sair!\t\t\n");
printf("\n---------------------------------\n");
printf("Entrada: ");
scanf("%d", &entrada);


*/
