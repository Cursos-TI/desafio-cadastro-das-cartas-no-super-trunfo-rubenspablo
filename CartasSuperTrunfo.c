#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Dencidade e PibPercapta
// Nível Mestre
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // jogo do Super Trunfo Novato
    // as variaveis foram declaradas juntas das duas cartas
    char estado1[40], estado2[40];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    char letra1, letra2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPercapta1, pibPercapta2;
    double SuperPoder1, SuperPoder2; // Variáveis para o Super Poder
    
    
    // Apresentação do jogo
    printf("**** SUPER TRUNFO ****\n");
    printf("Olá jogador, seja bem vindo ao Super Trunfo! Um Mundo de disputas e guerras.\n");
    printf("Onde cada jogador enfrenta desafios jamais vistos, e batalhas épicas são vistas a todo o momento.\n");
    printf("Para esse desafio teremos que montar suas cartas desafiadoras.\n");
    printf("Você terá direito a duas cartas inicialmente.\n");
    printf("Então seja inteligente nas suas escolhas e boa sorte.\n\n");


    //carta 01
    //escolha do Estado
    printf("Vamos começar com a primeira carta.\n\n");
    printf("Escolha seu estado.\n");
    scanf(" %[^\n]", estado1);

    //escolha da letra
    printf("Escolha uma letra indicando o inicio do codigo da sua carta entre A - H\n");
    scanf(" %c", &letra1);
    printf("A Letra escolhida por você foi %c \n", letra1);

    //escolha do código numerico
    printf("Agora vamos digitar um codigo para juntar com a letra que você ja escolheu\n");
    printf("Então vamos lá digite o codigo, os números seram de 01 à 04\n");
    scanf("%s", codigo1);

    // resultado do código
    printf("Sua carta tem o codigo = %c%s\n", letra1, codigo1);

    //escolha da cidade
    printf("Agora vamos preencher os dados da sua carta\n");
    printf("Qual o nome da sua cidade?\n");
    scanf(" %[^\n]", cidade1);

    //população da cidade
    printf("Qual a sua população?\n");
    scanf("%d", &populacao1);

    //área demográfica da cidade
    printf("Qual a sua área em Km²?\n");
    scanf("%f", &area1);

    //O PIB da cidade
    printf("Qual o seu PIB em Bilhões de Reais (so precisa escrever os numeros)?\n");
    scanf("%f", &pib1);

    //pontos turísticos da cidade
    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%d", &pontos1);
    printf("\n===Parabens você acaba de concluir sua primeira carta!===\n\n");

    // Calculo da Densidade Demográfica
    densidade1 = (float) populacao1 / area1;

    //Calculo do pib percapta
    pibPercapta1 = (float) pib1 / populacao1;

    // Calculo do Super Poder
    SuperPoder1 = populacao1 + area1 + pib1 + pontos1 + (1 / densidade1) + pibPercapta1;


    // Carta 02
    printf("Vamos começar com a segunda carta.\n");
    printf("Lembre-se seja inteligente nas escolhas\n\n");

    // escolha do estado 2
    printf("Escolha seu estado.\n");
    scanf(" %[^\n]", estado2);

    //escolha da letra
    printf("Escolha uma letra indicando o inicio do codigo da sua carta entre A - H\n");
    scanf(" %c", &letra2);
    printf("A Letra escolhida por você foi %c\n", letra2);

    //escolha do código numerico 2
    printf("Agora vamos digitar um codigo para juntar com a letra que você ja escolheu\n");
    printf("Então vamos lá digite o codigo, os números seram de 01 à 04\n");
    scanf("%s", codigo2);

    // resultado do código 2
    printf("Sua carta tem o codigo = %c%s\n", letra2, codigo2);

    //preenchimento cidade 2
    printf("Agora vamos preencher os dados da sua carta\n");
    printf("Qual o nome da sua cidade?\n");
    scanf(" %[^\n]", cidade2);

    //população da cidade 2
    printf("Qual a sua população?\n");
    scanf("%d", &populacao2);

    //área demográfica da cidade 2
    printf("Qual a sua área em Km²?\n");
    scanf("%f", &area2);

    //O PIB da cidade 2
    printf("Qual o seu PIB em Bilhões de Reais (so precisa escrever os numeros)?\n");
    scanf("%f", &pib2);

    //pontos turísticos da cidade 2
    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%d", &pontos2);
    printf("\n===Parabens você acaba de concluir sua segunda carta!===\n\n");

    // Calculo do Super Poder 2
    SuperPoder2 = populacao2 + area2 + pib2 + pontos2 + (1 / densidade2) + pibPercapta2;


    // Calculo da Densidade Demográfica 2
    densidade2 = (float) populacao2 / area2;
    //calculo ddo pibpercapta 2
    pibPercapta2 = (float) pib2 / populacao2; 

    printf("Agora vamos ver o resultado de suas cartas\n\n");


    // resultado final

    printf("Carta 01\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %c%s\n", letra1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d de habitantes.\n", populacao1);
    printf("Área: %.2f Km².\n", area1);
    printf("PIB: %.2f bilhões de Reais.\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Demográfica: %.2f habitantes por Km².\n", densidade1);
    printf("PIB Per Capta: %.2f bilhões de Reais por habitante.\n\n", pibPercapta1);
    printf("Super Poder: %.2f\n\n", SuperPoder1);

    printf("Carta 02\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%s\n", letra2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d de habitantes.\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Demográfica: %.2f habitantes por Km²\n", densidade2);
    printf("PIB Per Capta: %.2f bilhões de Reais por habitante\n\n", pibPercapta2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);

    //Comparação das Cartas
    printf("Vamos comparar as cartas\n");
    printf(" A carta 1 tem  a população maior que a carta 2? %d\n", (populacao1 > populacao2));
    printf(" A carta 1 tem a área maior que a carta 2? %d\n", (area1 > area2));
    printf(" A carta 1 tem o PIB maior que a carta 2? %d\n", (pib1 > pib2));
    printf(" A carta 1 tem mais pontos turísticos que a carta 2? %d\n", (pontos1 > pontos2));
    printf(" A carta 1 tem a densidade demográfica maior que a carta 2? %d\n", (densidade1 > densidade2));
    printf(" A carta 1 tem o PIB Per Capta maior que a carta 2? %d\n", (pibPercapta1 > pibPercapta2));
    printf(" A carta 1 tem o Super Poder maior que a carta 2? %d\n", (SuperPoder1 > SuperPoder2));

    printf("Agora você conhece suas cartas e está preparado para o novo mundo\n");

    return 0;
}
