#include <stdio.h>

int main(void){
    char Pais1[50];
    char CodigoCarta1[15];
    char Cidade1[40];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int Pontosturisticos1;
    
    char Pais2[50];
    char CodigoCarta2[15];
    char Cidade2[30];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int Pontosturisticos2;

    //print trunfo
    printf("Seja bem vindo ao Super Trunfo\n");
    printf("Por favor insira os dados de suas cartas\n");

    //Inputs da Carta 1 
    printf("Carta1\n");

    printf("País): ");
    scanf(" %[^\n]", Pais1);//espaço deixado no começo dos parenteses para anular linha nula criada pela terminação do input sendo Enter, tbm se aplica a carta 2

    printf("Código em até 12 caracteres: ");
    scanf("%14s", CodigoCarta1);
    
    printf("Cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("População: ");
    scanf("%lu", &Populacao1);

    printf("Área em km²: ");
    scanf("%f", &Area1);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &Pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos1);

    //Inputs da Carta 2
    printf("Carta2\n");
    
    printf("País: ");
    scanf(" %[^\n]", Pais2);

    printf("Código em até 12 caracteres: ");
    scanf("%14s", CodigoCarta2);
    
    printf("Cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("População: ");
    scanf("%lu", &Populacao2);

    printf("Área em km²: ");
    scanf("%f", &Area2);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &Pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos2);
    
    //calculos de densidade populacional e Pib per Capita das cartas 1 e 2 
    //Carta 1 
    float Densidadepopu1 =(float) Populacao1 / Area1; //casting por (float), logica se aplicando aos outros tbm
    float PibperCapita1 = (Pib1 * 1000000000.f) / (float) Populacao1; //(PIB1 * 1000000000) priorazação do calculo do Pib para converter bilhoes em reais, se aplica aos outros tbm
    //Carta2
    float Densidadepopu2 = (float) Populacao2 / Area2;
    float PibperCapita2 = (Pib2 * 1000000000.0f) / (float) Populacao2;

    if (PibperCapita1 > PibperCapita2){ //se o PibperCapita1 for maior que o PibperCapita2 a carta1 vence 
        printf("Carta 1- Pib per capita: %f\n", PibperCapita1);
        printf("Carta 1- Pib per capita: %f\n", PibperCapita2);
        printf("Resultado: Carta 1 venceu\n");
    } else if (PibperCapita1 < PibperCapita2){ //se o PibperCapita1 for menor o PibperCapita 2 a carta2 vence
        printf("Carta 1- Pib per capita: %f\n", PibperCapita1);
        printf("Carta 1- Pib per capita: %f\n", PibperCapita2);
        printf("Resultado: Carta 2 venceu\n");
    } else{ //se as duas variaveis forem iguais as cartas empataram em seus valores
        printf("Carta 1- Pib perCapita: %f\n", PibperCapita1);
        printf("Carta 1- Pib perCapita: %f\n", PibperCapita2);
        printf("Resultado: Carta 1 e 2 empataram\n");
    }

    int Opcoes;
    printf("Escolha um dos atributos para comparação dos valores entre as cartas\n");
    printf("1-Populção\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Pontos Turísticos\n");
    printf("5-Densidade Populacional(Demográfica)\n");
    ("Insira: ");
    scanf(" %d", &Opcoes);
    
    printf("País1: %s\n", Pais1);
    printf("País2: %s\n", Pais2);

    switch(Opcoes) {
        case 1: 
            printf("Atributo escolhido: População\n");
            printf("Carta1: %lu\n", Populacao1);
            printf("Carta2: %lu\n", Populacao2);
            int ComparaPopu = Populacao1 > Populacao2;
            if (ComparaPopu ==1 || ComparaPopu == 0) {
                if (ComparaPopu ==1) {
                    printf("Carta 1 venceu\n"); } 
                else {
                    printf("Carta 2 venceu\n"); }
                } 
            else { 
                printf("Os atributos das cartas empataram\n");
            }
        break;
        case 2: 
            printf("Atributo escolhido: Área\n");
            printf("Carta1: %.2f\n", Area1);
            printf("Carta2: %.2f\n", Area2);

            int ComparaArea = Area1 > Area2;
            if (ComparaArea ==1 || ComparaArea == 0) {
                if (ComparaArea ==1) {
                    printf("Carta 1 venceu\n"); } 
                else {
                    printf("Carta 2 venceu\n"); }
                } 
            else { 
                printf("Os atributos das cartas empataram\n");
            }
        break;
        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("Carta1: %.2f\n", Pib1);
            printf("Carta2: %.2f\n", Pib2);

            int ComparaPIB = Pib1 > Pib2;
            if (ComparaPIB ==1 || ComparaPIB == 0) {
                if (ComparaPIB ==1) {
                    printf("Carta 1 venceu\n"); } 
                else {
                    printf("Carta 2 venceu\n"); }
                } 
            else { 
                printf("Os atributos das cartas empataram\n");
            }
        break;
        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("Carta1: %d\n", Pontosturisticos1);
            printf("Carta2: %d\n", Pontosturisticos2);
        
            int ComparaTuristico = Pontosturisticos1 > Pontosturisticos2;
            if (ComparaTuristico ==1 || ComparaTuristico == 0) {
                if (ComparaTuristico ==1) {
                    printf("Carta 1 venceu\n"); } 
                else {
                    printf("Carta 2 venceu\n"); }
                } 
            else { 
                printf("Os atributos das cartas empataram\n");
            }
        break; 
        case 5:
            printf("Atributo escolhido: Densidade Populacional(Demográfica)\n");
            printf("Carta1: %.2f\n", Densidadepopu1);
            printf("Carta2: %.2f\n", Densidadepopu2);

            int ComparaDensi = Densidadepopu1 < Densidadepopu2;
            if (ComparaDensi ==1 || ComparaDensi == 0) {
                if (ComparaDensi ==1) {
                    printf("Carta 1 venceu\n"); } 
                else {
                    printf("Carta 2 venceu\n"); }
                } 
            else { 
                printf("Os atributos das cartas empataram\n");
            } 
        break;
        default: printf("Opção inválida\n");
        break;
    }
    return 0;
}
