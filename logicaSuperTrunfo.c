#include <stdio.h>

int main(){
    // Definindo a variável pib em bilhões
    // Essa variável é necessária para o cálculo do pib per capita
    // Ela será usada para transformar o pib que é, por exemplo 100.5 bilhões, em 100.500.000.000
    float pib_em_bilhoes;
    // Escolha do jogador sobre qual carta será comparada
    int escolhadojogador1, escolhadojogador2, resultado1, resultado2;
    // Definindo as variáveis da primeira carta
    char codigo_de_carta1[5];
    char nome_da_cidade1[50], nome_do_pais1[50];
    char estado1;
    int populacao1, numero_pontos_turisticos1;
    float pib1, area_em_km2_1, densidade_populacional1, pib_per_capita1;
    double super_poder1;
    // Definindo as variáveis da segunda carta
    char codigo_de_carta2[5];
    char nome_da_cidade2[50], nome_do_pais2[50];
    char estado2;
    int populacao2, numero_pontos_turisticos2;
    float pib2, area_em_km2_2, densidade_populacional2, pib_per_capita2;
    double super_poder2;


    // Iniciando as variáveis da primeira carta.
    
    printf("\nEscreva as informações da PRIMEIRA carta. \n");

    printf("Escreva o nome do país: \n");
    scanf(" %s", &nome_do_pais1);

    printf("Escreva o estado em uma letra de A a H: \n");
    scanf(" %c", &estado1);

    printf("Escreva o código da carta: \n");
    scanf(" %s", &codigo_de_carta1);

    printf("Escreva o nome da cidade (OBS: ESCREVA TUDO JUNTO SEM ACENTO): \n");
    scanf(" %s", &nome_da_cidade1);

    printf("Escreva o número de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Escreva a área da cidade em km2: \n");
    scanf(" %f", &area_em_km2_1);

    printf("Escreva o PIB da cidade em bilhões ( ex: 59.5 ): \n");
    scanf(" %f", &pib1);

    printf("Escreva o número de pontos turísticos da cidade: \n");
    scanf(" %d", &numero_pontos_turisticos1);
    

    // Iniciando as variáveis da segunda carta.

    printf("\nEscreva as informações da SEGUNDA carta. \n");

    printf("Escreva o nome do país: \n");
    scanf(" %s", &nome_do_pais2);

    printf("Escreva o estado em uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Escreva o código da carta: \n");
    scanf(" %s", &codigo_de_carta2);

    printf("Escreva o nome da cidade (OBS: ESCREVA TUDO JUNTO SEM ACENTO): \n");
    scanf(" %s", &nome_da_cidade2);

    printf("Escreva o número de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Escreva a área da cidade em km2: \n");
    scanf(" %f", &area_em_km2_2);

    printf("Escreva o PIB da cidade em bilhões ( ex: 59.5 ): \n");
    scanf(" %f", &pib2);

    printf("Escreva o número de pontos turísticos da cidade: \n");
    scanf(" %d", &numero_pontos_turisticos2);

    // Calculando a densidade populacional da primeira carta
    densidade_populacional1 = populacao1 / area_em_km2_1;

    // Calculando o pib da primeira carta
    pib_em_bilhoes = pib1 * 1e9;
    pib_per_capita1 = pib_em_bilhoes / populacao1;
    
    // Calculando o super poder da primeira carta.

    super_poder1 = (populacao1 + area_em_km2_1 + pib1 + numero_pontos_turisticos1 + (area_em_km2_1 / (double)populacao1));
    

    // Calculando a densidade populacional da segunda carta.

    densidade_populacional2 = populacao2 / area_em_km2_2;

    // Calculando o pib per capita da segunda carta.

    pib_em_bilhoes = pib2 * 1e9;
    pib_per_capita2 = pib_em_bilhoes / populacao2;

    // Calculando o super poder da segunda carta.

    super_poder2 = (populacao2 + area_em_km2_2 + pib2 + numero_pontos_turisticos2 + (area_em_km2_2 / (double)populacao2));

    // Usando esse print para organizar o código
    printf("____________________________________________________________\n");

    // Primeira comparação
    printf("\n****Escolha a primeira comparação****\n");
    printf("| 1. População |\n");
    printf("| 2. Área |\n");
    printf("| 3. PIB |\n");
    printf("| 4. Número de pontos turísticos |\n");
    printf("| 5. Densidade populacional |\n");
    printf("| 6. PIB per capita |\n");
    printf("| 7. Super poder |\n");

    printf("C1 %s ⚔️- C2 %s\n", nome_do_pais1, nome_do_pais2);
    printf("C1 %s ⚔️- C2 %s\n", nome_da_cidade1, nome_da_cidade2);
    printf("Escolha: ");
    // Perguntando a escolha do jogador
    scanf("%d", &escolhadojogador1);

    // Iniciando o switch com escolha do jogador
    switch (escolhadojogador1)
    { 
    case 1: // Caso 1 População
        printf("##### POPULAÇÃO #####\n");
        printf("C1 - %d | C2 - %d \n", populacao1, populacao2);

        // Comparando com op ternário
        resultado1 = populacao1 > populacao2 ? 1 : 0; 
        
        break;

    // SEPARAÇÃO _______________________________________________________________

        case 2: // Caso 2 área em km2
        printf("##### ÁREA EM KM2 #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", area_em_km2_1, area_em_km2_2);

        // Comparando com op ternário
        resultado1 = area_em_km2_1 > area_em_km2_2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________

        case 3: // Caso 3 PIB
        printf("##### PIB #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", pib1, pib2);

        // Comparando com op ternário
        resultado1 = pib1 > pib2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________

        case 4: // Caso 4 pontos turísticos
        printf("##### PONTOS TURÍSTICOS #####\n");
        printf("C1 - %d | C2 - %d \n", numero_pontos_turisticos1, numero_pontos_turisticos2);

        // Comparando com op ternário
        resultado1 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________

        case 5: // Caso 5 densidade populacional
        printf("##### Densidade populacional #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", densidade_populacional1, densidade_populacional2);

        // Comparando com op ternário
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;  
        break;

    // SEPARAÇÃO _______________________________________________________________

        case 6: // Caso 6 pib per capita
        printf("##### PIB per capita #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", pib_per_capita1, pib_per_capita2);

        // Comparando com op ternário
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0; 

        break;
    // SEPARAÇÃO _______________________________________________________________
        

        case 7: // Caso 7 Super poder
        printf("##### Super Poder #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", super_poder1, super_poder2);

        // Comparando com op ternário
        resultado1 = super_poder1 > super_poder2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________ 

    default:
        printf("Opção inválida.");
        break;
    }

    // Usando esse print para organizar o código
    printf("____________________________________________________________\n");

    // Segunda comparação
    printf("\n****Escolha a segunda comparação****\n");
    printf("| 1. População |\n");
    printf("| 2. Área |\n");
    printf("| 3. PIB |\n");
    printf("| 4. Número de pontos turísticos |\n");
    printf("| 5. Densidade populacional |\n");
    printf("| 6. PIB per capita |\n");
    printf("| 7. Super poder |\n");
    printf("C1 %s ⚔️- C2 %s\n", nome_do_pais1, nome_do_pais2);
    printf("C1 %s ⚔️- C2 %s\n", nome_da_cidade1, nome_da_cidade2);

    // Perguntando a escolha do jogador
    printf("Escolha: ");
    scanf("%d", &escolhadojogador2);

    // Iniciando o switch com escolha do jogador se a escolha 1 for diferente da 2
    if (escolhadojogador2 != escolhadojogador1){

    switch (escolhadojogador2)
    { 
    case 1: // Caso 1 População
        printf("##### POPULAÇÃO #####\n");
        printf("C1 - %d | C2 - %d \n", populacao1, populacao2);

        // Comparando com op ternário
        resultado2 = populacao1 > populacao2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________

        case 2: // Caso 2 área em km2
        printf("##### ÁREA EM KM2 #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", area_em_km2_1, area_em_km2_2);

        // Comparando com op ternário
        resultado2 = area_em_km2_1 > area_em_km2_2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________

        case 3: // Caso 3 PIB
        printf("##### PIB #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", pib1, pib2);

        // Comparando com op ternário
        resultado2 = pib1 > pib2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________

        case 4: // Caso 4 pontos turísticos
        printf("##### PONTOS TURÍSTICOS #####\n");
        printf("C1 - %d | C2 - %d \n", numero_pontos_turisticos1, numero_pontos_turisticos2);

        // Comparando com op ternário
        resultado2 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________

        case 5: // Caso 5 densidade populacional
        printf("##### Densidade populacional #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", densidade_populacional1, densidade_populacional2);

        // Comparando com op ternário
            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;  
        break;

    // SEPARAÇÃO _______________________________________________________________

        case 6: // Caso 6 pib per capita
        printf("##### PIB per capita #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", pib_per_capita1, pib_per_capita2);

        // Comparando com op ternário
        resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0; 

        break;
    // SEPARAÇÃO _______________________________________________________________
        

        case 7: // Caso 7 Super poder
        printf("##### Super Poder #####\n");
        printf("C1 - %.2f | C2 - %.2f \n", super_poder1, super_poder2);

        // Comparando com op ternário
        resultado2 = super_poder1 > super_poder2 ? 1 : 0; 

        break;

    // SEPARAÇÃO _______________________________________________________________ 

    default:
        printf("Opção inválida.");
        break;
    }
    // Determinando o vencedor


        if (resultado1 && resultado2){ // Se retornar verdadeiro carta 1 venceu
            printf("🎆🎆🎆  CARTA 1 VENCEDORA  🎆🎆🎆");
        } 
    
        else if (resultado1 != resultado2){ // Se forem diferentes, será empate
            printf("!!! EMPATE !!!");
        } 
    
        else {// Se retornar falso, o vencedor será a carta 2
            printf("🎆🎆🎆  CARTA 2 VENCEDORA  🎆🎆🎆");
        }

    }
    else {
        printf("Escolhas iguais");
    }
    // Usando esse print para organizar o código

    printf("\n____________________________________________________________\n");
    return 0;
}
