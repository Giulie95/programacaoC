#include <stdio.h>

int main () {
    //Sintaxe
    //condição ? verdadeiro : falso;

    int idade = 17;
    int resultado;

   // idade >= 18 ? printf("Você é maior de idade! \n") : printf("Você é menor de idade! \n");

   resultado = idade >= 18 ? 1 : 0 ; //resultado recebe 1 se verdadeiro, 0 se falso
   if (resultado == 1) {
    printf("Você é maior de idade! \n\n");
   } else {
    printf("Você é menor de idade! \n\n");
   }

   int temperatura = 29;
   int resultado2;

   resultado2 = temperatura > 30 ? 1 : 0;

   if (resultado2 == 1) {
     printf("Está calor! \n");
   } else {
     printf("Está frio! \n");
   }

    return 0;
}