// aula #5 - operadores logicos, relacionais e if else // 
#include <stdio.h>

int main(){
    int x, y;
    printf ("Digite o valor de x: ");
    scanf ("%d", &x);
    printf ("Digite o valor de y: ");
    scanf ("%d", &y);
    if(x > y){
        printf("O valor de x e maior que o valor de y\n");

    }else if(x < y){
        printf("O valor de y e maior que o valor de x\n");
    } else {
        printf("Os valores d x e y sao iguais");
    }

    return 0;

}