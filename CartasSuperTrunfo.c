#include <stdio.h>

int main(){

    char estado1[5], estado2[5];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    
    
    
    printf("Dados da Carta 1:\n");
    printf("Digite nome do Estado com duas letra da carta 1(ex: SP ou RJ):");
    scanf("%s", estado1);
    
    printf("Digite o codigo da Cidade da carta 1(ex: A01, B02):");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da carta 1:");
    scanf("%s", cidade1);
    
    printf("Digite a População da carta 1:");
    scanf("%lu", &populacao1);
    
    printf("Digite area da carta 1:");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1:");
    scanf("%f", &pib1);
    
    printf("Digite o numero de ponto Turistico da carta 1:");
    scanf("%d", &ponto_turistico1);


    //Dados da carta 2
    printf("Dados da Carta 2:\n");
    printf("Digite nome do Estado com duas letra da carta 2(ex: SP ou RJ):");
    scanf("%s", estado2); 
    
    printf("Digite o codigo da Cidade da carta 2(ex: A01, B02):");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da carta 2:");
    scanf("%s", cidade2);
    
    printf("Digite a População da carta 2:");
    scanf("%lu", &populacao2);
    
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

   float super_poder1 =(float)(populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1 / densidade_populacional1));
   float super_poder2 =(float)(populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1 / densidade_populacional2));

    int exibirMenu;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &exibirMenu);

   switch (exibirMenu){
     case 1:
      printf("Carta 1 - %s (%s): %lu \n", cidade1, estado1, populacao1);// estrutura de decisão
      printf("Carta 2 - %s (%s): %lu \n", cidade2, estado2, populacao2);
      if (populacao1 > populacao2){
        printf("Carta 1 : (%s) Venceu", cidade1);
      }else if (populacao1 < populacao2){
        printf("Carta 2 : (%s) Venceu", cidade2);
      }else{
        printf("*** Empate ***");
      }
       break;

     case 2:
       printf("Carta 1 - %s (%s): %.3f \n", cidade1, estado1, area1);
       printf("Carta 2 - %s (%s): %.3f \n", cidade2, estado2, area2);
      if (area1 > area2){
        printf("Carta 1 : (%s) Venceu", cidade1);
      }else if (area1 < area2){
        printf("Carta 2 : (%s) Venceu", cidade2);
      }else{
        printf("*** Empate ***");
      }
      break;

      case 3:
      printf("Carta 1 - %s (%s): %.3f \n", cidade1, estado1, pib1);
      printf("Carta 2 - %s (%s): %.3f \n", cidade2, estado2, pib2);
      if (pib1 > pib2){
        printf("Carta 1 : (%s) Venceu", cidade1);
      }else if (pib1 < pib2){
        printf("Carta 2 : (%s) Venceu", cidade2);
      }else{
        printf("*** Empate ***");
      }
      break;

      case 4:
      printf("Carta 1 - %s (%s): %d \n", cidade1, estado1, ponto_turistico1);
      printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, ponto_turistico2);
      if (ponto_turistico1 > ponto_turistico2){
        printf("Carta 1 : (%s) Venceu", cidade1);
      }else if(ponto_turistico1 < ponto_turistico2){
        printf("Carta 2 : (%s) Venceu", cidade2);
      }else{
        printf("*** Empate ***");
      }
      break;

      case 5:
      printf("Carta 1 - %s (%s): %.3f \n", cidade1, estado1, densidade_populacional1);
      printf("Carta 2 - %s (%s): %.3f \n", cidade2, estado2, densidade_populacional2);
      if (densidade_populacional1 < densidade_populacional2){
        printf("Carta 1 : (%s) Venceu", cidade1);
      }else if (densidade_populacional1 > densidade_populacional2){
        printf("Carta 2 : (%s) Venceu", cidade2);
      }else{
        printf("*** Empate ***");
      }
      break;

      case 6:
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, super_poder1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, super_poder2);
    if (super_poder1 > super_poder2) {
        printf("Carta 1 : (%s) Venceu\n", cidade1);
    } else if (super_poder1 < super_poder2) {
        printf("Carta 2 : (%s) Venceu\n", cidade2);
    } else {
        printf("*** Empate ***\n");
    }
    break;
    
    default:
       printf("Opção Invalida!");
      break;
    }

  return 0;
}