#include<stdio.h>

int main (){
	
	float km, gas, kmgas;
	
	printf("Informe a distancia percorrida: ");
	scanf("%f", &km);
	printf("Informe o total de combustivel gasto: ");
	scanf("%f", &gas);
	
	kmgas = km/gas;
	
	printf("O gasto medio de combustivel por km percorrido e igual a: %.2f", kmgas);
	
}
