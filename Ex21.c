#include<stdio.h>

int main (){
	
	float sal, salf, venda;
	int falta;
	
	printf("Informe o salario fixo do vendedor: R$");
	scanf("%f", &sal);
	
	printf("Informe o total em vendas: R$");
	scanf("%f", &venda);
	
	printf("Informe o total de faltas do vendedor: ");
	scanf("%i", &falta);
	
	if (venda <= 1500){
		salf = sal + (sal * 0.02);
		salf = salf - (falta * 5);
	} else if (venda > 1500 && venda <= 3000){
		salf = sal + (sal * 0.03);
		salf = salf - (falta * 5);
	} else if (venda > 3000 && venda <= 6000){
		salf = sal + (sal * 0.05);
		salf = salf - (falta * 5);
	} else {
		salf = sal + (sal * 0.06);
		salf = salf - (falta * 5);
	}
	
	printf("Salario final: R$%.2f", salf);
	
}
