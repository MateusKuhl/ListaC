#include<stdio.h>

int main (){
	
	int n;	
	
	printf("Informe um valor entre 1 e 5: ");
	scanf("%i", &n);
	
	switch (n){
		
		case 1:
			printf("Numero um");
		break;		
		
		case 2:
			printf("Numero dois");
		break;	
		
		case 3:
			printf("Numero tres");
		break;	
		
		case 4:
			printf("Numero quatro");
		break;	
		
		case 5:
			printf("Numero cinco");
		break;	
		
		default:
			printf("Numero invalido!");
			
	}
	
	
}
