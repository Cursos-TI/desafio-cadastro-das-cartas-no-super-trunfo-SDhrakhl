#include <stdio.h>

int main() {
    char estado1[11];
    char codigo1[11];
    char nomecidade1[11];
    int populacao1;
    float area1; // Área em Kilômetros Quadrados.
    float pib1;
    int pt1;

    // Separação.

    char estado2[11];
    char codigo2[11];
    char nomecidade2[11];
    int populacao2;
    float area2;
    float pib2;
    int pt2;
    
    printf("Insira as informações da primeira carta: \n");
    // A inserção de dados fica aqui.
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Codigo: \n");
    scanf("%s", codigo1);

    printf("Cidade: \n");
    scanf("%s", nomecidade1);

    printf("População: \n");
    scanf("%i", &populacao1);

    printf("Área em KM²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pt1);
    float dp = ((float)populacao1 / area1); // DP = Densidade Populacional. Formatar valores para %.2f
    float pibpc = (pib1 / (float)populacao1); // pibpc = PIB per Capita. Formatar valores para %.2f

    printf("Insira as informações da segunda carta: \n");
    //Inserção de dados da segunda carta.
    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Codigo: \n");
    scanf("%s", codigo2);

    printf("Cidade: \n");
    scanf("%s", nomecidade2);

    printf("População: \n");
    scanf("%i", &populacao2);

    printf("Área em KM²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pt2);
    float dp2 = ((float)populacao2 / area2); // DP = Densidade Populacional. Formatar valores para %.2f
    float pibpc2 = (pib2 / (float)populacao2); // pibpc = PIB per Capita. Formatar valores para %.2f

    printf("\nEstas são as cartas:\n");
    // Impressão dos dados das cartas é feita uma após a outra para deixar mais organizado e por medo de quebrar o código.

    printf(" Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %i\n Área em Quilômetros Quadrados: %f\n PIB: %f\n Números de Pontos Turísticos: %i\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n", estado1, codigo1, nomecidade1, populacao1, area1, pib1, pt1, dp, pibpc);
    printf(" Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %i\n Área em Quilômetros Quadrados: %f\n PIB: %f\n Números de Pontos Turísticos: %i\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n", estado2, codigo2, nomecidade2, populacao2, area2, pib2, pt2, dp2, pibpc2);

    return 0;
}