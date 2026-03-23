#include <stdio.h>

int main(){
    printf("Exercicio 1\n\n");
    int codigo_produto;
    printf("// Lista de auxilio para os produtos //\n");
    printf("--- 1 --> Alimento nao-perecivel ---\n");
    printf("--- 2 --> Alimento perecivel      ---\n");
    printf("--- 3 --> Vestuario               ---\n");
    printf("--- 4 --> Limpeza             ---\n\n");
    printf("Digite o codigo do produto:  \n");
    scanf("%d", &codigo_produto);
    switch(codigo_produto){
        case 1:
            printf("Voce escolheu a opcao: Alimento nao-perecivel");
            break;
        case 2:
            printf("Voce escolheu a opcao: Alimento perecivel");
            break;
        case 3:
            printf("Voce escolheu a opcao: Vestuario");
            break;
        case 4:
            printf("Voce escolheu a opcao: Limpeza");
            break;
        default:
            printf("Opcao invalida, escolha outra porfavor");
            break;
    }

    printf("Exercicio 2\n\n");
    int mes_ano;
    printf("Digite um mes do ano: ");
    scanf("%d", &mes_ano);
        
        switch(mes_ano){
            case 2:
                printf("Mes com 28 ou 29 dias\n");
                break;
            case 4: case 6: case 9: case 11:
                printf("Meses com 30 dias\n");
                break;
            case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Meses com 31 dias\n");
                break;
            default:
                printf ("Error!!!\n\n");
                break;
        }
    
    printf("Exercicio 3\n\n");
    char operador;

    double num1, num2;
    printf("Digite o primeiro numero:  \n");
    scanf("%lf", &num1);
    printf("Digite o operador: + - * /  \n");
    scanf(" %c", &operador);
    printf("Digite o segundo numero:  \n");
    scanf("%lf", &num2);

    switch(operador){
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;
        default:
            printf ("Error!!!");
            break;
    }

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