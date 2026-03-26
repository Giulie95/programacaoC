//Hora de codar - Tema 3 nível novato
#include <stdio.h>

int main () {
    //Declaração de variáveis
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000; //unsigned porque estoque não pode ser negativo

    //Entrada dos dados
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    //Teste de temperatura, umidade e estoque
    if (temperatura > 30) {
        printf("ALERTA: Temperatura está alta. \n");
    } else {
        printf("Temperatura está dentro dos parâmetros. \n");
    }

    if (umidade > 50) {
        printf("ALERTA: Umidade elevada. \n");
    } else {
        printf("Umidade está dentro dos parâmetros. \n");
    }

    if (estoque < estoqueMinimo) {
        printf("ALERTA: Estoque abaixo do mínimo. \n");
    } else {
        printf("Estoque normal. \n");
    }

}