#include <stdio.h>

int main(){
printf("Exercicio 3\n\n");
int matriz[4][4] = {{4, 3, 2, 1}, {2, 1, 5, 7}, {9, 8, 7, 6}, {2, 1, 4, 8}};
for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("matriz * coluna:\n");
    int k = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j] * matriz[0][k]);
        }
        k++;
        printf("\n");
    }
    printf("\n");
}  



    