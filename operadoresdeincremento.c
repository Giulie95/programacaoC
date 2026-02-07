#include <stdio.h>

int main () {
    /*
    Incremento (++)
    Pre-incremento (++a)
    Pos-incremento (a++)
    Decremento (--)
    Pre-decremento (--a)
    Pos-decremento (a--)
    */

    int numero1 = 1, resultado = 0;

    printf("Antes do incremento: %d \n", numero1);

    //Incremento (++)
    numero1++;
    printf("Depois do incremento: %d \n", numero1);

    //Pre-incremento (++a) - incremente primeiro e depois use
    printf("Antes do pre-incremento: %d / Resultado: %d\n", numero1, resultado);
    resultado = ++numero1;
    printf("Apos o pre-incremento: %d / Resultado: %d \n", numero1, resultado);

    //Pos-incremento (a++) - usa o valor atual e depois incrementa
    printf("Antes do pos-incremento: %d / Resultado: %d\n", numero1, resultado);
    resultado = numero1++;
    printf("Apos o pos-incremento: %d / Resultado: %d \n", numero1, resultado);

    //Redefinindo os valores das variaveis
    numero1 = 1;
    resultado = 0;
    printf("\n");

    //Decremento (--)
    printf("Antes do decremento: %d \n", numero1);
    numero1--;
    printf("Depois do decremento: %d \n", numero1);

    //Pre-decremento (--a)
    printf("Antes do pre-decremento: %d / Resultado: %d", numero1, resultado);
    resultado = --numero1;
    printf("Apos o pre-incremento: %d / Resultado: %d", numero1, resultado);

    //Pos-decremento (a--) 
    printf("Antes do pos-decremento: %d / Resultado: %d", numero1, resultado);
    resultado =  numero1--;
    printf("Apos o pos-incremento: %d / Resultado: %d", numero1, resultado);


}