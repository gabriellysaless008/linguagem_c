

#include <stdio.h>
#include <stdbool.h>

int main(){
    int num1 = 4, num2 = 5, num3 = 8;
    float pi = 3.14; float real = 1.00, cent = 0.50;
    char letra1 = 'G', letra2 = 'A', letra3 = 'B', letra4 = 'Y';
    bool verdadeiro = 1, falso = 0, neutro = 3;

    printf("Valor total de numeros:  %d, %d, %d\n", num1, num2, num3);
    printf("Valores:  %.2f, %.2f, %.2f\n", pi, real, cent);
    printf("Nome: %c%c%c%c\n", letra1, letra2, letra3, letra4);
    printf("Teste: %d, %d, %d\n", verdadeiro, falso, neutro);

    return 0;
}
