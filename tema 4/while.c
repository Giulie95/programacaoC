//While

#include <stdio.h>

int main () {
    int i = 1, num;

    /* while (i <= 10) 
    {
        printf("%d \n", i);
        i++;
    } */

    printf("Digite um número (negativo para sair): "); //recebe um número do usuário
    scanf("%d", &num);

    while (num >=0) //bloco de código será executado enquanto o número for maior ou igual a 0
    {
        printf("\nVocê digitou o número: %d \n", num);

        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
    }
    printf("Número negativo digitado. Saindo... \n");


    return 0;
}