#include<stdio.h>

int main (){
	
	float n1, n2, media, resto;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	if (media >= 7.0){
		printf("\nMEDIA: %.2f", media);
		printf("\nAluno APROVADO");
	}
	else if (media < 4.0) {
		printf("\nMEDIA: %.2f", media);
		printf("\nAluno REPROVADO");
	}
	else if (media >= 4.0 && media < 7.0){
		printf("\nMEDIA: %.2f", media);
		printf("\nAluno EM RECUPERACAO");
		resto = 10 - media;
		printf("\nNota necessaria: %.2f", resto);
	}
	
}
	
