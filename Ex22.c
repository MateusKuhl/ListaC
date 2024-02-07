#include<stdio.h>

int main (){
	
	int a, b;
	
	printf("Informe um valor: ");
	scanf("%i", &a);
	
	printf("Informe outro valor: ");
	scanf("%i", &b);
	
	if (a > b){
		printf("O maior numero e %i", a);
	} else if (b > a){
		printf("O maior numero e %i", b);	
	} else if (b = a){
		printf("Os dois valores sao iguais");
	}
	
}
