#include <stdio.h>

int main(){ 
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