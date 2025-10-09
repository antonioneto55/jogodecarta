#include <stdio.h>

int main(){
                                //estado 1
    char estado[50], estado2[50];
    char codigo_carta[5], codigo_carta2[5];
    char cidade[50], cidade2[50];
    unsigned long int pop, pop2;
    float area, area2;
    float PIB, PIB2;
    int ponto, ponto2;
    float densidade_pop, densidade_pop2;
    float PIB_per_capita, PIB_per_capita2;
    float inverso_densidade_pop, inverso_densidade_pop2;
                                //super pode carta1
    float super_poder = (float) pop + area + PIB + PIB_per_capita + ponto + inverso_densidade_pop;
                                //super poder carta2
    float super_poder2 = (float) pop2 + area2 + PIB2 + PIB_per_capita2 + ponto2 + inverso_densidade_pop2;

    printf("Informe um Estado: \n");
    scanf("%s", &estado);

    printf("Informe o código da carta: \n");
    scanf(" %s", &codigo_carta);

    printf("Informe o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("Populaçao: \n");     

    scanf("%ld", &pop);

    printf("Informe a área em km²: \n");
    scanf(" %f", &area);
    printf("Informe o PIB em R$: \n");
    scanf(" %f", &PIB);

    printf("Pontos turistas: \n");    
    scanf(" %d", & ponto);

    densidade_pop =pop / area;
    printf("Densidade populacional: %f\n");
    
    PIB_per_capita = PIB / pop;
    printf("PIB_per_capita: %f\n");
    //inverso densidade populacional carta 1//
    inverso_densidade_pop = 1 / densidade_pop;

    printf("\n\n Estado: %s \nCódigo da carta: %s \nCidade: %s \nPopulaçao: %ld \nÁrea: %.2f \nPIB: %.2f \nPontos turistas: %d \nDensidade populacional: %.2f \nPIB per capita: %.2f \nSuper poder: %.2f\n", 
        estado, codigo_carta, cidade, pop, area, PIB, ponto, densidade_pop, PIB_per_capita, super_poder);
    
    printf("\n\n");
    

                                    //estado 2

    printf("Informe um Estado2: \n");
    scanf("%s", &estado2);

    printf("Informe o código da carta2: \n");
    scanf(" %s", &codigo_carta2);

    printf("Informe o nome da cidade2: \n");
    scanf(" %s", &cidade2);

    printf("Populaçao 2: \n");     
    scanf("%ld", &pop2);

    printf("Informe a área em km²2: \n");
    scanf(" %f", &area2);

    printf("Informe o PIB em R$ 2: \n");
    scanf(" %f", &PIB2);

    printf("Pontos turistas 2: \n");    
    scanf(" %d", & ponto2);

    densidade_pop2 =pop2 / area2;
    printf("Densidade populacional2: %f\n");
    
    PIB_per_capita2 = PIB2 / pop2;
    printf("PIB per capita2: %f\n");
    //inverso densidade populacional carta 2//
    inverso_densidade_pop2 = 1 / densidade_pop2;

    printf("\n\n Estado2: %s \nCódigo da carta2: %s \nCidade2: %s \nPopulaçao2: %ld \nÁrea2: %.2f \nPIB2: %.2f \nPontos turistas2: %d \nDensidade populacional2: %.2f \nPIB_per_capita2: %.2f\n Super poder2: %.2f\n", 
        estado2, codigo_carta2, cidade2, pop2, area2, PIB2, ponto2, densidade_pop2, PIB_per_capita2, super_poder2);

        if (pop > pop2) {

            printf("\n\n A carta 1 é maior que a carta 2 \n\n");

        }
          else { 
            printf("\n\n A carta 2 é maior que a carta 1 \n\n");
        }
         printf("valor da populaçao da carta vencedora: %ld \n", (pop > pop2) ? pop : pop2);
    
    return 0;

}