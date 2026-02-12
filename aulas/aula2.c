/* Aula 2 - Variáveis */

// int - 1   5   9;

// float - 3.14  27.9    79.7;

// char - 'A'    'B'     'C';

// bool - 0 ou 1 ==> true ou false;

#include <stdio.h>
#include <stdbool.h> //biblioeteca para usar o tipo bool//

int main(){
    
    int x = 10;  // int é para declarar variáveis do tipo inteiro, números sem casas decimais

    float pi = 3.14;  // float é para declarar variáveis do tipo ponto flutuante, números com casas decimais

    char letra = 'A' ;  // char é para declarar variáveis do tipo caractere, letras, números ou símbolos (usar aspas simples)

    bool verdadeiroEfalso = true;  // bool é para declarar variáveis do tipo boleano, verdadeiro ou falso (true or false)

    printf("Valor de x:  %d\n", x); // %d é para imprimir variáveis do tipo inteiro, números sem casas decimais

    printf("Valor de pi:  %.2f\n", pi); // %f é para imprimir variáveis do tipo ponto flutuante com 2 casas decimais 
                                        //(adicionar o ponto e numero para deixar o número certo)

    printf("Letra: %c\n", letra); // %c é para imprimir variáveis do tipo caractere, letras, números ou símbolos entre aspas simples

    printf("1 - Verdadeiro e 0 - Falso: %d\n", verdadeiroEfalso); // %d também é usado para imprimir variáveis do tipo bool, verdadeiro ou falso 
                                                                  //(onde verdadeiro é 1 e falso 0)
    
    return 0;
}