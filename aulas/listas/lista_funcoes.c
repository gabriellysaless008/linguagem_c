#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Exercicio 1 //
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {

    int num = 29;
    
    if (ehPrimo(num)) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não e primo.\n", num);
    }
    
    return 0;
}

// Exercicio 2 //

int calcularFatorial() {
    int n, fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        fat = fat * i;
    }
    
    printf("Fatorial: %d\n", fat);
    return fat;
}

// Exercicio 3 //

int calcularPotencia() {
    int base, expoente, resultado = 1;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    
    for(int i = 0; i < expoente; i++) {
        resultado = resultado * base;
    }
    printf("Resultado: %d\n", resultado);
    return resultado;
}

// Exercicio 4 //
int maiorEntreTres(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main() {
    int a, b, c;
    
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("O maior valor e: %d\n", maiorEntreTres(a, b, c));
    
    return 0;
}

// Exercicio 5 //
int epar(int valor) {
    if (valor % 2 == 0) {
        return 1; // Verdadeiro (par)
    } else {
        return 0; // Falso (impar)
    }
}

int main() {
    int numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    if (epar(numero)) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }

    return 0;
}

// Exercicio 6 //
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int escolha;
    float tempInput, tempConvertida;

    printf("=== Conversor de Temperaturas ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &tempInput);
        tempConvertida = celsiusParaFahrenheit(tempInput);
        printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", tempInput, tempConvertida);
    } 
    else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &tempInput);
        tempConvertida = fahrenheitParaCelsius(tempInput);
        printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", tempInput, tempConvertida);
    } 
    else {
        printf("Opcao invalida! Por favor, execute o programa novamente e escolha 1 ou 2.\n");
    }

    return 0;
}

