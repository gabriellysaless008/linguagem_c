#include <stdio.h>

int main(){ 
     printf("Exercicio 2\n\n");
    int mes_ano;
    printf("Digite um mes do ano: ");
    scanf("%d", &mes_ano);
        
        switch(mes_ano){
            case 1: 
                printf("Janeiro\n");
            case 3:
                printf("Marco\n");
            case 5:
                printf("Maio\n");
            case 7:
                printf("Julho\n");
            case 8:
                printf("Agosto\n");
            case 10:
                printf("Outubro\n");
            case 12:
                printf("Dezembro\n");
                printf("Meses com 31 dias\n");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("Meses com 30 dias\n");
                break;
            case 2:
                printf("Mes com 28 ou 29 dias");
                break;
            default:
                printf ("Error!!!\n");
                break;

        }
}