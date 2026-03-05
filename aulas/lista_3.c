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

    }


