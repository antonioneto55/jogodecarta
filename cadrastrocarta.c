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
    float densidade_pop, densidade_pop2;
    float PIB_per_capita, PIB_per_capita2;

    printf("Informe um Estado: \n");
    scanf("%s", &estado);

    printf("Informe o código da carta: \n");
    scanf(" %s", &codigo_carta);

    printf("Informe o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("Populaçao: \n");     
    scanf("%d", &pop);

    printf("Informe a área em km²: \n");
    scanf(" %f", &area);

    printf("Informe o PIB em R$: \n");
    scanf(" %f", &PIB);

    printf("Pontos turistas: \n");    
    scanf(" %d", & ponto);

    densidade_pop =pop / area;
    printf("Densidade populacional: %.5f\n");
    
    PIB_per_capita = PIB / pop;
    printf("PIB_per_capita: %.5f\n");


    printf("\n\n Estado: %s \nCódigo da carta: %s \nCidade: %s \nPopulaçao: %.d \nÁrea: %f \nPIB: %f \nPontos turistas: %d \nDensidade populacional: %.5f \nPIB per capita: %.5f\n", estado, codigo_carta, cidade, pop, area, PIB, ponto, densidade_pop, PIB_per_capita);
    
    printf("\n\n");
    

                                    //estado 2

    printf("Informe um Estado2: \n");
    scanf("%s", &estado2);

    printf("Informe o código da carta2: \n");
    scanf(" %s", &codigo_carta2);

    printf("Informe o nome da cidade2: \n");
    scanf(" %s", &cidade2);

    printf("Populaçao 2: \n");     
    scanf("%d", &pop2);

    printf("Informe a área em km²2: \n");
    scanf(" %f", &area2);

    printf("Informe o PIB em R$ 2: \n");
    scanf(" %f", &PIB2);

    printf("Pontos turistas 2: \n");    
    scanf(" %d", & ponto2);

    densidade_pop2 =pop2 / area2;
    printf("Densidade populacional2: %.5f\n");
    
    PIB_per_capita2 = PIB2 / pop2;
    printf("PIB per capita2: %.5f\n");
    
    printf("\n\n Estado2: %s \nCódigo da carta2: %s \nCidade2: %s \nPopulaçao2: %.d \nÁrea2: %f \nPIB2: %f \nPontos turistas2: %d \nDensidade populacional2: %.5f \nPIB_per_capita2: %.5f\n", estado2, codigo_carta2, cidade2, pop2, area2, PIB2, ponto2, densidade_pop2, PIB_per_capita2);

    return 0;

}