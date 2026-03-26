#include <stdio.h>

int main()
{
    // Nome dos produtos
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    // Estoque dos produtos
    unsigned int estoqueA = 1000; // para trabalhar com valores apenas positivos
    unsigned int estoqueB = 2000;

    // Valor dos produtos
    float valorA = 10.50;
    float valorB = 20.40;

    // Estoque mínimo dos produtos, apenas positivos
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    // Valor total
    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB; // Armazenar o valor do resultado da comparação entre o estoque e o estoque mínimo

    // Exibir informações do produto
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n\n", produtoB, estoqueB, valorB);

    // Comparação com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d \n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d \n\n", produtoB, resultadoB);

    // Comparação entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d \n", (estoqueA * valorA),
           (estoqueB * valorB),
           (estoqueA * valorA) > (estoqueB * valorB));
}