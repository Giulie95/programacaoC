// Operadores Lógicos

#include <stdio.h>

int main()
{
    int a = -10, b = -5, c = 0, d = -10, x, y, z;

    // E Lógico (&&)
    if (a > 0 && b > 0)
    { // para esta condição ser verdadeira, os dois números precisam ser maiores que 0
        printf("Os dois números são positivos. \n");
    }
    else
    {
        printf("Pelo menos um dos números é negativo. \n\n");
    }

    // OU Lógico (||)
    if (a > 0 || b > 0)
    { // para esta condição ser verdadeira, pelo menos um dos números precisa ser maior que 0
        printf("Pelo menos um número é positivo. \n");
    }
    else
    {
        printf("Os dois números são negativos. \n\n");
    }

    // NÃO Lógico (!)
    if (!c) { // !c é 1 (verdadeiro), então se o c vale 0, este bloco é executado
        printf("A variável c é zero. \n\n");
    } else { //qualquer número diferente de 0
        printf("A variável c é diferente de zero. \n\n");
    }

    if (!(d > 0)) { // ! inverte o valor
        printf("A viariável d é negativa. \n\n");
    } else {
        printf("A variável d é positiva. \n\n");
    }

    //Precedência de operadores
    x = 5;
    y = -10;
    z = 1;

    //1. x > 0 => verdadeiro
    //2. y < 0 => verdadeiro
    //3. verdadeiro && verdadeiro => verdadeiro
    //4. verdadeiro || c == 0 (falso) => verdadeiro
    //condição verdadeira

    if (x > 0 && y < 0 || z == 0){
        printf("A condição é verdadeira. \n");
    } else {
        printf("A condição é falsa. \n");
    }
}   