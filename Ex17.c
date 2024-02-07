#include<stdio.h>

int main (){
	
	float n1, n2, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	if (media >= 5.0){
		printf("\nMEDIA: %.2f", media);
		printf("\nAluno APROVADO");
	}
	else {
		printf("\nMEDIA: %.2f", media);
		printf("\nAluno REPROVADO");
	}
	
}
