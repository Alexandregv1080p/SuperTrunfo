#include <stdio.h>

int main()
{
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[20], nomeCidade2[20];
    int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int numeroTuristico1, numeroTuristico2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapitaCidade1, pibPerCapitaCidade2;
    printf("<-- Cadastro de cartas de Super Trunfo -->\n");
    printf("Entre com os dados da Carta 1 a ser cadastrada!\n");
    printf("Qual a letra do estado (a letra do estado pode ser escolhida apenas entra A a H)?\n");
    scanf("%c", &estadoCarta1);
    printf("Qual o codigo da carta?\n");
    scanf("%s", &codigoCarta1);
    printf("Qual o nome da cidade?\n");
    fgets(nomeCidade1, 20, stdin);
    printf("Qual o numero populacional?\n");
    scanf("%i", &populacaoCidade1);
    printf("Qual a area da cidade? Ex: 3111.33\n");
    scanf("%f", &areaCidade1);
    printf("Qual a o PIB? Ex: 3111.33\n");
    scanf("%f", &pibCidade1);
    printf("Qual o numero de pontos turisticos da cidade?\n");
    scanf("%i", &numeroTuristico1);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacaoCidade1);
    printf("Area: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Pontos Turisticos: %d\n", numeroTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", populacaoCidade1 / areaCidade1);
    printf("PIB per Capita: %.2f reais\n", pibCidade1 / populacaoCidade1);

    printf("<----------------------------------->\n");
    printf("Entre com os dados da Carta 2 a ser cadastrada!\n");
    printf("Qual a letra do estado (a letra do estado pode ser escolhida apenas entra A a H)?\n");
    scanf(" %c", &estadoCarta2);
    printf("Qual o codigo da carta?\n");
    scanf("%s", &codigoCarta2);
    printf("Qual o nome da cidade?\n");
    fgets(nomeCidade2, 20, stdin);
    printf("Qual o numero populacional?\n");
    scanf("%i", &populacaoCidade2);
    printf("Qual a area da cidade? Ex: 3111.33\n");
    scanf("%f", &areaCidade2);
    printf("Qual a o PIB? Ex: 3111.33\n");
    scanf("%f", &pibCidade2);
    printf("Qual o numero de pontos turisticos da cidade?\n");
    scanf("%i", &numeroTuristico2);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacaoCidade2);
    printf("Area: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Pontos Turisticos: %d\n", numeroTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", populacaoCidade2 / areaCidade2);
    printf("PIB per Capita: %.2f reais\n", pibCidade2 / populacaoCidade2);
    return 0;
}