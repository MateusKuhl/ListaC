//34) Crie um algoritmo que ajude o DETRAN a saber, o total de
//recursos que foram arrecadados com a aplica��o de multas de
//tr�nsito. O algoritmo deve ler as seguintes informa��es para cada
//motorista: o n�mero da carteira de motorista, n�mero de multas, o
//====valor da cada uma das multas.
//Deve ser impresso o valor da d�vida de cada motorista e ao final
//da leitura o total de recursos arrecadados (somat�rio de todas as
//multas). O algoritmo dever� imprimir tamb�m o n�mero da
//carteira do motorista que obteve o maior n�mero de multas e se
//encerra quando o n�mero digitado da carteira de motorista for 0.
#include <stdio.h>

int main(void) {
  float total = 0, valormulta = 0, carteira=1, total1 = 0, total2=0;
    float maior=0;
    int multas=0, a=0, maiorc=0;
    

    while(carteira != 0){
        printf("\nDigite o numero da carteira de motorista: ");
        scanf("%f", &carteira);
        
        if (carteira == 0){
            break;
        }

        else{
        printf("\nDigite a quantidade do numero de multas ");
        scanf("%d", &multas);
        for(a = 0; a < multas; a++){
        printf("\nDigite o valor da multa ");
        scanf("%f", &valormulta);
            total1 = total1 + valormulta;
        }
        
        if(maior<total1){
            maior= total1;
            maiorc = carteira;
        } 
        printf("\nA carteira de motorista %.2f, teve %.2f em multas ", carteira, total1);

        total = total + total1;
        
        if(carteira==0){
             printf("\nPrograma finalizado!"); break;
        }
        total1 = 0;
        }
    }


    printf("\nO numero da maior carteira foi %d", maiorc); 
    printf("\nO maior valor de multas foi de: %.2f ", maior); 
    printf("\nO valor total de multas foi de: %.2f ", total); 
    
  return 0;
}
