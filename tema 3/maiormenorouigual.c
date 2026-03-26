#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0));                        // inicialização do gerador de números aleatórios
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Início do jogo
    printf("*** MAIOR, MENOR OU IGUAL *** \n");
    printf("Bem vindo ao jogo!  \n");
    printf("Você deve escolher um número e o tipo de comparação.  \n");
    printf("M. Maior  \n");
    printf("N. Menor  \n");
    printf("I. Igual  \n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite o número escolhido: ");
    scanf("%d", &numeroJogador);

    // Menu de opções
    switch (tipoComparacao)
    {
    case 'M': //como não colocou o break, automaticamente o código do m minúsculo vai ser executado
    case 'm':
        printf("\nVocê escolheu a opção maior! \n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;

    break;

    case 'N':
    case 'n':
        printf("\nVocê escolheu a opção menor! \n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
    break;

    case 'I':
    case 'i':
        printf("\nVocê escolheu a opção igual! \n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
    break;

    default:
        printf("\nOpção de jogo inválida. \n");
    break;
    }

    //Mostra os números

    printf("O número do computador é %d e o seu número é %d\n", numeroComputador, numeroJogador);

    if (resultado == 1) 
    {
        printf("Parabéns, você venceu! \n");
    } else 
    {
        printf("Infelizmente você perdeu! \n");
    }

    return 0;
}