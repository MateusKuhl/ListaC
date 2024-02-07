#include<stdio.h>

int main (){
	
	int n;
	char i;	
	
	printf("Informe um valor entre 1 e 5: ");
	scanf("%i", &n);
	
	printf("\nVoce deseja em Ingles ou Portugues?");
	printf("\nDigite I para Ingles ou P para portugues\n");
	i = getchar();
	scanf("%c", &i);

		if (i = "I"){
			switch (n){
		
				case 1:
					printf("Number one");
				break;		
				
				case 2:
					printf("Number two");
				break;	
				
				case 3:
					printf("Number three");
				break;	
				
				case 4:
					printf("Number four");
				break;	
				
				case 5:
					printf("Number five");
				break;	
				
				default:
					printf("Invalid number!");
			
				}
			}
			
		else if (i = "P"){
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
		else {
			printf("\nERRO");
		}

}
