#include <stdio.h>
#include <string.h>

struct Aluno{
    int id;
    char nome[200];
    int idade;
    float nota;

};

int main(){
    printf("Exercicio 1\n\n");
    struct Aluno alunos[1];
    
    for(int i = 0; i < 1; i++){
        alunos[i].id = i + 1;
        printf("Insira o nome do aluno:  %d\n", i + 1);
        scanf("%[^\n]", alunos[i].nome);
        printf("Insira a idade do aluno: %d\n", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("Insira a altura do aluno:  %d\n", i + 1);
        scanf("%f", &alunos[i].nota);
        getchar();
    }

    for (int i = 0; i < 1; i++){
        printf("Aluno id %d\n", alunos[i].id);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
       
    }

    return 0;
}


// -- Exercicio 2 -- //
// struct Livros{
//     int id;
//     char titulo[200];
//     char autor[200];
//     int ano;
//     float preco;

// };

// int main(){
//     printf("Exercicio 2\n\n");
//     struct Livros livros[5];
    
//     for(int i = 0; i < 5; i++){
//         livros[i].id = i + 1;
//         printf("Insira o titulo do livro:  %d\n", i + 1);
//         scanf(" %[^\n]", livros[i].titulo);
//         printf("Insira o autor do livro: %d\n", i + 1);
//         scanf(" %[^\n]", livros[i].autor);
//         printf("Insira o ano do livro: %d\n", i + 1);
//         scanf("%d", &livros[i].ano);
//         printf("Insira o preco do livro:  %d\n", i + 1);
//         scanf("%f", &livros[i].preco);

//     }

//     for (int i = 0; i < 5; i++){
//         printf("Livros id %d\n", livros[i].id);
//         printf("Titulo: %s\n", livros[i].titulo);
//         printf("Autor: %s\n", livros[i].autor);
//         printf("Ano: %d\n", livros[i].ano);
//         printf("Preco: %.2f\n", livros[i].preco);
       
//     }

//     return 0;

// }


// -- Exercicio 3 -- //
// struct Contato {
//     char nome[50];
//     char telefone[20];
//     char email[50];
// };

// int main() {
//    struct Contato agenda[1];
//     int totalContatos = 0;
//     int opcao = 0;

//     while (opcao != 3) {
//         printf("\n--- AGENDA DE CONTATOS ---\n");
//         printf("1. Adicionar Contato\n");
//         printf("2. Listar Contatos\n");
//         printf("3. Sair\n");
//         printf("Escolha uma opcao: ");
//         scanf("%d", &opcao);

//         while (getchar() != '\n');

//         if (opcao == 1) {
//                 printf("\n--- NOVO CONTATO ---\n");
                
//                 printf("Nome: ");
//                 fgets(agenda[totalContatos].nome, 50, stdin);
//                 strtok(agenda[totalContatos].nome, "\n");

//                 printf("Telefone: ");
//                 fgets(agenda[totalContatos].telefone, 20, stdin);
//                 strtok(agenda[totalContatos].telefone, "\n");

//                 printf("Email: ");
//                 fgets(agenda[totalContatos].email, 50, stdin);
//                 strtok(agenda[totalContatos].email, "\n");

//                 totalContatos++;
//                 printf("\nContato adicionado com sucesso!\n");
//             }
//         } 
//         if (opcao == 2) {
//             if (totalContatos == 0) {
//                 printf("Nenhum contato salvo.\n");
//             } else {
//                 printf("\n--- LISTA DE CONTATOS ---\n");
//                 for (int i = 0; i < totalContatos; i++) {
//                     printf("Contato %d:\n", i + 1);
//                     printf("  Nome: %s\n", agenda[i].nome);
//                     printf("  Telefone: %s\n", agenda[i].telefone);
//                     printf("  Email: %s\n", agenda[i].email);
//                     printf("-------------------------\n");
//                 }
//             }
//         } 
//         else if (opcao != 3) {
//             printf("\nOpcao invalida. Tente novamente.\n");
//         }

//         printf("\nPrograma encerrado.\n");
//         return 0;
//     }
