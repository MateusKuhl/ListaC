#include<stdio.h>

int main (){
	
	int n[10], maior=0, menor=100000000000;
	
	for (int x = 0; x < 10; x++){
		
		printf("Digite um numero: ");
		scanf("%i", &n[x]);
		
		if (n[x] == 0){
			printf("Programa Finalizado\n");
			break;
		} else if (n[x] > maior){
			maior = n[x];
		} else if (n[x] < menor){
			menor = n[x];
		}
	}
	
	printf("O maior numero e: %i\n", maior);
	printf("O menor numero e: %i\n", menor);
	
}

