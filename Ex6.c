#include<stdio.h>

int main (){
	
	float c, f;
	
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	c = (f - 32) * 5 / 9;
	
	printf("A temperatura convertida para Celsius e igual a: %.2f", c);
	
}
