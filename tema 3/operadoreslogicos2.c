//Operadores Lógicos
#include <stdio.h>

int main () {
    int idade = 20;
    float altura = 1.75;

    //1. idade >= 18 => verdadeiro
    //2. idade <= 30 => verdadeiro
    //3. verdadeiro && verdadeiro => verdadeiro
    //4. verdadeiro && altua > 1.70 (verdadeiro) => verdadeiro
    //condição verdadeira 

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tema  altura adequada. \n");
    } else {
        printf("Você não atende aos critérios. \n");
    }

}