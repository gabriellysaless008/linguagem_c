#include <stdio.h>

int main(){
    printf("Exercicio 1\n\n");
    int num;
    printf("Digite um numero\n");
    scanf("%d", &num);
    while (num >= 0){
        printf("%d\n\n", num);
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

    printf("soma dos numeros positivos: %d\n\n", soma);

    printf("exercicio 3\n");
    char operador = '+';
    while (operador == '+' || operador == '-' || operador == '*' || operador == '/' ){
    int num1, num2;
    printf("Digite o primeiro numero:  \n\n");
    scanf("%d", &num1);
    printf("Digite o operador: + - * /  \n\n");
    scanf(" %c", &operador);
    printf("Digite o segundo numero:  \n\n");
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

    printf("exercicio 6\n\n");
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
    
    printf("Exercicio 7\n\n");
    int nume = nume, divisor = 2;
    int eprimo = 1;

    printf("Digite um numeero inteiro: ");
    scanf("%d", &nume);

    if (nume <= 1) {
        eprimo = 0;
    } else {
        while (divisor <= nume / 2) {
            if (nume % divisor == 0) {
                eprimo = 0;
                break;       
                
            }
            divisor++;
        }
    }

    if (eprimo == 1) {
        printf("%d e um numero primo.\n", nume);
    } else {
        printf("%d nao um numero primo.\n", nume);
    }


    printf("exercicio 8\n");
    int numer;
        while (numer > 0){
            printf("Digite um numero: \n");
            scanf("%d", &numer);
            (numer % 2 == 0) ? printf("O numero e par\n\n") : printf("O numero e impar\n\n");
        }

    printf("exercicio 10\n\n");
    int numero_secreto, palpite, tentativas = 0;
    numero_secreto = rand() % 100 + 1;

    printf("Bem-vindo ao Jogo de Adivinhacao!\n");
    printf("Eu escolhi um numero entre 1 e 100. Tente acertar!\n\n");

        while(palpite != numero_secreto){
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;
        if (palpite > numero_secreto) {
            printf("Muito alto! Tente um numero menor.\n");
        } else if (palpite < numero_secreto) {
            printf("Muito baixo! Tente um numero maior.\n");
        } else {
            printf("\nParabens! Voce acertou em %d tentativas!\n", tentativas);
        }

      (palpite != numero_secreto);
    }

    printf("exercicio 11\n\n");
    int num1 = 0, vari;
    int tabuada;
    char opcao1;

    do{
    vari = 0;

    printf("digite um numero: \n\n");
    scanf("%d", &tabuada);

    while (num1 <= 10){
        printf("%d * %d = %d\n", tabuada, num1, num1 * tabuada);
        num1++;
    }  
    printf("deseja continuar? (s/n): ");
    scanf(" %c", &opcao1);

    } while (opcao1 == 's');

    printf("exercicio 12\n\n");
    int opcao;
    float temp, convertido;
        while (opcao != 3){
        printf("--- Conversor de Temperatura ---\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

         switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temp);
                //F = (C * 9/5) + 32
                convertido = (temp * 9 / 5) + 32;
                printf("%.2fC equivale a %.2fF\n", temp, convertido);
                break;
            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temp);
                //C = (F - 32) * 5/9
                convertido = (temp - 32) * 5 / 9;
                printf("%.2fF equivale a %.2fC\n", temp, convertido);
                break;
            case 3:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }
    printf("exercicio 13\n\n");
    int n, num1 = 0, num2 = 1, proxnum, contador = 0;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci (%d termos):\n", n);

    while (contador < n) {
        printf("%d ", num1);
        
        proxnum = num1 + num2;
        num1 = num2;
        num2 = proxnum;
        contador++;
    }
    printf("\n");


    return 0;
    

}

