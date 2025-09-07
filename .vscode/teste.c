#include <stdio.h>

int main(){

int idade;
float altura;
char nome[20];

printf("Digite sua idade: ");
scanf("%d", &idade);    

printf("Digite sua altura: ");
scanf("%f", &altura);   

printf("Digite seu nome: ");
scanf("%s", nome);      
 
printf("\n\nNome: %s - \nIdade: %d - \n Altura: %.2f\n", nome, idade, altura);

return 1;







}