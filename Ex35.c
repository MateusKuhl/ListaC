//35) Fa�a um algoritmo que leia v�rios n�meros e informe quantos
//desses n�meros entre 100 e 200 foram digitados. Quando o valor
//0 (zero) for lido o algoritmo dever� cessar sua execu��o.


#include <stdio.h>

int main(void) {

    int valor=-1, a=0;
    
    
  while(valor!=0){
      printf("\nDigite um n�mero: ");
      scanf("%d", &valor);
      if(valor ==0){  printf("\nPrograma finalizado!");break;}
      if(valor >=100 && valor <= 200){
          a++;
      }   
  }

    printf("\nA quantidade de valores digitados foi de %d", a);
  return 0;
}
