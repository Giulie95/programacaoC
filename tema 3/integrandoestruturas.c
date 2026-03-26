#include <stdio.h>

int main () {
    int opcao;
    float nota1, nota2, media;

    printf("### Menu de Gerenciamento de Estudantes ###\n");
    printf("1. Calcular Média \n");
    printf("2. Determinar status \n");
    printf("3. Sair \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Cálculo de Média\n");
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            //verificar se as entradas são válidas e calcular média
            if ((nota1 >= 0 && nota1 <=10) && (nota2 >=0 && nota2 <=10)) {
                media = (nota1 + nota2) / 2;
                printf("A média é: %.2f \n", media);
            } else {
                printf("Entrada inválida. \n");
            }
        break;
        case 2:
            printf("Determinar Status \n");
            printf("Digite a média: ");
            scanf("%f", &media);

            media >= 6 ? printf("Aluno aprovado. \n") : printf("Aluno reprovado. \n");

        break;
        case 3:
            printf("Sair do Programa \n");
        break;
        default:
            printf("Opção inválida. \n");
        break;
    }   

    return 0;
}