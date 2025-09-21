#include <stdio.h>

int main(){
                                //estado 1
    char estado[50], estado2[50];
    char codigo_carta[5], codigo_carta2[5];
    char cidade[50], cidade2[50];
    int pop, pop2;
    float area, area2;
    float PIB, PIB2;
    int ponto, ponto2;


    printf("informe um Estado: \n");
    scanf("%s", &estado);

    printf("informe o código da carta: \n");
    scanf(" %s", &codigo_carta);

    printf("informe o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("Populaçao: \n");     
    scanf("%d", &pop);

    printf("informe a área em km²: \n");
    scanf(" %f", &area);

    printf("informe o PIB em R$: \n");
    scanf(" %f", &PIB);

    printf("pontos turistas: \n");    
    scanf(" %d", & ponto);

    
    printf("\n\n estado: %s \ncódigo da carta: %s \ncidade: %s \npopulaçao: %.d \nárea: %f \nPIB: %f \npontos turistas: %d \n", estado, codigo_carta, cidade, pop, area, PIB, ponto);
    
    printf("\n\n");
    

                                    //estado 2

  printf("informe um Estado2: \n");
    scanf("%s", &estado2);

    printf("informe o código da carta2: \n");
    scanf(" %s", &codigo_carta2);

    printf("informe o nome da cidade2: \n");
    scanf(" %s", &cidade2);

    printf("Populaçao 2: \n");     
    scanf("%d", &pop2);

    printf("informe a área em km²2: \n");
    scanf(" %f", &area2);

    printf("informe o PIB em R$ 2: \n");
    scanf(" %f", &PIB2);

    printf("pontos turistas 2: \n");    
    scanf(" %d", & ponto2);

    
    printf("\n\n estado2: %s \ncódigo da carta2: %s \ncidade2: %s \npopulaçao2: %.d \narea2: %f \nPIB2: %f \npontos turistas2: %d \n", estado2, codigo_carta2, cidade2, pop2, area2, PIB2, ponto2);
    printf("\n\n");

    return 0;
}