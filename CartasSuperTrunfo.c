#include <stdio.h>

int main() {
    char estado1[11];
    char codigo1[11];
    char nomecidade1[11];
    int populacao1;
    float area1; // Área em Kilômetros Quadrados.
    float pib1;
    int pt1; // PT = Pontos Turísticos.

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
    scanf(" %s", estado1);

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

    printf("\nEstas são as cartas:\n");
    // Impressão dos dados das cartas é feita uma após a outra para deixar mais organizado e por medo de quebrar o código.

    printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %i\n Área em Quilômetros Quadrados: %f\n PIB: %f\n Números de Pontos Turísticos: %i\n", estado1, codigo1, nomecidade1, populacao1, area1, pib1, pt1);
    printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %i\n Área em Quilômetros Quadrados: %f\n PIB: %f\n Números de Pontos Turísticos: %i\n", estado2, codigo2, nomecidade2, populacao2, area2, pib2, pt2);

return 0;
}
