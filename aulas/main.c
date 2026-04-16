#include <stdio.h>

int main(){
    printf("Exercicio 7\n\n");
    int num = num, divisor = 2;
    int eprimo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        eprimo = 0;
    } else {
        while (divisor <= num / 2) {
            if (num % divisor == 0) {
                eprimo = 0;
                break;       
                
            }
            divisor++;
        }
    }

    if (eprimo == 1) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao um numero primo.\n", num);
    }
 }
    