#include <stdio.h>

int main() {
	float precoProduto, vendaMediaMensal, precoAtual, aumentoOuReducaoPorcento;
	
	printf("Digite o preco atual do produto: ");
	scanf("%f", &precoAtual);
	printf("Digite a media de vendas do produto:  ");
	scanf("%f", &vendaMediaMensal);
	
	if(vendaMediaMensal < 500 && precoAtual < 30) {
		precoAtual *= 1.10;
	}
	else if((vendaMediaMensal >= 500 && vendaMediaMensal < 1200) && (precoAtual >= 30 && precoAtual < 80)) {
		precoAtual *= 1.15;
	}
	else if(precoAtual >= 80 && vendaMediaMensal >= 1200) {
		precoAtual -= precoAtual *0.20;
	}
	else {
		printf("O preco do produto nao foi reajustado!");
	}
	
	printf("preco: R$%.2f", precoAtual);
	
	return 0;
}
