#include <stdio.h>

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
    int pontos1, pontos2

    // Atributos calculados
    float pibPerCapta1, pibPerCapta2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite o codigo da carta: ")
    scanf("%[^\n]", codigoDaCarta1)
    printf("Digite o nome do estado: ")
    scanf("%[^\n]", estado1)
    printf("Digite a populacao da primeira cidade: ");
    scanf("%lu", &pop1);
    printf("Digite a area da primeira cidade: ");
    scanf("%f", &area1);
    printf("Digite o pib da primeira cidade: ");
    scanf("%f", pib1);
    printf("Digite o numeros de pontos turisticos da primeira cidade: ");
    scanf("%d", pontos2);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite o codigo da carta: ")
    scanf("%[^\n]", codigoDaCarta2)
    printf("Digite o nome do estado: ")
    scanf("%[^\n]", estado2)
    printf("Digite a populacao da primeira cidade: ");
    scanf("%lu", &pop2);
    printf("Digite a area da primeira cidade: ");
    scanf("%f", &area2);
    printf("Digite o pib da primeira cidade: ");
    scanf("%f", pib2);
    printf("Digite o numeros de pontos turisticos da primeira cidade: ");
    scanf("%d", pontos2);

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (pop1 > pop2) {
        printf("Cidade 1 tem maior população. \n")
    } else {
        printf("Cidade 2 tem maior população.\n")
    }


    if (area1 > area2) {
        printf("Cidade 1 tem maior area. \n")
    } else {
        printf("Cidade 2 tem maior area.\n")
    }


    if (estado1 > estado2) {
        printf("Cidade 1 tem maior estado. \n")
    } else {
        printf("Cidade 2 tem maior estado.\n")
    }


     if (codigoDaCarta1 > codigoDaCarta2) {
        printf("Cidade 1 tem maior codigo da carta. \n")
    } else {
        printf("Cidade 2 tem maior codigo da carta.\n")
    }


     if (pib1 > pib2) {
        printf("Cidade 1 tem maior pib. \n")
    } else {
        printf("Cidade 2 tem maior pib.\n")
    }

      if (pontos1 > pontos2) {
        printf("Cidade 1 tem maior pontos turisticos. \n")
    } else {
        printf("Cidade 2 tem maior pontos turisticos.\n")
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
