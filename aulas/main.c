#include <stdio.h>

int main(){
    printf("Exercicio 7\n\n");
    int salario;
    printf("Insira seu salario: ");
    scanf("%d", &salario);
    (salario >= 2500) ? printf("Nao vai receber aumento") : printf("Vai receber aumento");

}