#include <stdio.h>

int main() {

    //operadores matematicos
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);

    //operacao soma
    soma = numero1 + numero2;

    //operacao subtracao
    subtracao = numero1 - numero2;

    //operacao multiplicacao
    multiplicacao = numero1 * numero2;

    //operacao divisao
    divisao = numero1 / numero2; 

    printf("A soma entre %d e %d e: %d \n", numero1, numero2, soma);
    printf("A subtracao entre %d  %d e: %d \n", numero1, numero2, subtracao);
    printf("A multiplicacao de %d e %d e: %d \n", numero1, numero2, multiplicacao);
    printf("A divisao de %d e %d e: %d \n", numero1, numero2, divisao);

}