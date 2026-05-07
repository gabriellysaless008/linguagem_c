#include <stdio.h>

int main(){
    printf("Exercicio 8\n\n");
   int vetor1[4], vetor2[4], soma[4];
    printf("Digite os 4 numeros do primeiro vetor:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite os 4 numeros do segundo vetor:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &vetor2[i]);
    }
    printf("\nVetor Resultante:\n");
    for(int i = 0; i < 4; i++) {
        soma[i] = vetor1[i] + vetor2[i];
        printf("%d ", soma[i]);
    }





}



    