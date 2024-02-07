#include<stdio.h>

int main (){
	
	int n;	
	
	printf("Informe um valor entre 1 e 7: ");
	scanf("%i", &n);
	
	switch (n){
		
		case 1:
			printf("Segunda-Feira");
		break;		
		
		case 2:
			printf("Terca-Feira");
		break;	
		
		case 3:
			printf("Quarta-Feira");
		break;	
		
		case 4:
			printf("Quinta-Feira");
		break;	
		
		case 5:
			printf("Sexta-Feira");
		break;	
		
		case 6:
			printf("Sabado");
		break;	
		
		case 7:
			printf("Domingo");
		break;	
		
		default:
			printf("Dia correspondente inexistente");
			
	}
	
	
}
	
