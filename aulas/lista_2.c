#include <stdio.h>

//lista #2//



int main(){
    printf ("# Exercicio 1 #\n");
    int n = 90;
    printf("O numero e: %d\n\n", n);

    printf ("# Exercicio 2 #\n");
    int n1 = 40, n2 = 60;
    int soma = n1 + n2;
    printf("%d + %d = %d\n\n", n1, n2, soma);

    printf ("# Exercicio 3 # \n");
    float n3 = 3.14, n4 = 1.24;
    float subtracao = n3 - n4;
    printf("%.2f - %.2f = %.2f\n\n", n3, n4, subtracao);

    printf ("# Exercicio 4 # \n");
    int n5 = 9, n6 = 5;
    int multiplicacao = n5 * n6;
    printf("%d * %d = %d\n\n", n5, n6, multiplicacao);

    printf ("# Exercicio 5 # \n");
    float n7 = 9.00, n8 = 6.00;
    float divisao = n7 / n8;
    printf("%.2f / %.2f = %.2f\n\n", n7, n8, divisao);

    printf ("# Exercicio 6 # \n");
    int dobro;
    printf("Digite um numero:  \n");
    scanf("%d", &dobro);
    int mult = dobro * 2;
    printf("o dobro do numero e: %d\n\n", dobro * 2);

    printf ("# Exercicio 7 # \n");
    char letra1 = 'M';
    printf("Letra: %c\n\n", letra1);

    printf ("# Exercicio 8 # \n");
    float num;
    printf("Digite um numero ex(20.5):  \n");
    scanf("%f", &num);
    float adicao = num + 10.5;
    printf("a soma e igual a: %.1f\n\n", adicao);

    printf ("# Exercicio 9 # \n");
    int n9 = 100 , n10 = 80, n11 = 60 , n12 = 90;
    float media = (n9 + n10 + n11 + n12) / 4;
    printf("A media foi: %.1f\n\n", media);

    printf ("# Exercicio 10 # \n");
    int numero1, numero2;
    printf("Digite o 1 numero:  \n");
    scanf("%d", &numero1);
    printf("Digite o 2 numero:  \n");
    scanf("%d", &numero2);
    int sub = numero1 - numero2;
    printf("A diferenca entre os numeros sao: %d\n\n", sub);

    printf ("# Exercicio 11 # \n");
    int mult1 = 5 * 1;
    int mult2 = 5 * 2;
    int mult3 = 5 * 3;
    int mult4 = 5 * 4;
    int mult5 = 5 * 5;
    int mult6 = 5 * 6;
    int mult7 = 5 * 7;
    int mult8 = 5 * 8;
    int mult9 = 5 * 9;
    int mult10 = 5 * 10;
    printf("Tabuada do 5\n");
    printf("5 x 1 = %d\n", mult1);
    printf("5 x 2 = %d\n", mult2);
    printf("5 x 3 = %d\n", mult3);
    printf("5 x 4 = %d\n", mult4);
    printf("5 x 5 = %d\n", mult5);
    printf("5 x 6 = %d\n", mult6);
    printf("5 x 7 = %d\n", mult7);
    printf("5 x 8 = %d\n",mult8);
    printf("5 x 9 = %d\n", mult9);
    printf("5 x 10 = %d\n", mult10);

    return 0;
}
