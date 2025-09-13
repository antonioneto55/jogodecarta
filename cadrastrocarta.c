#include <stdio.h>

int main(){
                                //estado 1
    char estado[50], estado2[50];
    int ponto, ponto2;
    int pop, pop2;

    printf("informe um Estado: \n");
    scanf("%s", &estado);

    printf("pontos turistas: \n");    
    scanf(" %d", & ponto);

    printf("Populaçao: \n");     
    scanf("%d", &pop);
    
    printf("\n\n estado: %s \npontos_turistas: %d  \npopulaçao: %.d\n", estado, ponto, pop);
    printf("\n\n");
    

                                    //estado 2



    printf("informe outro Estado: \n");
    scanf("%s", &estado2);


    printf("pontos turistas2:\n" ); 
    scanf("%d", & ponto2);
    

    printf("Populaçao2:\n");  
    scanf("%d", &pop2);
    

    printf("\n\n estado2: %s \npontos_turistas2: %d  \npopulaçao2: %.d\n", estado2,  ponto2, pop2);
    

    return 0;
}