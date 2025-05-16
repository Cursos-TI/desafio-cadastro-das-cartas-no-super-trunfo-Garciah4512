#include <stdio.h>

int main(){
    //Iniciando as variaveis que serão utilizadas na carta1
    char estado1, codigo_cidade1[4], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    //Iniciando as variaveis que serão utilizadas na carta2
    char estado2, codigo_cidade2[4], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    //Se apresentando e pedindo ao usuário que insira as informações necessárias
    printf("Bem vindo ao Jogo Super Trunfo !\n\nIremos comecar com duas cartas.\n\n");
    printf("Insira as informacoes necessarias, conforme solicitado:\n");

    //Inicio das entradas da carta1
    printf("\nCarta1!\n\nDigite uma letra de 'A' a 'H' representando um dos oito estados:\n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta, que deve ser composto pela letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", &codigo_cidade1);

    printf("Digite o nome da Cidade substituindo espacos por '_' (ex: Campo_Grande):\n");
    scanf("%s", &nome_cidade1);

    printf("Digite a quantidade de Habitantes:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da Cidade em quilometros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da Cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos1);

    //Pedindo entradas para Carta2
    printf("\nTudo certo !\n\nVamos para carta 2\n\n");
    printf("\nCarta2!\n\nDigite uma letra de 'A' a 'H' representando um dos oito estados:\n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta, que deve ser composto pela letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", &codigo_cidade2);

    printf("Digite o nome da Cidade substituindo espacos por '_' (ex: Campo_Grande):\n");
    scanf("%s", &nome_cidade2);

    printf("Digite a quantidade de Habitantes:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da Cidade em quilometros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da Cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos2);

    //Agora será exibido todas as informações que foram coletadas
    //Carta 1
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_cidade1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km quadrados\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos1);

    //Carta 2
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_cidade2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km quadrados\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos2);


    return 0;
}
