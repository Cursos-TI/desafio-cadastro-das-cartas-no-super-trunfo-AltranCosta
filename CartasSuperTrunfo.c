#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    
    
    printf("Dados da Carta 1:\n");
    printf("Digite nome do Estado com uma letra da carta 1(ex: A a H):");
    scanf(" %c", &estado1); // Corrigido com espaço antes do %c
    
    printf("Digite o codigo da Cidade da carta 1(ex: A01, B02):");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da carta 1:");
    scanf("%s", cidade1);
    
    printf("Digite a População da carta 1:");
    scanf("%d", &populacao1);
    
    printf("Digite area da carta 1:");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1:");
    scanf("%f", &pib1);
    
    printf("Digite o numero de ponto Turistico da carta 1:");
    scanf("%d", &ponto_turistico1);


    //Dados da carta 2
    printf("Dados da Carta 2:\n");
    printf("Digite nome do Estado com uma letra da carta 2(ex: A a H):");
    scanf(" %c", &estado2); // Corrigido com espaço antes do %c
    
    printf("Digite o codigo da Cidade da carta 2(ex: A01, B02):");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da carta 2:");
    scanf("%s", cidade2);
    
    printf("Digite a População da carta 2:");
    scanf("%d", &populacao2);
    
    printf("Digite area da carta 2:");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2:");
    scanf("%f", &pib2);
    
    printf("Digite o numero de ponto Turistico da carta 2:");
    scanf("%d", &ponto_turistico2);

    float densidade_populacional1 = populacao1 / area1;// calcular densidade populacional
    float densidade_populacional2 = populacao2 / area2;

   float pib_per_capita1 = (pib1 * 1e9) / populacao1; //calcular o PIB per capita
   float pib_per_capita2 = (pib2 * 1e9) / populacao2;

    // exibição dos Dados
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d Pessoas\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Ponto Turistico: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade_populacional1);
    printf("PIB pre Capita: %.3f Reais\n", pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d Pessoas\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Ponto Turistico: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade_populacional2);
    printf("PIB pre Capita: %.3f Reais\n", pib_per_capita2);

    return 0;
}
