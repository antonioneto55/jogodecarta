#include <stdio.h>

int main(){

    /*Atribuição simples (=)
      atribuição com soma (+=)
      atricuição com subtração (-=)
      atribuiçao com multiplicação (*=)
      atribuição com divisão (/=)
      */

      int numero1 = 10, numero2, resultado;

      resultado = 10;
      printf("Resultado: %d\n", resultado);

      // resultado = resultado + 25;//
       resultado += 25;
       printf("Resultado: %d\n", resultado);  

       // resultado = resultado - numero1;//
      resultado -= numero1;
      printf("Resultado: %d\n", resultado);
     
      resultado *= 5;
      printf("Resultado: %d\n", resultado);

      resultado /= 2;
      printf("Resultado: %d\n", resultado);














    return 0;
}