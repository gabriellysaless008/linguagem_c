#include <stdio.h>

int main(){
    int forma;
    float lado1, lado2, lado3, lado4, base, altura;
    float pi, raio;
    pi = 3.14;

    printf("** Segue os numeros para poder calcular: **\n");
    printf("** 1 - Quadrado   ** \n");
    printf("** 2 - Retangulo  ** \n");
    printf("** 3 - Triangulo  ** \n");
    printf("** 4 - Circulo    ** \n");
    printf("** 5 - Trapezio   ** \n");
    scanf("%d", &forma);

    switch(forma){
        case 1:
        printf("// Quadrado //\n");
        printf("Informe o primeiro lado: \n");
        scanf("%f", &lado1);
        printf("Informe o segundo lado: \n");
        scanf("%f", &lado2);
        printf("A area foi de: %.2f\n", lado1 * lado2);
        printf("O perimetro foi de: %.2f\n\n", 4 * lado1);
        break;

        case 2:
        printf("// Retangulo //\n");
        printf("Informe a base: \n");
        scanf("%f", &base);
        printf("Informe a altura: \n");
        scanf("%f", &altura);
        printf("A area foi de: %.2f\n", base * altura);
        printf("O perimetro foi de: %.2f\n\n", 2 * (base + altura));

        case 3:
        printf("// Triangulo //\n");
        printf("Informe a base: \n");
        scanf("%f", &base);
        printf("Informe a altura: \n");
        scanf("%f", &altura);
        printf("Informe um lado: \n");
        scanf("%f", &lado1);
        printf("A area foi de: %.2f\n", (base * altura)/2);
        printf("O perimetro foi de: %.2f\n\n", lado1 * 3);


    }

}