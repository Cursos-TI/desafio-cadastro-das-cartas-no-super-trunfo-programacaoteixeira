#include <stdio.h>

int main(){

    // JOGO SUPER TRUNFO//

    char estado1 = 'A', estado2 = 'B';
    char codcarta1 = 'A01', codcarta2 = 'B02';
    char nomecidade1[20], nomecidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;
    float densipopulacional1, densipopulacional2;
    float PIBpercapita1, PIBpercapita2;

    printf("CARTA 1!!!\n");
    printf("Estado: A\n");
    printf("Código da carta: A01\n");
   
    printf("Qual nome da Cidade:\n");
    scanf("%c", &nomecidade1);
   
    printf("Qual a populacão da sua cidade:\n");
    scanf("%d", &populacao1);
   
    printf("Qual a área da sua cidade em km²:\n");
    scanf("%f", &area1);

    printf("Qual o PIB da sua cidade:\n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turisticos tem sua cidade:\n");
    scanf("%d", &pontosturisticos1);
    densipopulacional1 = populacao1 / area1;

    printf("densidade populacional: %f\n", densipopulacional1);
    PIBpercapita1 = PIB1 / populacao1;

    printf("PIB per Capita: %f\n\n", PIBpercapita1);

printf("CARTA 2!!!\n");
printf("Estado: B\n");
printf("Código da Carta: B02\n");

printf("Qual a populacão da sua cidade:\n");
scanf("%c", &nomecidade2);

printf("Qual a população da sua cidade:\n");
scanf("%d", &populacao2);

printf("Qual a área da sua cidade em km²:\n");
scanf("%f", &area2);

printf("Qual o PIB da sua cidade:\n");
scanf("%f", &PIB2);

printf("Quantos pontos turisticos tem sua cidade:\n");
scanf("%d", &pontosturisticos2);

densipopulacional2 = populacao2 / area2;

printf("densidade populacional: %f\n", densipopulacional2);
PIBpercapita2 = PIB2 / populacao2;

printf("PIB per Capita: %f\n", PIBpercapita2);




    return 0;
}
