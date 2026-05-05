#include <stdio.h>

int main(){
    printf("Exercicio 1\n\n");
    int vetor[5] =  {30, 90, 10, 70, 80};
    int soma = 0;

    for(int i = 0; i <= 4; i++){
        soma += vetor[i];
    }
    printf("A soma foi de: %d\n", soma);

    printf("Exercicio 2\n\n");
    int vetor[10] =  {30, 90, 10, 70, 80, 100, 400, 20, 500, 300};
     
    return 0;
}
