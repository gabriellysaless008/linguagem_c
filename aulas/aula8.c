#include <stdio.h>

int main(){
    int glicemia;
    char op;
    printf("Voce esta gravida? s/n \n");
    scanf("%c", &op);

    switch (op){

        case 's':{
        printf("Digite o valor da glicemia\n");
        scanf("%d", &glicemia);
        (glicemia < 92) ? printf("ta suave") : printf("vai no medico");
        break;
    }
    case 'n': {
        printf("Digite o valor da glicemia\n");
        scanf("%d", &glicemia);
        (glicemia < 100) ? printf("ta suave") : printf("vai no medico");
        break;
        }
    default:
    printf("ta doidao?\n");
    break;

    }

    return 0;


}