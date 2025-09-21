#include <stdio.h>

    int main() {

        float nota1, nota2, nota3;
        float media;

        printf("\n***Programa para Calcular a Média de Notas***\n");

        printf("Digite a sua Primeira Nota: \n");
        scanf("%f", &nota1);

        printf("Digite a sua Segunda Nota: \n");
        scanf("%f", &nota2);

        printf("Digite a sua Terceira Nota: \n");
        scanf("%f", &nota3);
    
        media = (float) (nota1 + nota2 + nota3) / 3;

        printf("A sua Média é: %.1f\n", media);
         


        return 0;

    }