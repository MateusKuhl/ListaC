#include<stdio.h>

int main (){
	
	float km1, km2, t1, t2, vm1, vm2;
	
	printf("Informe a distancia percorrida do primeiro veiculo em km: ");
	scanf("%f", &km1);
	printf("Informe a distancia percorrida do segundo veiculo em km: ");
	scanf("%f", &km2);
	printf("Informe o tempo gasto do primeiro veiculo em horas: ");
	scanf("%f", &t1);
	printf("Informe o tempo gasto do segundo veiculo em horas: ");
	scanf("%f", &t2);
	
	vm1 = km1/t1;
	vm2 = km2/t2;

	if (vm1 > vm2){
		printf("O primeiro veiculo teve uma velocidade media maior, de %.2f", vm1);
	}
	else{
		printf("O segundo veiculo teve uma velocidade media maior, de %.2f", vm2);
	}

}
