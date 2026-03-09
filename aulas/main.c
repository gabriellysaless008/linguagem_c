#include <stdio.h>

int main(){ 
printf( "Exercicio 10\n\n" );
    int idade;
    printf("Insira sua idade:  ");
    scanf ("%d", &idade);
    if (idade <= 17){
        printf ("E um bebe ainda");
    }else if (idade <= 59){
        printf ("E adulto ainda");
    }else{
        printf ("Ta velho ja");
    }



}