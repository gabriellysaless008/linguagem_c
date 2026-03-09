#include <stdio.h>

int main(){ 
printf( "Exercicio 4\n\n" );
    int nlaranjas;
    printf("Digite o numero de laranjas compradas: ");
    scanf("%d", &nlaranjas);

    if (nlaranjas <= 12){
        printf("O total da compra foi:  %.2f", nlaranjas * 0.30);
    }else{
        printf("O total da compra foi:  %.2f\n\n", nlaranjas * 0.25);
    }

}