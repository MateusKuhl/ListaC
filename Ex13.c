#include<stdio.h>

int main (){
	
	int num;
	
	printf("Informe um numero: ");
	scanf("%i", &num);
	
	if (num >= 100 && num <= 200){
		printf("O numero esta entre o intervalo de 100 e 200");
	}
	else {
		printf("O numero nao esta entre o intervalo de 100 e 200");
	}
	
}
