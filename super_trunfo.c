#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    // Carta1
    // Definicão das variaveis so sistema: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[20];
    char codigo_cidade1[20];
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area_km1;
    float pib1;   
    int numero_ponto_turistico1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Variaveis Carta2
    char estado2[20];
    char codigo_cidade2[20];
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area_km2;
    float pib2;   
    int numero_ponto_turistico2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Recebendo a entrada do usuarios com as informacoes de cada estado.
    printf("Informe o nome do estado: \n");
    scanf("%s", estado1);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", codigo_cidade1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Informe o numero da populacao: \n");
    scanf("%lu", &populacao1);
    printf("Informe o a area em km quadrado: \n");
    scanf("%f", &area_km1);
    printf("Informe o pib do estado: \n");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turisticos do estado: \n");
    scanf("%d", &numero_ponto_turistico1);

    printf("++++++++ ==================== ++++++++\n");

    // Exibindo os dados informados pelo usuarios
    printf("Nome do estado: %s\n", estado1);
    printf("Codigo da cidade: %s\n", codigo_cidade1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Numero da populacao: %lu\n", populacao1);
    printf("Area em km: %.2f\n", area_km1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numero_ponto_turistico1);

    printf("++++++++ ==================== ++++++++\n");

    // Calcular a Densidade Populacional:
    densidade_populacional1 = populacao1 / area_km1;
    // Calcular o PIB per Capita
    pib_per_capita1 = pib1 / populacao1;

    printf("Densidade Populacional Carta1: %.2f\n", densidade_populacional1);
    printf("PIB per Capita Carta1: %.2f\n", pib_per_capita1);

    printf("++++++++ ==================== ++++++++\n");
    
	 // Super poder carta1

    float super_poder1 = (float)populacao1 + area_km1 + (float)pib1 + (float)numero_ponto_turistico1 + (float)pib_per_capita1 + (1.0f / densidade_populacional1);

    
    // Carta2

    printf("Informe o nome do estado: \n");
    scanf("%s", estado2);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", codigo_cidade2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Informe o numero da populacao: \n");
    scanf("%lu", &populacao2);
    printf("Informe o a area em km quadrado: \n");
    scanf("%f", &area_km2);
    printf("Informe o pib do estado: \n");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos do estado: \n");
    scanf("%d", &numero_ponto_turistico2);

    printf("++++++++ ==================== ++++++++\n");

    // Exibindo os dados informados pelo usuarios
    printf("Nome do estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", codigo_cidade2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Numero da populacao: %lu\n", populacao2);
    printf("Area em km: %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numero_ponto_turistico2);

    printf("++++++++ ==================== ++++++++\n");

    // Calcular a Densidade Populacional:
    densidade_populacional2 = populacao2 / area_km2;
    // Calcular o PIB per Capita
    pib_per_capita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    printf("++++++++ ==================== ++++++++\n");
    
    float super_poder2 = (float)populacao2 + area_km2 + (float)pib2 + (float)numero_ponto_turistico2 + (float)pib_per_capita2 + (1.0f / densidade_populacional2);

    // Exibição do super poder
    
    printf("\n=== Comparação de Cartas ===\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    if (area_km1 > area_km2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (numero_ponto_turistico1 > numero_ponto_turistico2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    printf("++++++++ ==================== ++++++++\n");
    
    printf("Super poder Carta 1: %.2f\n", super_poder1);
    printf("Super poder Carta 2: %.2f\n", super_poder2);

    printf("++++++++ ==================== ++++++++\n");
    return 0;
}