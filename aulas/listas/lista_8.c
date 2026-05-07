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
     
    return 0;
}
