// lista vetor //

#include <stdio.h>

int main(){
    printf("Exercicio 1\n\n");
    int vetor[5];
    int soma = 0, numer;

    for(int i = 0; i < 5; i++){
        printf("Insira um valor: ");
        scanf("%d", &numer);
        soma += numer;
    }
    printf("A soma foi de: %d\n", soma);

    printf("Exercicio 2\n\n");
    int vetor[10];
    int valor = 0, valor_maior = 0;
    for(int i = 0; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor >= valor_maior){
            valor_maior = valor;
        }
    } 
        printf("Valor maior: %d", valor_maior);

    printf("Exercicio 3\n\n");
    int notas[8];
    int media = 0, soma = 0;
    for(int i = 0; i < 8; i++){
    printf("Insira uma nota: ");
    scanf("%d", &notas[i]);
    soma += notas[i];
    }
    media = soma / 8;

    printf("A media foi de: %d\n\n", media);

    printf("Exercicio 4\n\n");
    int vari[6];
    int pares = 0;
    for(int i = 0; i < 6; i++){
        printf("Insira um numero: ");
        scanf("%d", &vari[i]);
        if (vari[i] % 2 == 0){
            pares++;
        
        }

    }
    printf("A quantidade de pares foi de: %d\n\n", pares);

    printf("Exercicio 5\n\n");
    int inv[7];
    int valores = 0;

    for (int i = 0; i < 7; i++){ 
    printf("Digite um numero: ");
    scanf("%d", &inv[i]);
    }

    printf("invertido:\n");
    for(int i = 6; i >= 0; i--) {
    printf("%d\n", inv[i]);
    }

    printf("\nexercicio 6:\n");
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int buscado, b, posicao = -1;

    printf("Vetor: ");
    for (b = 0; b < 10; b++) {
        printf("%d ", vetor[b]);
    }
    printf("\n");

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &buscado);

    for (b = 0; b < 10; b++) {
        if (vetor[b] == buscado) {
            posicao = b;
            break;
        }
    }

    printf("Posicao: %d\n", posicao);

    printf("\nexercicio 7\n");
    int vetorf[9] = {10, 5, 4, 20, 9, 4, 5, 29, 4};
    int x = 4;

    printf("original: ");
    for (int s = 0; s < 9; s++) {
        printf("%d ", vetorf[s]);
    }

    for (int s = 0; s < 9; s++) {
        if (vetorf[s] == x) {
            vetorf[s] = 0;
        }
    }

    printf("\nmodificado (substitui %d por 0): ", x);
    for (int s = 0; s < 9; s++) {
        printf("%d ", vetorf[s]);  
    }
    printf("\n");

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

     
    return 0;
}
