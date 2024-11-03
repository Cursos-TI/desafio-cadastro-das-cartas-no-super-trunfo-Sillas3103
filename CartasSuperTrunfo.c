#include <stdio.h>

int main() {
    
   char nome[30];
   int codigo;
   int populacao;
   float area;
   float PIB;
   int num_pontos_tour;

    printf("Digite o nome:\n");
    scanf("%s", &nome);

    printf("Digite código da cidade:\n");
    scanf("%d", &codigo);

    printf("Digite o numero da população:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    scnf("%f", &area );

    printf("Digite o PIB da cidade:\n");
    scnf("%f", &PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &num_pontos_tour);


    return 0;
}
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
     // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.