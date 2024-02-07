#include<stdio.h>
int main (){
	
	float custo, preco;
	
	printf("Informe o custo do veiculo: R$");
	scanf("%f", &custo);
	
	preco = custo + (custo * 0.45);
	
	preco = preco + (preco * 0.28);
	
	printf("Valor final do veiculo: R$%.2f", preco);
		
}
