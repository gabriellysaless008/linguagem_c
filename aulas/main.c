#include <stdio.h>

int main(){ 
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


}