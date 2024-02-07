#include<stdio.h>

int main (){
	
	float valor, prest;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &valor);
	
	prest = valor / 5;
	
	printf("O valor de cada prestacao em 5 meses sera igual a R$%.2f", prest);
		
}
