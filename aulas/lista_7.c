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
     
    return 0;
}
