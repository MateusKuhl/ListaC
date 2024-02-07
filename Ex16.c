#include<stdio.h>

int main (){
	
	float sal, fin;
	
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	
	printf("Informe o valor do financiamento: ");
	scanf("%f", &fin);
	
	if (fin <= (sal * 5)){
		printf("\nFinanciamento concedido");
	}
	else {
		printf("\nFinanciamento negado");
	}
	
	
	printf("\nObrigada por nos consultar!");
	
}
