#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1
    char carta1[3], estado1[4], codigo1[5], cidade1[31];
    float populacao1, area1;
    int pontos1;

    // Variáveis para a CARTA 2
    char carta2[3], estado2[4], codigo2[5], cidade2[31];
    float populacao2, area2;
    int pontos2;

    printf("\n\n................BEM VINDO AO SUPER TRUNFO..............");

    // CARTA 1
    printf("\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>   CARTA 1   <<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");

    printf("Carta: ");
    scanf("%2s", carta1);

    printf("Estado (ex: 'SP'): ");
    scanf("%3s", estado1);

    printf("Codigo: ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %30[^\n]", cidade1);  // lê até 30 caracteres com espaço

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // CARTA 2
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>   CARTA 2   <<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");

    printf("Carta: ");
    scanf("%2s", carta2);

    printf("Estado (ex: 'SP'): ");
    scanf("%3s", estado2);

    printf("Codigo: ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %30[^\n]", cidade2);  // lê até 30 caracteres com espaço

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    printf("\n\n");

    return 0;
}
