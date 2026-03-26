#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao, numeroSecreto, palpite;

    printf("MENU PRINCIPAL \n");
    printf("1. Iniciar jogo \n");
    printf("2. Ver regras \n");
    printf("3. Sair \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0)); //inicializa o número aleatório com base no horário de execuçao do jogo
            numeroSecreto = rand () % 10;
            printf("Digite um número de 0 a 9: ");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite) {
                printf("Você acertou! Número secreto: %d \n", numeroSecreto);
            } else {
                printf("Você errou! Número secreto: %d \n", numeroSecreto);
            }

        break;
        case 2: 
            printf("Regras do jogo: \n");
            printf("Digite um número de 0 a 9 para adivinhar o número secreto que o computador pensou.");
        break;
        case 3:
            printf("Saindo do jogo...\n");
        break;
        default:
            printf("Opção inválida. \n");
        break;
    }


    return 0;
}