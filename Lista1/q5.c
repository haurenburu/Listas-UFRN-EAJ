// 5
#include <stdio.h>
#include <stdlib.h>

int main() {
	// variaveis
	float salarioBruto, salarioLiquido, valorHoraAula, horasTrabalhadas, descontoINSS;
	// recebe o valor da hora trabalhada
	printf("Digite o valor hora/aula: ");
	scanf("%f", &valorHoraAula);
	// recebe o numero de horas que o usuario trabalhou
	printf("Digite o numero de horas trabalhadas esse mes: ");
	scanf("%f", &horasTrabalhadas);
	// calcula o salario bruto
	salarioBruto = valorHoraAula * horasTrabalhadas;
	// salario e negativo?
	if (salarioBruto < 0){
		return printf("O salario nao pode ser negativo!");
	}
	// verifica quantos % o desconto do inss?
	else if (salarioBruto <= 1751.81) {
		descontoINSS = salarioBruto * 0.08;
	}
	else if (salarioBruto >= 1751.82 && salarioBruto <= 2919.72){
		descontoINSS = salarioBruto * 0.09;
	}
	else if (salarioBruto >= 2919.73 && salarioBruto <= 5839.45) {
		descontoINSS = salarioBruto * 0.11;
	}
	else {
		descontoINSS = salarioBruto * 0.11;
	}
	// desconto maximo	
	if(descontoINSS > 642.34){
		descontoINSS = 642.34;
	}
	// calculo do desconto do inss
	salarioLiquido = salarioBruto - descontoINSS;
	// saida xD
	printf("Salario bruto: R$ %.2f \nDesconto do INSS: R$ %.2f \nSalario liquido: R$ %.2f ", salarioBruto, descontoINSS, salarioLiquido);
	
	return 0;
}

