#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char nome1[50], nome2[50];
    char codigoDaCarta1[50], codigoDaCarta2[50];
    char estado1[50], estado2[50];
    int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Atributos calculados
    float pibPerCapta1, pibPerCapta2;
    float densidade1, densidade2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigoDaCarta1);
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite a populacao da primeira cidade: ");
    scanf("%d", &pop1);
    printf("Digite a area da primeira cidade (km²): ");
    scanf("%f", &area1);
    printf("Digite o pib da primeira cidade (milhões R$): ");
    scanf("%f", &pib1);
    printf("Digite o numeros de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontos1);

    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigoDaCarta2);
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite a populacao da segunda cidade: ");
    scanf("%d", &pop2);
    printf("Digite a area da segunda cidade (km²): ");
    scanf("%f", &area2);
    printf("Digite o pib da segunda cidade (milhões R$): ");
    scanf("%f", &pib2);
    printf("Digite o numeros de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontos2);

    // Cálculo dos atributos derivados
    pibPerCapta1 = (pib1 * 1000000) / pop1; // PIB per capita em R$
    pibPerCapta2 = (pib2 * 1000000) / pop2;
    
    densidade1 = pop1 / area1; // Habitantes por km²
    densidade2 = pop2 / area2;

    // Exibição dos dados das cartas
    printf("\n=== DADOS DAS CARTAS ===\n");
    printf("CARTA 1: %s (%s)\n", nome1, codigoDaCarta1);
    printf("Estado: %s\n", estado1);
    printf("População: %d habitantes\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões R$\n", pib1);
    printf("PIB per capita: %.2f R$\n", pibPerCapta1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\nCARTA 2: %s (%s)\n", nome2, codigoDaCarta2);
    printf("Estado: %s\n", estado2);
    printf("População: %d habitantes\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões R$\n", pib2);
    printf("PIB per capita: %.2f R$\n", pibPerCapta2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("Pontos turísticos: %d\n", pontos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    
    // 1. Comparação de População (maior vence)
    printf("POPULAÇÃO: ");
    if (pop1 > pop2) {
        printf("%s vence com %d habitantes\n", nome1, pop1);
    } else if (pop2 > pop1) {
        printf("%s vence com %d habitantes\n", nome2, pop2);
    } else {
        printf("Empate! Ambas têm %d habitantes\n", pop1);
    }

    // 2. Comparação de Área (maior vence)
    printf("ÁREA: ");
    if (area1 > area2) {
        printf("%s vence com %.2f km²\n", nome1, area1);
    } else if (area2 > area1) {
        printf("%s vence com %.2f km²\n", nome2, area2);
    } else {
        printf("Empate! Ambas têm %.2f km²\n", area1);
    }

    // 3. Comparação de PIB (maior vence)
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("%s vence com %.2f milhões R$\n", nome1, pib1);
    } else if (pib2 > pib1) {
        printf("%s vence com %.2f milhões R$\n", nome2, pib2);
    } else {
        printf("Empate! Ambas têm %.2f milhões R$\n", pib1);
    }

    // 4. Comparação de PIB per capita (maior vence)
    printf("PIB PER CAPITA: ");
    if (pibPerCapta1 > pibPerCapta2) {
        printf("%s vence com %.2f R$\n", nome1, pibPerCapta1);
    } else if (pibPerCapta2 > pibPerCapta1) {
        printf("%s vence com %.2f R$\n", nome2, pibPerCapta2);
    } else {
        printf("Empate! Ambas têm %.2f R$\n", pibPerCapta1);
    }

    // 5. Comparação de Densidade Demográfica (MENOR vence - regra especial)
    printf("DENSIDADE DEMOGRÁFICA: ");
    if (densidade1 < densidade2) {
        printf("%s vence com %.2f hab/km² (menor densidade)\n", nome1, densidade1);
    } else if (densidade2 < densidade1) {
        printf("%s vence com %.2f hab/km² (menor densidade)\n", nome2, densidade2);
    } else {
        printf("Empate! Ambas têm %.2f hab/km²\n", densidade1);
    }

    // 6. Comparação de Pontos Turísticos (maior vence)
    printf("PONTOS TURÍSTICOS: ");
    if (pontos1 > pontos2) {
        printf("%s vence com %d pontos turísticos\n", nome1, pontos1);
    } else if (pontos2 > pontos1) {
        printf("%s vence com %d pontos turísticos\n", nome2, pontos2);
    } else {
        printf("Empate! Ambas têm %d pontos turísticos\n", pontos1);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("\n=== RESUMO DAS REGRAS DE COMPARAÇÃO ===\n");
    printf("• População: vence a cidade com MAIOR população\n");
    printf("• Área: vence a cidade com MAIOR área\n");
    printf("• PIB: vence a cidade com MAIOR PIB\n");
    printf("• PIB per capita: vence a cidade com MAIOR PIB per capita\n");
    printf("• Densidade Demográfica: vence a cidade com MENOR densidade (regra especial)\n");
    printf("• Pontos Turísticos: vence a cidade com MAIOR número de pontos\n");

    return 0;
}
