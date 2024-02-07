#include<stdio.h>

int main (){
	
	int ano, idade;
	
	printf("Informe seu ano de nascimento: ");
	scanf("&i", &ano);
	
	idade = 2023 - ano;
	
	if (idade < 18){
		printf("Voce nao possui a idade minima para entrar na boate");
	}
	else{
		printf("Voce possui a idade minima para entrar na boate");
	}
	
}
