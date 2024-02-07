#include<stdio.h>

int main (){
	
	float cot, real, dol=0;
	
	printf("Informe a cotacao do Dolar no momento: ");
	scanf("%f", &cot);
	
	printf("Informe o valor em Reais a serem convertidos: ");
	scanf("%f", &real);
	
	dol = real / cot;
	
	printf("Valor convertido para dolares: $%.2f", dol);
		
}
