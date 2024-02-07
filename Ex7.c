#include<stdio.h>

int main (){
	
	char nome[30];
	float salf, salfin, venda;
	
	printf("Informe o nome do vendedor: ");
	scanf("%s", nome);
	printf("Informe seu salario fixo: ");
	scanf("%f", &salf);
	printf("Informe o valor total das vendas realizadas: ");
	scanf("%f", &venda);
	
	salfin = salf + (salf * 0.15);
	
	printf("\nVENDEDOR: %s", nome);
	printf("\nSALARIO FIXO: %.2f", salf);
	printf("\nSALARIO FINAL: %.2f", salfin);
	
}
