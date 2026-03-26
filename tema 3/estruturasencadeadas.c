// Estruturas de decisão encadeadas
#include <stdio.h>

int main() {
    //estruturas aninhadas
    if (condicao1)
    {
        if (condicao2)
        {
            // Código a ser executado se condicao1 e condicao2 forem verdadeiras
        }
    }

    //estruturas encadeadas
    if (condicao1) {
        //Código a ser executado se condicao1 for verdadeira
    } else if (condicao2) {
        //Código a ser executado se condicao1 for falsa e condicao2 for verdadeira
    } else {
        //Código a ser executado se as condições forem falsas
    }
}