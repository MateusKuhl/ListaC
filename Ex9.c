#include<stdio.h>

int main (){
	
	float deposito, valorf;
	
	printf("Informe o valor depositado: ");
	scanf("%f", &deposito);
	
	valorf = deposito + (deposito * 0.007);
	
	printf("Total apos um mes: R$%.2f", valorf);
}
