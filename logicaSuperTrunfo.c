#include <stdio.h>

int main() {

    // declaração de variáveis para armazenamento dos dados das duas cartas

    char NomePais1[50], NomePais2[50];
    int pontosTuristicos1, pontosTuristicos2, comparacao1, comparacao2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // Lendo os dados da carta 1:
    printf("Insira os dados da Carta 1:\n");

    printf("Nome do País: \n");
    scanf("%s", NomePais1);
    printf("População: \n");
    scanf("%u", &populacao1);
    printf("Área em quilômetros quadrados: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Pontos turísticos: \n");
    scanf("%i", &pontosTuristicos1);

    // Lendo os dados da carta 2:
    printf("Insira os dados da Carta 2:\n");

    printf("Nome do País: \n");
    scanf("%s", NomePais2);
    printf("População: \n");
    scanf("%u", &populacao2);
    printf("Área em quilômetros quadrados: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Pontos turísticos: \n");
    scanf("%i", &pontosTuristicos2);
    printf("\n");

    // Cálculo da densidade:
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    // Menu para escolha dos atributos:
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha o primeiro atributo para comparação: ");
    scanf("%d", &comparacao1);
    printf("\n");

    // Menu para escolha do segundo atributo:
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha o segundo atributo para comparação (diferente do primeiro): ");
    scanf("%d", &comparacao2);
    printf("\n");

    // Garantir que o segundo atributo seja diferente do primeiro
    if (comparacao1 == comparacao2) {
        printf("Erro! Você não pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    // Variáveis para armazenar os resultados das comparações (usando double para maior precisão)
    float soma1 = 0.0, soma2 = 0.0;

    // Comparação do primeiro atributo:
    switch (comparacao1) {
        case 1:  // População
            printf("Carta 1: %s\n", NomePais1);
            printf("População: %u\n", populacao1);
            printf("Carta 2: %s\n", NomePais2);
            printf("População: %u\n", populacao2);
            if (populacao1 > populacao2) {
                soma1 += populacao1;
            } else if (populacao1 < populacao2) {
                soma2 += populacao2;
            }
            break;
        case 2:  // Área
            printf("Carta 1: %s\n", NomePais1);
            printf("Área: %f\n", area1);
            printf("Carta 2: %s\n", NomePais2);
            printf("Área: %f\n", area2);
            if (area1 > area2) {
                soma1 += area1;
            } else if (area1 < area2) {
                soma2 += area2;
            }
            break;
        case 3:  // PIB
            printf("Carta 1: %s\n", NomePais1);
            printf("PIB: %f\n", pib1);
            printf("Carta 2: %s\n", NomePais2);
            printf("PIB: %f\n", pib2);
            if (pib1 > pib2) {
                soma1 += pib1;
            } else if (pib1 < pib2) {
                soma2 += pib2;
            }
            break;
        case 4:  // Pontos turísticos
            printf("Carta 1: %s\n", NomePais1);
            printf("Pontos turísticos: %i\n", pontosTuristicos1);
            printf("Carta 2: %s\n", NomePais2);
            printf("Pontos turísticos: %i\n", pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                soma1 += pontosTuristicos1;
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                soma2 += pontosTuristicos2;
            }
            break;
        case 5:  // Densidade demográfica
            printf("Carta 1: %s\n", NomePais1);
            printf("Densidade: %f\n", densidade1);
            printf("Carta 2: %s\n", NomePais2);
            printf("Densidade: %f\n", densidade2);
            if (densidade1 < densidade2) {
                soma1 += densidade1;
            } else if (densidade1 > densidade2) {
                soma2 += densidade2;
            }
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    // Comparação do segundo atributo:
    switch (comparacao2) {
        case 1:  // População
            printf("Carta 1: %s\n", NomePais1);
            printf("População: %u\n", populacao1);
            printf("Carta 2: %s\n", NomePais2);
            printf("População: %u\n", populacao2);
            if (populacao1 > populacao2) {
                soma1 += populacao1;
            } else if (populacao1 < populacao2) {
                soma2 += populacao2;
            }
            break;
        case 2:  // Área
            printf("Carta 1: %s\n", NomePais1);
            printf("Área: %f\n", area1);
            printf("Carta 2: %s\n", NomePais2);
            printf("Área: %f\n", area2);
            if (area1 > area2) {
                soma1 += area1;
            } else if (area1 < area2) {
                soma2 += area2;
            }
            break;
        case 3:  // PIB
            printf("Carta 1: %s\n", NomePais1);
            printf("PIB: %f\n", pib1);
            printf("Carta 2: %s\n", NomePais2);
            printf("PIB: %f\n", pib2);
            if (pib1 > pib2) {
                soma1 += pib1;
            } else if (pib1 < pib2) {
                soma2 += pib2;
            }
            break;
        case 4:  // Pontos turísticos
            printf("Carta 1: %s\n", NomePais1);
            printf("Pontos turísticos: %i\n", pontosTuristicos1);
            printf("Carta 2: %s\n", NomePais2);
            printf("Pontos turísticos: %i\n", pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                soma1 += pontosTuristicos1;
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                soma2 += pontosTuristicos2;
            }
            break;
        case 5:  // Densidade demográfica
            printf("Carta 1: %s\n", NomePais1);
            printf("Densidade: %f\n", densidade1);
            printf("Carta 2: %s\n", NomePais2);
            printf("Densidade: %f\n", densidade2);
            if (densidade1 < densidade2) {
                soma1 += densidade1;
            } else if (densidade1 > densidade2) {
                soma2 += densidade2;
            }
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    

    // Verificando o vencedor
    if (soma1 > soma2) {
        printf("Carta 1 (%s) venceu!\n", NomePais1);
    } else if (soma1 < soma2) {
        printf("Carta 2 (%s) venceu!\n", NomePais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
