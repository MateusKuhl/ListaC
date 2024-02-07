#include<stdio.h>

int main (){
	
	int n;
	
	printf("Informe um valor: ");
	scanf("%i", &n);
	
	if (n <= 10){
		printf("F1");
	} else if (n > 10 && n <= 100){
		printf("F2");
	} else if (n > 100){
		printf("F3");
	}
	
}
