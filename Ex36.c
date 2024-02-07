//36) Foi realizada uma pesquisa de algumas características físicas
//da população de uma certa região, a qual coletou os seguintes
//dados referentes a cada habitante para serem analisados: sexo (1
//- masculino e 2 - feminino), cor dos olhos (1 - azuis, 2 - verdes, 3 castanhos), 
//cor dos cabelos (1 - louros, 2 - castanhos, 3 - //pretos), idade.
#include <stdio.h>
int main(void) {

    int sexo, olhos, cabelo;
    
    printf("\nDigite 1 para sexo masculino e 2 para feminino: ");
    scanf("%d", &sexo);

    switch(sexo)
        {
         case 1:
         printf("Masculino");break;
         case 2: 
         printf("Feminino"); break;
         default :
         printf ("Valor invalido!");
        }
    
    printf("\n\nDigite a cor dos olhos, 1 para azuis, 2 para verdes, 3 para castanhos: ");
    scanf("%d", &olhos);

    switch(olhos)
        {
         case 1:
         printf("Azul");break;
         case 2: 
         printf("Verde"); break;
            case 3:
         printf("Castanhos"); break;
         default :
         printf ("Valor invalido!");
        }

    printf("\n\nDigite 1 para cabelo louros, 2 para cabelos castanhos, 3 para pretos: ");
    scanf("%d", &cabelo);

switch(cabelo)
        {
         case 1:
         printf("Loiro");break;
         case 2: 
         printf("Castanhos"); break;
            case 3:
         printf("preto"); break;
         default :
         printf ("Valor invalido!");
        }
    
    int idade;

    printf("\n\nDigite sua idade: ");
    scanf("%d", &idade);

 printf("\n\nO habitante tem %d anos, é do sexo %d , tem olhos %d , e cabelos %d ", idade, sexo, olhos, cabelo);
         
  return 0;
}
