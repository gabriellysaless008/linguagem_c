#include <stdio.h>

int main(){
    printf("Exercicio 1\n\n");
    float media;
    int nota1, nota2, nota3, nota4;
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%d", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4 ;
    (media >= 70 || 7) ? printf("Passou de ano\n\n") : printf("Reprovou\n\n");

    printf("Exercicio 2\n\n");
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    (n1 > n2) ? printf("O primeiro numero e maior\n\n") : printf("O segundo numero e maior\n\n");

    printf("Exercicio 3\n\n");
    int senha;
    printf("Antes de proseguir, insira sua senha:  ");
    scanf("%d", &senha);
    (senha == 1234) ? printf("Acesso liberado!\n\n") : printf("Acesso negado tente novamente!\n\n");

    printf("Exercicio 4\n\n");
    int n;
    printf("Digite um numero:  ");
    scanf("%d", &n);


}