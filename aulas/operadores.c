//aula #4 - operadores//

#include <stdio.h>

int main(){
    printf ("Exercicio 1\n");
    int x = 10, y = 5;
    int soma = x + y;
    printf("%d + %d = %d\n", x, y, soma);
    printf("Soma = %d\n", x + y);

    float raio;
    //pedindo o valor da variável para o usuário
    printf("Digite o raio da circunferencia:  \n");
    scanf("%f", &raio);//escaneamento a variável que o usuário digitou
    float z = 2 * 3.14 * raio; //criando uma fórmula dentro da variável
    printf("O comprimento da circunferencia e: %.2f\n", z);
    printf("O comprimento sem var e: %.2f\n", 2 * 3.14 * raio);

    return 0;

}