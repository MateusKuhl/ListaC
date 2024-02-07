#include<stdio.h>

int main (){
	
	char nome1[30], nome2[30];
	int idade1, idade2, ano;
	
	printf("Informe o nome da primeira pessoa: ");
	scanf("%s", nome1);
	printf("Informe a idade da primeira pessoa: ");
	scanf("%i", &idade1);
	printf("Informe o nome da segunda pessoa: ");
	scanf("%s", nome2);
	printf("Informe a idade da segunda pessoa: ");
	scanf("%i", &idade2);
	
	if (idade1 < idade2){
		printf("\nPessoa mais nova: %s", nome1);
		ano = 2023 - idade1;
		printf("\nAno de nascimento: %i", ano);
	} else{
		printf("\nPessoa mais nova: %s", nome2);
		ano = 2023 - idade2;
		printf("\nAno de nascimento: %i", ano);
	}
	
	
}
