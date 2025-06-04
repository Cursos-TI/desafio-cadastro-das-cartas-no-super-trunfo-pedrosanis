#include <stdio.h>
#include <math.h>

int main() {
    // Dados do usuário
    char nomeUsuario[11];
    printf("Bem-vindo(a)! Me diga seu nome para começarmos.\n");
    printf("Digite seu primeiro nome: ");
    scanf("%10s", nomeUsuario);
    printf("\nPrazer em te conhecer, %s!\n\n", nomeUsuario);

    // Dados das cartas
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    scanf("%lu %f %f %d", &populacao1, &area1, &pib1, &pontos1);

    // Entrada - Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    scanf("%lu %f %f %d", &populacao2, &area2, &pib2, &pontos2);

    // Cálculos
    float dens1 = populacao1 / area1;
    float dens2 = populacao2 / area2;

    float percapta1 = (pib1 * 1e9) / populacao1;
    float percapta2 = (pib2 * 1e9) / populacao2;

    float super1 = populacao1 + area1 + pib1 + pontos1 + percapta1 + (1 / dens1);
    float super2 = populacao2 + area2 + pib2 + pontos2 + percapta2 + (1 / dens2);

    // Comparações
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional: %d\n", dens1 < dens2);  // menor vence
    printf("PIB per Capta: %d\n", percapta1 > percapta2);
    printf("Super Poder: %d\n", super1 > super2);

    return 0;
}
