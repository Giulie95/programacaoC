#include <stdio.h>

int main () {
    int num = 80, num2 = 60;
    int maior;

    num > num2 ? (maior = num) : (maior = num2);

    printf("O número maior é: %d \n", maior);

    if (num > num2) {
        printf("O número maior é %d \n", num);
    } else {
        printf("O número maior é: %d \n", num2);
    }
    return 0;
}