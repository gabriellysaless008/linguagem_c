#include <stdio.h>

int main(){
    printf("Exercicio 4\n\n");
    int num_quarto, opcao_desejada;
    char nome_cliente[70];
    printf("---Ola, seja bem vindo ao Resort IndoAli!!---\n\n");
    printf("# -- Opcoes de estadia -- #\n\n");
    printf("# 1 - Fazer Check-In\n");
    printf("# 2 - Servico de quarto\n");
    printf("# 3 - Fazer pedido\n");
    printf("# 4 - Solicitar outros Servico\n");
    
    printf("Escolha a opcao desejada: \n");
    scanf("%d", &opcao_desejada);
    printf("Insira seu nome:  \n");
    scanf("%69s", &nome_cliente);
    //printf("Insira seu numero de quarto:  \n\n");
    //scanf("%d", num_quarto);

    switch(opcao_desejada){
        case 1:
            printf("Ok! Ja realizaremos seu check-in %s!!\n", nome_cliente);
            break;
        case 2:
            printf("Insira seu numero de quarto:  \n");
            scanf("%d", &num_quarto);
            printf("----------------------\n\n");
            printf("Atencao Equipe!!!!\n\n");
            printf("----------------------\n");
            printf("O(A) cliente %s, solicitou servico do quarto: %d\n", nome_cliente, num_quarto);
            break;
        case 3:
            printf("Insira seu numero de quarto:  \n");
            scanf("%d", &num_quarto);
            printf("----------------------\n\n");
            printf("Atencao Equipe!!!!\n\n");
            printf("----------------------\n");
            printf("O(A) cliente %s, solicitou um pedido, o quarto e: %d\n", nome_cliente, num_quarto);
            break;
        case 4:
            printf("Insira seu numero de quarto:  \n");
            scanf("%d", &num_quarto);
            printf("----------------------\n\n");
            printf("Atencao Equipe!!!!\n\n");
            printf("----------------------\n");
            printf("O(A) cliente %s, solicitou um outro servico, o quarto e: %d\n", nome_cliente, num_quarto);
            break;
    }

    return 0;

}