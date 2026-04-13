#include <stdio.h>

int main(){
    printf("Exercicio 1\n");
    int num;
    printf("Digite um numero\n");
    scanf("%d", &num);
    while (num >= 0){
        printf("%d\n", num);
        num--;

    }

    printf("exercicio 2\n");
    int numero;
    int soma = 0;

    while (numero >= 0){
        soma = soma + numero;
        printf("digite um numero\n");
        scanf("%d", &numero);
    }

    printf("soma dos numeros positivos: %d\n", soma);

    printf("exercicio 3\n");
    char operador = '+';
    while (operador == '+' || operador == '-' || operador == '*' || operador == '/' ){
    int num1, num2;
    printf("Digite o primeiro numero:  \n");
    scanf("%d", &num1);
    printf("Digite o operador: + - * /  \n");
    scanf(" %c", &operador);
    printf("Digite o segundo numero:  \n");
    scanf("%d", &num2);

    switch(operador){
        case '+':
            printf("%.2d + %.2d = %.2d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2d - %.2d = %.2d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2d * %.2d = %.2d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2d / %.2d = %.2d\n", num1, num2, num1 / num2);
            break;
        default:
            printf ("Error!!!");
            break;
    }
        char resposta;
        printf("Deseja realizar a operacao novamente? (s/n)\n");
        scanf(" %c", &resposta);
        if (resposta == 'n'){
        break;
        }
    } 

    printf("Exercicio 4\n\n");
    int senha;
    while (senha != 1234){
        printf("Digite sua senha: ");
        scanf("%d", &senha); 
    }
    printf("Acesso permitido\n\n");

    printf("Exercicio 5\n\n");
    int nota;
    printf("Digite a nota: \n");
    scanf("%d", &nota);
    while (nota > 10){
        printf("Digite a nota: \n");
        scanf("%d", &nota);
        printf("Nota invalida\n");
    }
    printf("Nota registrada\n\n");

    printf("exercicio 6\n");
    char sn = 's';
    int cont = 0;
    double nota;
    double soma = 0;
    double media;
    while (sn == 's'){
        printf("Digite a nota: ");
        scanf("%lf", &nota);
        soma = soma + nota;
        cont++;

        printf("Deseja continuar (s/n)\n");
        scanf(" %c", &sn);
        (sn == 's') ? printf("Adicionando proxima nota...\n") : printf("Calculando...\n");
    }
        media = soma / cont;
        printf("Media final: %2.lf\n", media);


    return 0;
    

}

