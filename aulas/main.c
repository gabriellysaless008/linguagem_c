#include <stdio.h>

int main(){
   
    printf("Exercicio 6\n\n");
    int n_patinhos = 0;
    printf("Quantos patinhos a mamae pata tem?: ");
    scanf("%d", &n_patinhos);
    for(int p = n_patinhos; p >= 0; p--){
        if (p >= 1){
            printf("%d patinhos foram passear\n", p);
            printf("Alem das montanhas\n");
            printf("Para brincar\n");
            printf("A mamae gritou: Qua, qua, qua, qua\n");
            printf("Mas so %d patinhos voltaram de la\n\n", p - 1);
        }else{
            printf("A mamae patinha foi procurar\n");
            printf("Alem das montanhas, na beira do mar\n");
            printf("A mamae gritou: Qua, qua, qua, qua!\n");
            printf("E os cinco patinhos voltaram de la\n\n");
        }

    }





}
    