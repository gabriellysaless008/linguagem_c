// Vetor // 

#include <stdio.h>

int main(){
    int vetor[5] =  {10, 20, 30, 40, 50};
    printf("posicao 0: %d\n", vetor[0]);
    printf("posicao 1: %d\n", vetor[1]);
    printf("posicao 2: %d\n", vetor[2]);
    printf("posicao 3: %d\n", vetor[3]);
    printf("posicao 4: %d\n\n", vetor[4]);

    printf("imprimindo tudo\n");
    for (int i = 0; i < 5; i++){
        printf("%d\n\n", vetor[i]);
    }

    char vetor_nome[4] = {'R', 'u', 'b', 'y'};
    for (int i = 0; i < 5; i++){
    printf("%c", vetor_nome[i]);
    }

    return 0;
}
