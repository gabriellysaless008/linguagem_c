#include <stdio.h>
#include <string.h>

//#define MAX_CONTATOS 100

struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
};

int main() {
   struct Contato agenda[1];
    int totalContatos = 0;
    int opcao = 0;

    while (opcao != 3) {
        printf("\n--- AGENDA DE CONTATOS ---\n");
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contatos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        while (getchar() != '\n');

        if (opcao == 1) {
                printf("\n--- NOVO CONTATO ---\n");
                
                printf("Nome: ");
                fgets(agenda[totalContatos].nome, 50, stdin);
                strtok(agenda[totalContatos].nome, "\n");

                printf("Telefone: ");
                fgets(agenda[totalContatos].telefone, 20, stdin);
                strtok(agenda[totalContatos].telefone, "\n");

                printf("Email: ");
                fgets(agenda[totalContatos].email, 50, stdin);
                strtok(agenda[totalContatos].email, "\n");

                totalContatos++;
                printf("\nContato adicionado com sucesso!\n");
            }
        } 
        if (opcao == 2) {
            if (totalContatos == 0) {
                printf("Nenhum contato salvo.\n");
            } else {
                printf("\n--- LISTA DE CONTATOS ---\n");
                for (int i = 0; i < totalContatos; i++) {
                    printf("Contato %d:\n", i + 1);
                    printf("  Nome: %s\n", agenda[i].nome);
                    printf("  Telefone: %s\n", agenda[i].telefone);
                    printf("  Email: %s\n", agenda[i].email);
                    printf("-------------------------\n");
                }
            }
        } 
        else if (opcao != 3) {
            printf("\nOpcao invalida. Tente novamente.\n");
        }

        printf("\nPrograma encerrado.\n");
        return 0;
    }

   

// struct Contato{
//     int id;
//     char nome[200];
//     char telefone[200];
//     char email[200];

// };

// int main(){
//     printf("Exercicio 3\n\n");
//     struct Contato agenda[5];
    
//     for(int i = 0; i < 5; i++){
//         agenda[i].id = i + 1;
//         printf("Insira o titulo do livro:  %d\n", i + 1);
//         scanf(" %[^\n]", agenda[i].nome);
//         printf("Insira o autor do livro: %d\n", i + 1);
//         scanf(" %[^\n]", agenda[i].telefone);
//         printf("Insira o autor do livro: %d\n", i + 1);
//         scanf(" %[^\n]", agenda[i].email);

//     }

//     for (int i = 0; i < 5; i++){
//         printf("agenda id %d\n", agenda[i].id);
//         printf("Titulo: %s\n", agenda[i].nome);
//         printf("Autor: %s\n", agenda[i].telefone);
//         printf("Autor: %s\n", agenda[i].email);
       
//     }

//     return 0;

// }

    