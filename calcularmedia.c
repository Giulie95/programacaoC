#include <stdio.h>

int main() {
    int n1, n2, n3;
    float media;

    printf("*** Programa de Calculo de Media ***\n");

    printf("Digite a primeira nota: \n");
    scanf("%d", &n1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &n2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &n3);

    media = (float) (n1 + n2 + n3) / 3; //(float) converte as variaveis de nota, que sao int, em float (casting)

    printf("A media das notas e %.2f", media);
    

}