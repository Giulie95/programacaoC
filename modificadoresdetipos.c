// Modificadores de tipos de dados

#include <stdio.h>

int main () {
    //unsigned
    int numeroSinal = 3000000000; //este valor excede o limite de um int normal (overflow)
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d \n", numeroSinal);
    printf("Número sem sinal: %u \n \n", numeroSemSinal); //especificador de tipo %u

    //long int
    int numeroNormal = 2147483647; //valor máximo de int
    long int numeroGrande = 2147483647;
    long long int numeroMaior = 21474836478; //valor maior que o maximo de int

    printf("Número regular (int): %d \n", numeroNormal);
    printf("Número grande (long int): %ld \n", numeroGrande);
    printf("Número maior: %lld \n", numeroMaior);

    numeroNormal = 214748364789; //valor maior que o maximo de int
//float precisao simples e double precisao dupla
//verificar como o ambiente trata a variável

    //short int
    printf("Número regular (aumentado): %d \n", numeroGrande);

    short int numeroPequeno = 32767; //valor máximo de short int
    printf("Número pequeno (short int): %d \n", numeroPequeno);

    numeroPequeno = 32768; //valor maior que o máximo de short int
    printf("Número pequeno atualizado (short int): %d \n \n", numeroPequeno);

    printf("*** Tamanho das variáveis *** \n");

    //sizeof -> tamanho da variável
    printf("Char: %zu B \n", sizeof(char));
    printf("Short int: %d B \n", sizeof(short int));
    printf("Int: %d B \n", sizeof(int));
    printf("Long int: %ld B \n", sizeof(long int));
    printf("Float: %zu B \n", sizeof(float));
    printf("Double: %zu B \n", sizeof(double));
    printf("Long double: %zu B \n", sizeof(long double));

    return 0;
}