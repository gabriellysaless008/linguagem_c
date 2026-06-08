#include <stdio.h>
#include <string.h>

int main(){
    printf("Exercicio 1\n\n");
        char msg[20];
        int tamanho = 0;
        printf("Digite uma palavra: ");
        fgets(msg, sizeof(msg), stdin);
        for(tamanho = 0; msg[tamanho] != '\0' && msg[tamanho] != '\n'; tamanho++){
        }
        printf("O tamanho da string digitada e: %d caracteres\n", tamanho);

    printf("Exercicio 2\n\n");
        char str[100];
        printf("Digite uma string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        char a, b;
        printf("Digite um caractere a ser modificado: ");
        scanf(" %c", &a);
        printf("Digite o novo caractere: ");
        scanf(" %c", &b);
        printf("A string original: %s\n", str);
        int i = 0;
        while(str[i] != '\0'){
            if(str[i] == a){
                str[i] = b;
            }
            i++;
        }
        printf("A string modificada: %s\n", str);

    printf("Exercicio 3\n\n");
        char str[100];
        int i = 0;
        printd("Digite uma string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        while(str[i] != '\0'){
            if (str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - ('a' - 'A');
            }
            i++;
        }
        printf("A string modificada: %s\n", str);

    printf("Exercicio 4\n\n");
        char str[100], str2[100], str3[100];
        printf("Digite uma string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        printf("Digite outra string: ");
        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0';

        int i = 0, j = 0;
        while(str[i] != '\0'){
            str3[i] = str[i];
            i++;

        }
        while(str2[j] != '\0'){
            str3[i] = str2[j];
            i++;
            j++;
        }
        printf("A string concatenada: %s\n", str3);

    printf("Exercicio 5\n\n");
        char nome[100], genero[100], email[100];
        int idade;
        printf("Digite o nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Digite a idade: ");
        scanf("%d", &idade);
        getchar();
        
        printf("Digite o genero: ");
        fgets(genero, sizeof(genero), stdin);
        genero[strcspn(genero, "\n")] = '\0';

        printf("Digite o email: ");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0';
        printf("Nome: %s\n", nome);
        printf("Idade: %s\n", idade);
        printf("Genero: %s\n", genero);
        printf("Email: %s\n", email);

    return 0;
}