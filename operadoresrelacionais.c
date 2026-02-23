#include <stdio.h>

int main () {
    int a = 20;
    int b = 20;
    int x = 5;
    float y = 5.0;
    char c = 'a';
    float numero1 = 10.2;
    int numero2 = 10;

    //Operadores relacionais

    printf("a > b: %d \n", a > b); //resultado em binário: 0 falso, 1 verdadeiro
    printf("a < b: %d \n", a < b);
    printf("a == b: %d \n", a == b);
    printf("a != b: %d \n \n", a != b);

    //Conversão implícita

    printf("x >= y: %d \n", x >= y);  //foi feita a conversão
    printf("x == y: %d \n", x == y);
    printf("x != y: %d \n \n", x != y);

    //Comparação com char: o valor desse caractere na tabela ASCII é armazenado

    printf("x >= c: %d \n", x >= c);
    printf("O valor ASCII de %c é: %d \n\n", c, c); //%c para imprimir o caractere e %d para imprimir o valor ASCII

    //Conversão explícita

    printf("numero 1 > numero 2: %d \n", (int) numero1 > numero2); //com a conversão forçada para int, foi usado apenas a parte inteira da variável
    printf("numero 1 == numero 2: %d \n", (int) numero1 == numero2);


    return 0;
}