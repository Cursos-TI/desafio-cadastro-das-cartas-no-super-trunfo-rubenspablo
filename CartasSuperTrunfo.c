int main() {
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;

    // Mensagens de boas-vindas
    printf("=== SUPER TRUNFO - PAÍSES ===\n");
    printf("\n\nOlá jogador, seja bem-vindo!\n");
    printf("\nPrimeiramente vamos começar criando duas cartas.\n");

    printf("\nCada carta vai ter o nome da cidade, com suas respectivas informações.\n");
    printf("\nJogador, você irá criar sua primeira carta agora.\n");
    printf("\nCrie a carta de sua cidade com suas respectivas informações:\n");

    // Gravando informalções da carta A
    printf("Qual o nome da sua cidade A?\n");
    scanf(" %s", cidade);

    printf("Qual o número de habitantes da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual é o PIB da sua cidade (em bilhões)?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos há na sua cidade?\n");
    scanf("%d", &pontos_turisticos);
    printf("--------------------------------\n");

    // Exibe Carta A
    printf("\nOk jogador, vamos ver o que temos:\n\n");

    printf("Até agora estamos assim:\n");
    printf("\nCarta A:\n       == %s ==\n", cidade);

    printf("--------------------------------\n");
    printf("População: %d de habitantes\n", populacao);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d pontos turisticos\n", pontos_turisticos);
    printf("--------------------------------\n");

    // Gravando informações da carta B  
    printf("\nEntão agora vamos para proxima carta.\n");
    printf("Carta B:\n");


    printf("\nQual o Nome da cidade?\n");
    scanf("%s", cidade2);

    printf("Qual o número de habitantes da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos existem na cidade?\n");
    scanf("%d", &pontos_turisticos2);
    printf("--------------------------------\n");

    // Exibe carta B
    printf("Prontinho agora temos a carta B:\n");
    printf("\nCarta B:\n     == %s ==\n", cidade2);

    printf("----------------------------------\n");
    printf("População: %d de habitantes\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d pontos turisticos\n", pontos_turisticos2);
    printf("----------------------------------\n");

    //resume os dados das cartas
    printf("\nÓtimo agora ja temos as duuas cartas:\n");

    printf("\nCarta A:\n\n    == %s ==\n", cidade);

    printf("--------------------------------\n");
    printf("População: %d de habitantes\n", populacao);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d pontos turisticos\n", pontos_turisticos);
    printf("--------------------------------\n");
    printf("\nCarta B:\n\n     == %s ==\n", cidade2);

    printf("----------------------------------\n");
    printf("População: %d de habitantes\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d pontos turisticos\n", pontos_turisticos2);
    printf("----------------------------------\n\n");






    return 0;
}