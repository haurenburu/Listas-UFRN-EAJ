#include <stdio.h>
int main() {
	float dinheiroTotal = 780000.00,dinheiro, vencedor1, vencedor2, vencedor3;
	
	dinheiro = dinheiroTotal;
	
	vencedor1 = dinheiroTotal * 0.46;
	dinheiro -= vencedor1;
	
	vencedor2 = dinheiroTotal * 0.32;
	dinheiro -= vencedor2;
	
	vencedor3 = dinheiro;
	
	printf("Vencedor 1: %.2f\nVencedor 2: %.2f\nVencedor 3: %.2f", vencedor1, vencedor2, vencedor3);
}
