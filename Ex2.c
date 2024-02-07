#include<stdio.h>

int main (){
	
	float x, y, soma, sub, mult, div;
	
	printf("Digite um valor: ");
	scanf("%f", &x);
	
	printf("Digite outro valor: ");
	scanf("%f", &y);
	
	soma = x + y;
	sub = x - y;
	mult = x * y;
	div = x/y;
	
	printf("\nA soma e igual a %.2f", soma);
	printf("\nA subtracao e igual a %.2f", sub);
	printf("\nA multiplicacao e igual a %.2f", mult);
	printf("\nA divisao e igual a %.2f", div);
	
}
