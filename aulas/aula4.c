//aula #4
#include <stdio.h>
#include <stdbool.h>

int main(){
 char letra;
 int idade;
 float altura;

 printf("Digite a primeira letra do seu nome: ");
 //dar espaço antes do "%c" -> " %c" para limpar o buffer//
 scanf(" %c", &letra);//escaneando um caractere//
 printf("Digite sua idade: ");
 scanf(" %d", &idade);
 printf("Digite sua altura: ");
 scanf(" %f", &altura); // aqui vai apenas " %f" sem nenhum número, pois irá dar erro!!!//

 printf("Primeira letra do seu nome -> %c\n", letra);
 printf("Sua idade -> %d\n", idade);
 printf("Sua altura -> %.2f\n", altura);
 
 return 0;
    
}