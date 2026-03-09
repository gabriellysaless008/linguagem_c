#include <stdio.h>

    int main(){
    printf( "Exercicio 1\n\n" );
    int n1, n2;
    printf( "Insira o primeiro numero: " );
    scanf( "%d", &n1 );
    printf( "Insira o segundo numero: " );
    scanf( "%d", &n2 );
    if ( n1 > n2 ){
        printf( "O primeiro numero e maior \n" );
    }else{
      printf ( "O segundo numero e maior \n\n" );
}

    printf( "Exercicio 2\n\n" );
    int senha;
    printf("Antes de proseguir, insira sua senha:  ");
    scanf("%d", &senha);
    if (senha == 1234){
        printf("Acesso permitido!");
    }else{
        printf("Acesso negado, tente outra senha!\n\n");
    }

    printf( "Exercicio 3\n\n" );
    int dtnasc;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &dtnasc);
    if ( dtnasc <= 2008 ){
        printf( "E maior de idade! \n" );
    }else{
        printf ( "Nao atingiu a maioridade! \n\n" );
    }

    printf( "Exercicio 4\n\n" );
    int nlaranjas;
    printf("Digite o numero de laranjas compradas: ");
    scanf("%d", &nlaranjas);

    if (nlaranjas <= 12){
        printf("O total da compra foi:  %.2f", nlaranjas * 0.30);
    }else{
        printf("O total da compra foi:  %.2f\n\n", nlaranjas * 0.25);
    }

    printf( "Exercicio 5\n\n" );
    int n3, n4;
    printf( "Insira o primeiro numero: " );
    scanf( "%d", &n3 );
    printf( "Insira o segundo numero: " );
    scanf( "%d", &n4 );
    if ( n3 > n4 ){
        printf( "%d > %d", n3, n4 );
    }else{
      printf ( "%d < %d", n4, n3 );

    }

    printf( "Exercicio 6\n\n" );
    int n5;
    printf( "Insira um numero: " );
    scanf( "%d", &n5 );
    if ( n5 = -n5){
        printf( "O numero e negativo", -n5);
    }else if (n5 = n5){
        printf ( "O numero e positivo\n\n", n5);

    }

    printf( "Exercicio 7\n\n" );
    printf( "Exercicio 7\n\n" );
    int v1, v2, v3;
    printf( "Insira o primeiro numero: " );
    scanf( "%d", &v1 );
    printf( "Insira o segundo numero: " );
    scanf( "%d", &v2 );
    printf( "Insira o terceiro numero: " );
    scanf( "%d", &v3 );
    if (v1 > 0){
        printf("O primeiro numero e maior que zero\n");
    }else if (v1 < 0){
        printf("O primeiro numero e maior que zero\n");
    }else{
        printf("O primeiro numero e igual a zero\n");
    }
        if (v2 > 0){
            printf("O segundo numero e maior que zero\n");
        }else if (v1 < 0){
            printf("O segundo numero e maior que zero\n");
        }else{
            printf("O segundo numero e igual a zero\n");
        }
            if (v3 > 0){
                printf("O terceiro numero e maior que zero\n");
            }else if (v1 < 0){
                printf("O terceiro numero e maior que zero\n");
            }else{
                printf("O terceiro numero e igual a zero\n\n");
            }

    
    printf( "Exercicio 8\n\n" );
    int nota1, nota2, nota3, nota4, media;
    printf("insira a primeira nota:  ");
    scanf("%d", &nota1);
    printf("insira a segunda nota:  ");
    scanf("%d", &nota2);
    printf("insira a terceira nota:  ");
    scanf("%d", &nota3);
    printf("insira a quarta nota:  ");
    scanf("%d", &nota4);
    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("A media foi: %d\n", media);
    if (media >= 70 ){
        printf("Voce foi aprovado parabens!");
    }else{
        printf("Voce foi reprovado!\n\n");
    }

    printf( "Exercicio 9\n\n" );

    }


