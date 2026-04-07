//Do while

#include <stdio.h>

int main () {
    int i = 1, num;

    /* do {
        printf("%d\n", i);
        i++;
    
    } while (i <= 5); */

    do {
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);

        printf("Você digitou o número %d \n",num);
    } while (num >= 0);
    printf("Saindo...");

    return 0;
}