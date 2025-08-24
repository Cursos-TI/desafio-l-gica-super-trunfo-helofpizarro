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
    int opcao;

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

    // Menu de comparação usando switch
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per capita\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Pontos Turísticos\n");
    printf("7 - Comparar todos os atributos\n");
    printf("Digite sua opção (1-7): ");
    scanf("%d", &opcao);

    // Comparação de Cartas usando switch e if-else:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    
    switch(opcao) {
        case 1:
            printf("COMPARAÇÃO: POPULAÇÃO\n");
            if (pop1 > pop2) {
                printf("VENCEDOR: %s com %d habitantes\n", nome1, pop1);
                printf("PERDEDOR: %s com %d habitantes\n", nome2, pop2);
            } else if (pop2 > pop1) {
                printf("VENCEDOR: %s com %d habitantes\n", nome2, pop2);
                printf("PERDEDOR: %s com %d habitantes\n", nome1, pop1);
            } else {
                printf("EMPATE! Ambas têm %d habitantes\n", pop1);
            }
            break;
            
        case 2:
            printf("COMPARAÇÃO: ÁREA\n");
            if (area1 > area2) {
                printf("VENCEDOR: %s com %.2f km²\n", nome1, area1);
                printf("PERDEDOR: %s com %.2f km²\n", nome2, area2);
            } else if (area2 > area1) {
                printf("VENCEDOR: %s com %.2f km²\n", nome2, area2);
                printf("PERDEDOR: %s com %.2f km²\n", nome1, area1);
            } else {
                printf("EMPATE! Ambas têm %.2f km²\n", area1);
            }
            break;
            
        case 3:
            printf("COMPARAÇÃO: PIB\n");
            if (pib1 > pib2) {
                printf("VENCEDOR: %s com %.2f milhões R$\n", nome1, pib1);
                printf("PERDEDOR: %s com %.2f milhões R$\n", nome2, pib2);
            } else if (pib2 > pib1) {
                printf("VENCEDOR: %s com %.2f milhões R$\n", nome2, pib2);
                printf("PERDEDOR: %s com %.2f milhões R$\n", nome1, pib1);
            } else {
                printf("EMPATE! Ambas têm %.2f milhões R$\n", pib1);
            }
            break;
            
        case 4:
            printf("COMPARAÇÃO: PIB PER CAPITA\n");
            if (pibPerCapta1 > pibPerCapta2) {
                printf("VENCEDOR: %s com %.2f R$\n", nome1, pibPerCapta1);
                printf("PERDEDOR: %s com %.2f R$\n", nome2, pibPerCapta2);
            } else if (pibPerCapta2 > pibPerCapta1) {
                printf("VENCEDOR: %s com %.2f R$\n", nome2, pibPerCapta2);
                printf("PERDEDOR: %s com %.2f R$\n", nome1, pibPerCapta1);
            } else {
                printf("EMPATE! Ambas têm %.2f R$\n", pibPerCapta1);
            }
            break;
            
        case 5:
            printf("COMPARAÇÃO: DENSIDADE DEMOGRÁFICA (menor vence)\n");
            if (densidade1 < densidade2) {
                printf("VENCEDOR: %s com %.2f hab/km² (menor densidade)\n", nome1, densidade1);
                printf("PERDEDOR: %s com %.2f hab/km²\n", nome2, densidade2);
            } else if (densidade2 < densidade1) {
                printf("VENCEDOR: %s com %.2f hab/km² (menor densidade)\n", nome2, densidade2);
                printf("PERDEDOR: %s com %.2f hab/km²\n", nome1, densidade1);
            } else {
                printf("EMPATE! Ambas têm %.2f hab/km²\n", densidade1);
            }
            break;
            
        case 6:
            printf("COMPARAÇÃO: PONTOS TURÍSTICOS\n");
            if (pontos1 > pontos2) {
                printf("VENCEDOR: %s com %d pontos turísticos\n", nome1, pontos1);
                printf("PERDEDOR: %s com %d pontos turísticos\n", nome2, pontos2);
            } else if (pontos2 > pontos1) {
                printf("VENCEDOR: %s com %d pontos turísticos\n", nome2, pontos2);
                printf("PERDEDOR: %s com %d pontos turísticos\n", nome1, pontos1);
            } else {
                printf("EMPATE! Ambas têm %d pontos turísticos\n", pontos1);
            }
            break;
            
        case 7:
            printf("COMPARAÇÃO: TODOS OS ATRIBUTOS\n");
            
            // População
            printf("\n1. POPULAÇÃO: ");
            if (pop1 > pop2) {
                printf("%s vence (%d > %d)\n", nome1, pop1, pop2);
            } else if (pop2 > pop1) {
                printf("%s vence (%d > %d)\n", nome2, pop2, pop1);
            } else {
                printf("Empate (%d = %d)\n", pop1, pop2);
            }
            
            // Área
            printf("2. ÁREA: ");
            if (area1 > area2) {
                printf("%s vence (%.2f > %.2f)\n", nome1, area1, area2);
            } else if (area2 > area1) {
                printf("%s vence (%.2f > %.2f)\n", nome2, area2, area1);
            } else {
                printf("Empate (%.2f = %.2f)\n", area1, area2);
            }
            
            // PIB
            printf("3. PIB: ");
            if (pib1 > pib2) {
                printf("%s vence (%.2f > %.2f)\n", nome1, pib1, pib2);
            } else if (pib2 > pib1) {
                printf("%s vence (%.2f > %.2f)\n", nome2, pib2, pib1);
            } else {
                printf("Empate (%.2f = %.2f)\n", pib1, pib2);
            }
            
            // PIB per capita
            printf("4. PIB PER CAPITA: ");
            if (pibPerCapta1 > pibPerCapta2) {
                printf("%s vence (%.2f > %.2f)\n", nome1, pibPerCapta1, pibPerCapta2);
            } else if (pibPerCapta2 > pibPerCapta1) {
                printf("%s vence (%.2f > %.2f)\n", nome2, pibPerCapta2, pibPerCapta1);
            } else {
                printf("Empate (%.2f = %.2f)\n", pibPerCapta1, pibPerCapta2);
            }
            
            // Densidade Demográfica (regra especial)
            printf("5. DENSIDADE DEMOGRÁFICA: ");
            if (densidade1 < densidade2) {
                printf("%s vence (%.2f < %.2f) - menor densidade\n", nome1, densidade1, densidade2);
            } else if (densidade2 < densidade1) {
                printf("%s vence (%.2f < %.2f) - menor densidade\n", nome2, densidade2, densidade1);
            } else {
                printf("Empate (%.2f = %.2f)\n", densidade1, densidade2);
            }
            
            // Pontos Turísticos
            printf("6. PONTOS TURÍSTICOS: ");
            if (pontos1 > pontos2) {
                printf("%s vence (%d > %d)\n", nome1, pontos1, pontos2);
            } else if (pontos2 > pontos1) {
                printf("%s vence (%d > %d)\n", nome2, pontos2, pontos1);
            } else {
                printf("Empate (%d = %d)\n", pontos1, pontos2);
            }
            break;
            
        default:
            printf("Opção inválida! Digite um número entre 1 e 7.\n");
            break;
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
