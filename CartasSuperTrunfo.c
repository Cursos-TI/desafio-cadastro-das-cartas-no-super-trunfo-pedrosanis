// versão 1
#include <stdio.h>

int main() {
    // Carta 1
    char estado_1;
    char codigo_1[4];
    char nomeCidade_1[50];
    int populacaoCidade_1;
    float areaCidade_1;
    float pibCidade_1;
    int qtdPontosTuristicosCidade_1;
    
    // Carta 2
    char estado_2;
    char codigo_2[4];
    char nomeCidade_2[50];
    int populacaoCidade_2;
    float areaCidade_2;
    float pibCidade_2;
    int qtdPontosTuristicosCidade_2;
    
    // Dados do Usuário
    char nomeUsuario[11];
    
    // Cadastro do Usuário
    printf("Bem-vindo(a)! Me diga seu nome para começarmos.\n");
    printf("Digite seu primeiro nome: ");
    scanf("%10s", nomeUsuario);
    printf("\nPrazer em te conhecer, %s!\n\n", nomeUsuario);
    
    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite uma letra maiúscula de 'A' a 'H' (estado): ");
    scanf(" %c", &estado_1);
    printf("Digite o código da carta (3 caracteres, ex.: A01): ");
    scanf("%3s", codigo_1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade_1); // lê nome com espaços
    printf("Digite a população da cidade: ");
    scanf("%d", &populacaoCidade_1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &areaCidade_1);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pibCidade_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicosCidade_1);

    printf("\n");

    // Cadastro da Carta 2

    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite uma letra maiúscula de 'A' a 'H' (estado): ");
    scanf(" %c", &estado_2);
    printf("Digite o código da carta (3 caracteres, ex.: B02): ");
    scanf("%3s", codigo_2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade_2); // lê nome com espaços
    printf("Digite a população da cidade: ");
    scanf("%d", &populacaoCidade_2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &areaCidade_2);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pibCidade_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicosCidade_2);

    printf("\n");

    // Exibição dos Dados
    printf("=== Cartas Cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf(" Estado: %c\n", estado_1);
    printf(" Código: %s\n", codigo_1);
    printf(" Cidade: %s\n", nomeCidade_1);
    printf(" População: %d habitantes\n", populacaoCidade_1);
    printf(" Área: %.2f km²\n", areaCidade_1);
    printf(" PIB: R$ %.2f bilhões\n", pibCidade_1);
    printf(" Pontos Turísticos: %d\n\n", qtdPontosTuristicosCidade_1);

    printf("Carta 2:\n");
    printf(" Estado: %c\n", estado_2);
    printf(" Código: %s\n", codigo_2);
    printf(" Cidade: %s\n", nomeCidade_2);
    printf(" População: %d habitantes\n", populacaoCidade_2);
    printf(" Área: %.2f km²\n", areaCidade_2);
    printf(" PIB: R$ %.2f bilhões\n", pibCidade_2);
    printf(" Pontos Turísticos: %d\n", qtdPontosTuristicosCidade_2);

    return 0;
}
