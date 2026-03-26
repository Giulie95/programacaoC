#include <stdio.h>

int main()
{
    // Estruturas aninhadas
    /* if (condicao1) {
        if condicao2 {
            bloco a ser executado se a condicao1 e a condicao2 forem verdadeiras
        }
    } */

    int idade;
    float renda;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua renda: \n");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)
    {
        if (renda < 2000) { 
            printf("Você tem direito ao desconto. \n");
        }
        else 
        {
            printf("Você não tem direito ao desconto devido à renda. \n");
        }
    }
    else
    {
        printf("Você não atende aos critérios devido à idade. \n");
    }
}