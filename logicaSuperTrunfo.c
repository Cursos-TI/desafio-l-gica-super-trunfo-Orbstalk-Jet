#include <stdio.h>

int main(void){
    // variáveis da carta 1
    char Pais1[50], CodigoCarta1[15], Cidade1[40];
    unsigned long int Populacao1;
    float Area1, Pib1;
    int Pontosturisticos1;

    // variáveis da carta 2
    char Pais2[50], CodigoCarta2[15], Cidade2[40];
    unsigned long int Populacao2;
    float Area2, Pib2;
    int Pontosturisticos2;

    // Mensagem inicial
    printf("=== SUPER TRUNFO - NÍVEL MESTRE ===\n\n");
    printf("Por favor, insira os dados das cartas.\n\n");

    // Carta 1
    printf("Carta 1\n");
    printf("País: ");
    scanf(" %[^\n]", Pais1);
    printf("Código (até 12 caracteres): ");
    scanf("%14s", CodigoCarta1);
    printf("Cidade: ");
    scanf(" %[^\n]", Cidade1);
    printf("População: ");
    scanf("%lu", &Populacao1);
    printf("Área em km²: ");
    scanf("%f", &Area1);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &Pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos1);

    // Carta 2
    printf("\nCarta 2\n");
    printf("País: ");
    scanf(" %[^\n]", Pais2);
    printf("Código (até 12 caracteres): ");
    scanf("%14s", CodigoCarta2);
    printf("Cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("População: ");
    scanf("%lu", &Populacao2);
    printf("Área em km²: ");
    scanf("%f", &Area2);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &Pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos2);

    float Densidade1 = (float) Populacao1 / Area1;
    float Densidade2 = (float) Populacao2 / Area2;

    // Atributos de escolha
    int atributo1 = 0, atributo2 = 0;

    // Função para exibir menu feito para o usuario
    do {
        printf("\nEscolha o primeiro atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção: ");
        scanf("%d", &atributo1);
    } while(atributo1 < 1 || atributo1 > 5);

    // Segundo menu dinâmico feito para o usuario
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        for(int i=1; i<=5; i++){
            if(i != atributo1){
                switch(i){
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Demográfica\n"); break;
                }
            }
        }
        printf("Opção: ");
        scanf("%d", &atributo2);
    } while(atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Definição dos valores dos atributos
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    switch(atributo1){
        case 1: valor1_c1 = Populacao1; valor1_c2 = Populacao2; break;
        case 2: valor1_c1 = Area1; valor1_c2 = Area2; break;
        case 3: valor1_c1 = Pib1; valor1_c2 = Pib2; break;
        case 4: valor1_c1 = Pontosturisticos1; valor1_c2 = Pontosturisticos2; break;
        case 5: valor1_c1 = Densidade1; valor1_c2 = Densidade2; break;
    }

    switch(atributo2){
        case 1: valor2_c1 = Populacao1; valor2_c2 = Populacao2; break;
        case 2: valor2_c1 = Area1; valor2_c2 = Area2; break;
        case 3: valor2_c1 = Pib1; valor2_c2 = Pib2; break;
        case 4: valor2_c1 = Pontosturisticos1; valor2_c2 = Pontosturisticos2; break;
        case 5: valor2_c1 = Densidade1; valor2_c2 = Densidade2; break;
    }

    // Comparação sendo feita
    int score1 = 0, score2 = 0;

    // Atributo 1
    if(atributo1 == 5){ // Densidade, menor vence
        (valor1_c1 < valor1_c2) ? score1++ : score2++;
    } else {
        (valor1_c1 > valor1_c2) ? score1++ : score2++;
    }

    // Atributo 2
    if(atributo2 == 5){ // Densidade
        (valor2_c1 < valor2_c2) ? score1++ : score2++;
    } else {
        (valor2_c1 > valor2_c2) ? score1++ : score2++;
    }

    // Resultado sendo exibido
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("País 1: %s\n", Pais1);
    printf("País 2: %s\n\n", Pais2);

    printf("Atributo 1 (%d): Carta1 = %.2f | Carta2 = %.2f\n", atributo1, valor1_c1, valor1_c2);
    printf("Atributo 2 (%d): Carta1 = %.2f | Carta2 = %.2f\n\n", atributo2, valor2_c1, valor2_c2);

    // Programa definindo vencedor
    (score1 > score2) ? 
        printf("Carta 1 (%s) venceu!\n", Pais1) :
        (score2 > score1) ?
            printf("Carta 2 (%s) venceu!\n", Pais2) :
            printf("Empate!\n");

    return 0;
}
