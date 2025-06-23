#include <stdio.h>

int main() {
    char estado[20];
    char codigo[29];
    char nomedaCidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;

    printf("Digite o estado: \n");
    scanf(" %[^\n]", estado);
    printf("Digite o código da carta: \n");
    scanf(" %[^\n]", codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomedaCidade);
    printf("Digite a população do estado: \n");
    scanf("%d", &populacao);
    printf("Digite a área do estado: \n");
    scanf("%f", &area);
    printf("Digite o PIB do estado: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turísticos do cidade: \n");
    scanf("%d", &pontosTuristicos);

    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo);
    printf("nome da cidade: %s \n", nomedaCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Pontos turísticos: %d \n", pontosTuristicos);
   

    return 0;

}