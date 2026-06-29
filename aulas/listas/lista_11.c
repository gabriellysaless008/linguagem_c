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

struct Livros{
    int id;
    char titulo[200];
    char autor[200];
    int ano;
    float preco;

};

int main(){
    printf("Exercicio 1\n\n");
    struct Livros livros[5];
    
    for(int i = 0; i < 1; i++){
        livros[i].id = i + 1;
        printf("Insira o titulo do livro:  %d\n", i + 1);
        scanf("%[^\n]", livros[i].titulo);
        printf("Insira o autor do livro: %d\n", i + 1);
        scanf("%[^\n]", livros[i].autor);
        printf("Insira o ano do livro: %d\n", i + 1);
        scanf("%d", &livros[i].ano);
        printf("Insira o preco do livro:  %d\n", i + 1);
        scanf("%f", &livros[i].preco);
        getchar();
    }

    for (int i = 0; i < 1; i++){
        printf("Livros id %d\n", livros[i].id);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n", livros[i].ano);
        printf("Preco: %.2f\n", livros[i].preco);
       
    }

    return 0;

}