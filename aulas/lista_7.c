// lista for // 

#include <stdio.h>

int main(){
    printf("Exercicio 1\n\n");
    for(int i = 0; i <= 10; i++){ 
    printf("%d + %d = %d \n", i, i, i + i);
    }
    
    printf("Exercicio 2\n\n");
    int num;
    printf("Insira um numero qualquer: \n");
    scanf("%d", &num);

    for(int tabuada = 1; tabuada <= 10; tabuada++){
        printf("%d x %d = %d\n", tabuada, num, tabuada * num);
        
    }

    printf("Exercicio 3\n\n");
    int n_ini, n_fim;
    printf("Insira o inicio do comeco do intervalo:  ");
    scanf("%d", &n_ini);
    printf("Insira o inicio do fim do intervalo:  ");
    scanf("%d", &n_fim);

    for(int intervalo = n_ini; intervalo >= n_fim; intervalo--){
        printf("%d \n", intervalo);
    }

       
    printf("Exercicio 4\n\n");+
    int valor, valor_maior = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor >= valor_maior){
            valor_maior = valor;
        }
    } 
        printf("Valor maior: %d", valor_maior);

    printf("Exercicio 5\n\n");
    int idade, idade_maior = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if (idade >= 18){
            idade_maior++;
        }
    } 
        printf("Pessoas maiores de idade: %d", idade_maior);

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

    printf("Exercicio 7\n\n");
    int valor, valor_par = 0, valor_impar = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor % 2 == 0){
            valor = valor_par;
            valor_par++;
            }else{
                valor_impar++;
                
        }   
    } 
        printf("Numeros pares: %d\nNumeros impares: %d\n\n",valor_par, valor_impar);

    printf("Exercicio 8\n\n");
    int n = 0, num1 = 0, num2 = 1, proxnum;
    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("%d ", num1);
        
        proxnum = num1 + num2;
        num1 = num2;
        num2 = proxnum;
    }
        printf("Sequencia de Fibonacci (%d termos):\n", n); 

    printf("Exercicio 9\n\n");
    int nota = 0, media = 0, soma;
    for(int i = 1; i <= 10; i++){
        printf("Digite uma nota: ");
        scanf("%d", &nota);
        soma += nota;
        media = soma / 10;

    } printf("Sua media foi: %d", media);
     
    return 0;
}
