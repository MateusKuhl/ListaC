#include<stdio.h>

int main (){
	
	float x, y, media;
	
	printf("Digite um valor: ");
	scanf("%f", &x);
	
	printf("Digite outro valor: ");
	scanf("%f", &y);
	
	media = (x+y)/2;
	
	printf("A media entre os dois numeros e igual a: %.2f", media);
	
}
