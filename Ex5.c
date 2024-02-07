#include<stdio.h>

int main (){
	
	float c, f;
	
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = (9*c + 160) / 5;
	
	printf("A temperatura convertida para Fahrenheit e igual a: %.2f", f);
	
}
