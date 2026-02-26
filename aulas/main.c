#include <stdio.h>

int main(){ 
    
    printf ("# Exercicio 8 # \n");
    float num;
    printf("Digite um numero ex(20.5):  \n");
    scanf("%f", &num);
    float adicao = num + 10.5;
    printf("a soma e igual a: %.1f\n\n", adicao);

    return 0;
}