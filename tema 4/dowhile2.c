#include <stdio.h>

int main () {
    int op;

    do {
        printf("Escolha uma opção: \n");
        printf("1. Opção 1 \n");
        printf("2. Opção 2 \n");
        printf("3. Sair do programa \n");
        scanf("%d", &op);

        switch (op) 
        {
            case 1:
                printf("Você escolheu a opção 1. \n\n");
            break;
            case 2:
                printf("Você escolheu a opção 2. \n\n");
            break;
            case 3:
                printf("Saindo... \n\n");
            break;
            default:
                printf("Opção inválida. \n\n");
                printf("Saindo...\n");
               op = 3;
            break;
        }

    } while (op != 3);

    return 0;
}