#include <stdio.h>

int main(){

/* incremento (++)
pré incremento ++a
pós incremento a++
decremento (--)
pré decremento --a
pós decremento a--
*/
                /*incremento*/
int numero1 = 1, resultado;

printf("Antes do incremento: %d\n", numero1);

resultado = numero1++;

printf("Após o pós-incremento  Numero1: %d  Resultado: %d\n", numero1, resultado);


                /* decremento*/


   resultado = numero1--;

   printf("Após o pós-decremento: numero1: %d Resultado: %d\n", numero1, resultado);

                /*pré decremento*/

  resultado = --numero1;

    printf("Após o pré-decremento: numero1: %d Resultado: %d\n", numero1, resultado);
    
                  




return 0;

    } 