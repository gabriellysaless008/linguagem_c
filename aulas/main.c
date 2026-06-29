#include <stdio.h>
#include <string.h>

struct Livros{
    int id;
    char titulo[200];
    char autor[200];
    int ano;
    float preco;

};

int main(){
    printf("Exercicio 2\n\n");
    struct Livros livros[5];
    
    for(int i = 0; i < 5; i++){
        livros[i].id = i + 1;
        printf("Insira o titulo do livro:  %d\n", i + 1);
        scanf(" %[^\n]", livros[i].titulo);
        printf("Insira o autor do livro: %d\n", i + 1);
        scanf(" %[^\n]", livros[i].autor);
        printf("Insira o ano do livro: %d\n", i + 1);
        scanf("%d", &livros[i].ano);
        printf("Insira o preco do livro:  %d\n", i + 1);
        scanf("%f", &livros[i].preco);

    }

    for (int i = 0; i < 5; i++){
        printf("Livros id %d\n", livros[i].id);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n", livros[i].ano);
        printf("Preco: %.2f\n", livros[i].preco);
       
    }

    return 0;

}

    