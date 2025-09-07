#include <stdio.h>

int main() {

int idade; 
float altura; 
char opçao;
char nome[20];
 
 printf("Digite a sua idade: ");

scanf ("%d", &idade);

printf("A idade é: %d\n", idade);

printf("Digite a sua altura: ");
scanf ("%f", &altura);
printf("A altura é: %.3f\n", altura);
printf("Digite opçao: ");
scanf(" %c", &opçao);
printf("O nome é: %c\n", opçao);


    
}