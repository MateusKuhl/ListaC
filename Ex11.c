#include<stdio.h>

int main (){

	float custo, preco, p, pfinal;

	printf("Informe o preco de custo do produto: R$");
	scanf("%f", &custo);
	
	printf("Informe a porcentagem de margem sobre o custo: ");
	scanf("%f", &p);

	pfinal = p / 100;
	
	preco = custo + (custo * pfinal);
	
	printf("Valor final do produto: R$%.2f", preco);
	
}
