#include <stdio.h>

int main(){
    int numero1, numero2;
    printf("Digite o 1 numero:  \n");
    scanf("%d", &numero1);
    printf("Digite o 2 numero:  \n");
    scanf("%d", &numero2);
    int sub = numero1 - numero2;
    printf("A diferenca entre os numeros sao: %d\n\n", sub);

    return 0;
}