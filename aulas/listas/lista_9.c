#include <stdio.h>

int main(){
    printf("Exercicio 1\n\n");
    int matriz[3][3] = {{2, 5, 10}, {4, 5, 6}, {7, 8, 9}};
    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
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
    
    printf("Exercicio 2\n\n");
    int matriz[3][3] = {{9, 8, 7}, 
                        {4, 6, 5},
                        {1, 3, 2}};
    int k = 0;
     for (int i = 0; i < 3; i++){
        for (int y = 0; y < 3; y++){
            printf("%d ", matriz[i][y] * matriz[0][k]);
        }
        k++;
        printf("\n");
    }
    printf("Exercicio 3\n\n");  
    int matriz3[3][3];
    int i3, j3;

    printf("preencha a matriz 3x3 com numeros inteiros:\n\n");
    
    for(i3 = 0; i3 < 3; i3++) {
        for(j3 = 0; j3 < 3; j3++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i3, j3);
            scanf("%d", &matriz3[i3][j3]);
        }
    }

    printf("\nmatriz 3x3 preenchida:\n\n");
    
    for(i3 = 0; i3 < 3; i3++) {
        for(j3 = 0; j3 < 3; j3++) {
            printf("%d ", matriz3[i3][j3]);
        }
        printf("\n");
    }

    printf("Exercicio 4\n\n");
    int matriz4[4][4] = {
        {1, 2, 3, 4},
        {2, 4, 6, 8},
        {3, 6, 9, 12},
        {4, 8, 12, 16}
    };
    int i4, j4, soma;
    
    printf("soma de cada linha:\n");
    for(i4 = 0; i4 < 4; i4++) {
        soma = 0;
        for(j4 = 0; j4 < 4; j4++) {
            soma = soma + matriz4[i4][j4];
        }
        printf("linha %d: %d\n", i4, soma);
    }

    printf("Exercicio 5\n\n");
    int mat5[4][4] = {
        {1, 2, 3, 4},
        {2, 4, 6, 8},
        {3, 6, 9, 12},
        {4, 8, 12, 16}
    };
    
    printf("matriz:\n");
    for(int i5 = 0; i5 < 4; i5++) {
        for(int j5 = 0; j5 < 4; j5++) {
            printf("%3d ", mat5[i5][j5]);
        }
        printf("\n");
    }
    
    printf("\nsoma das colunas:\n");
    for(int j5 = 0; j5 < 4; j5++) {
        int soma5 = 0;
        for(int i5 = 0; i5 < 4; i5++) {
            soma5 += mat5[i5][j5];
        }
        printf("coluna %d: %d\n", j5+1, soma5);
    }

    printf("Exercicio 6\n\n");
    int A[2][2], B[2][2], C[2][2];
    int i6, j6;
    
    printf("matriz 1:\n");
    for(i6 = 0; i6 < 2; i6++) {
        for(j6 = 0; j6 < 2; j6++) {
            scanf("%d", &A[i6][j6]);
        }
    }

    printf("matriz 2: \n");
    for(i6 = 0; i6 < 2; i6++) {
        for(j6 = 0; j6 < 2; j6++) {
            scanf("%d", &B[i6][j6]);
        }
    }

    printf("resultado\n");
    for(i6 = 0; i6 < 2; i6++) {
        for(j6 = 0; j6 < 2; j6++) {
            C[i6][j6] = A[i6][j6] * B[i6][j6];
            printf("%d ", C[i6][j6]);
        }
        printf("\n");
    }

    printf("Exercicio 7\n\n");
    int original[4][4], espelhada[4][4];
    int i7, j7;
    
    printf("digite os 16 numeros da matriz 4x4:\n");
    for(i7 = 0; i7 < 4; i7++) {
        for(j7 = 0; j7 < 4; j7++) {
            scanf("%d", &original[i7][j7]);
        }
    }
    
    printf("matriz original\n");
    for(i7 = 0; i7 < 4; i7++) {
        for(j7 = 0; j7 < 4; j7++) {
            printf("%d ", original[i7][j7]);
        }
        printf("\n");
    }

    for(i7 = 0; i7 < 4; i7++) {
        for(j7 = 0; j7 < 4; j7++) {
            espelhada[i7][j7] = original[3 - i7][j7];
        }
    }
    
    printf("matriz espelhada\n");
    for(i7 = 0; i7 < 4; i7++) {
        for(j7 = 0; j7 < 4; j7++) {
            printf("%d ", espelhada[i7][j7]);
        }
        printf("\n");
    }

    printf("exercicio 8\n\n");
    int matriz8[3][3];
    int fib[9];
    int i8, j8, k;

    fib[0] = 0;
    fib[1] = 1;
    
    for (i8 = 2; i8 < 9; i8++) {
        fib[i8] = fib[i8-1] + fib[i8-2];
    }

    k = 0;
    for (i8 = 0; i8 < 3; i8++) {
        for (j8 = 0; j8 < 3; j8++) {
            matriz8[i8][j8] = fib[k];
            k++;
        }
    }

    printf("matriz 3x3 com os primeiros 9 numeros de fibonacci:\n\n");
    for (i8 = 0; i8 < 3; i8++) {
        for (j8 = 0; j8 < 3; j8++) {
            printf("%d\t", matriz8[i8][j8]);
        }
        printf("\n");
    }

    return 0;
}   
