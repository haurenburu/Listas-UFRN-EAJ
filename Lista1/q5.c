// 5
#include <stdio.h>
#include <stdlib.h>

int main() {
	float salarioBruto, salarioLiquido, valorHoraAula, horasTrabalhadas, descontoINSS;
	
	printf("Digite o valor hora/aula: ");
	scanf("%f", &valorHoraAula);
	
	printf("Digite o numero de horas trabalhadas esse mes: ");
	scanf("%f", &horasTrabalhadas);
	
	salarioBruto = valorHoraAula * horasTrabalhadas;
	
	// quantos % o desconto do inss?
	if (salarioBruto <= 1751.81) {
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
	
	salarioLiquido = salarioBruto - descontoINSS;
	printf("Salario bruto: R$ %.2f \nDesconto do INSS: R$ %.2f \nSalario liquido: R$ %.2f ", salarioBruto, descontoINSS, salarioLiquido);
}

