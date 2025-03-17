#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int pontos, pontos2, primeiroatributo, segundoatributo;
    float area, area2, pib, pib2, pibc1, pibc2, densip1, densip2, poder1, poder2, resultado1, resultado2;
    unsigned long int populacao, populacao2;
    char estado[20], estado2[20], cidade[20], cidade2[20], codigo[5], codigo2[5];     

    printf("DADOS DA CARTA 1\n\n");

    printf("Digite uma letra de A a H para representar o estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite a letra do estado + um número de 01 a 04:\n");
    scanf(" %[^\n]", codigo);

    printf("Digite o nome da sua cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a área em km da cidade: \n");
    scanf("%f", &area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui? \n");
    scanf("%d", &pontos);

    printf("DADOS DA CARTA 2\n\n");

    printf("Digite uma letra de A a H para representar o estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite a letra do estado + um número de 01 a 04: \n");
    scanf(" %[^\n]", codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui? \n");
    scanf("%d", &pontos2);

    // Cálculos
    densip1 = populacao / area;
    pibc1 = (pib * 1000000000) / populacao;
    densip2 = populacao2 / area2;
    pibc2 = (pib2 * 1000000000) / populacao2;
    poder1 = populacao + area + pib + pontos + (1 / densip1);
    poder2 = populacao2 + area2 + pib2 + pontos2 + (1 / densip2);

    // Exibição das Cartas
    printf("CARTA 1:\n\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2lu\n", populacao);
    printf("Área em Km²: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade populacional: %.2f hab/Km²\n", densip1);
    printf("PIB per capita: %.2f reais\n", pibc1);
    printf("Super poder: %.2f\n\n", poder1);

    printf("CARTA 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2lu\n", populacao2);
    printf("Área em Km²: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densip2);
    printf("PIB per capita: %.2f reais\n", pibc2);
    printf("Super poder: %.2f\n\n", poder2);

    // Comparação de atributos
    printf("COMPARAÇÃO ENTRE AS CARTAS\n\n");
    printf("Escolha um atributo de comparação:\n\n");
    printf("1. População\n");
    printf("2. Área em Km²\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    scanf("%d", &primeiroatributo);

    switch(primeiroatributo){
        case 1:
            printf("Você escolheu população:\n");
            printf("%s: %lu habitantes.\n", cidade, populacao);
            printf("%s: %lu habitantes.\n", cidade2, populacao2);
            resultado1 = populacao > populacao2 ? 1 : 0;
            break;
        
        case 2: 
            printf("Você escolheu área em km:\n");
            printf("%s: %.2f km².\n", cidade, area);
            printf("%s: %.2f km².\n", cidade2, area2);
            resultado1 = area > area2 ? 1 : 0;
            break;
    
        case 3:
            printf("Você escolheu PIB:\n");
            printf("%s: %.2f bilhões de reais.\n", cidade, pib);
            printf("%s: %.2f bilhões de reais.\n", cidade2, pib2);
            resultado1 = pib > pib2 ? 1 : 0;
            break;
    
        case 4:
            printf("Você escolheu pontos turísticos\n");
            printf("%s: %d pontos turísticos.\n", cidade, pontos);
            printf("%s: %d pontos turísticos.\n", cidade2, pontos2);
            resultado1 = pontos > pontos2 ? 1 : 0;
            break;
    
        case 5:
            printf("Você escolheu densidade populacional:\n");
            printf("%s: %.2f hab/km².\n", cidade, densip1);
            printf("%s: %.2f hab/km².\n", cidade2, densip2);
            resultado1 = densip1 < densip2 ? 1 : 0;
            break;
    
        case 6:
            printf("Você escolheu PIB per capita:\n");
            printf("%s: %.2f reais.\n", cidade, pibc1);
            printf("%s: %.2f reais.\n", cidade2, pibc2);
            resultado1 = pibc1 > pibc2 ? 1 : 0;
            break;
    
        case 7:
            printf("Você escolheu super poder:\n");
            printf("%s: %.2f de poder.\n", cidade, poder1);
            printf("%s: %.2f de poder.\n", cidade2, poder2);
            resultado1 = poder1 > poder2 ? 1 : 0;
            break;
    
        default:
            printf("Opção inválida!\n");
            break;
    }

    // Segunda comparação
    printf("Escolha outro atributo de comparação:\n\n");
    printf("1. População\n");
    printf("2. Área em Km²\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    scanf("%d", &segundoatributo);

    if(primeiroatributo == segundoatributo){
        printf("Você escolheu o mesmo atributo\n");
    } else {
        switch(segundoatributo){
            case 1:    
                printf("Você escolheu população:\n");
                printf("%s: %lu habitantes.\n", cidade, populacao);
                printf("%s: %lu habitantes.\n", cidade2, populacao2);
                resultado2 = populacao > populacao2 ? 1 : 0;
                break;
                
            case 2: 
                printf("Você escolheu área em km:\n");
                printf("%s: %.2f km².\n", cidade, area);
                printf("%s: %.2f km².\n", cidade2, area2);
                resultado2 = area > area2 ? 1 : 0;
                break;
            
            case 3:
                printf("Você escolheu PIB:\n");
                printf("%s: %.2f bilhões de reais.\n", cidade, pib);
                printf("%s: %.2f bilhões de reais.\n", cidade2, pib2);
                resultado2 = pib > pib2 ? 1 : 0;
                break;
            
            case 4:
                printf("Você escolheu pontos turísticos\n");
                printf("%s: %d pontos turísticos.\n", cidade, pontos);
                printf("%s: %d pontos turísticos.\n", cidade2, pontos2);
                resultado2 = pontos > pontos2 ? 1 : 0;
                break;
            
            case 5:
                printf("Você escolheu densidade populacional:\n");
                printf("%s: %.2f hab/km².\n", cidade, densip1);
                printf("%s: %.2f hab/km².\n", cidade2, densip2);
                resultado2 = densip1 < densip2 ? 1 : 0;
                break;
            
            case 6:
                printf("Você escolheu PIB per capita:\n");
                printf("%s: %.2f reais.\n", cidade, pibc1);
                printf("%s: %.2f reais.\n", cidade2, pibc2);
                resultado2 = pibc1 > pibc2 ? 1 : 0;
                break;
            
            case 7:
                printf("Você escolheu super poder:\n");
                printf("%s: %.2f de poder.\n", cidade, poder1);
                printf("%s: %.2f de poder.\n", cidade2, poder2);
                resultado2 = poder1 > poder2 ? 1 : 0;
                break;
            
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

    // Resultado final
    if(resultado1 && resultado2){
        printf("Carta 1 venceu!\n");
    } else if(resultado1 != resultado2) {
        printf("Empate!\n");
    } else{
        printf("Carta 2 venceu!\n");
    }

    return 0;
}
