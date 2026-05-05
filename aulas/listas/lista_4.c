#include <stdio.h>

int main(){

    printf("Exercicio 1\n\n");
    int dia_semana;
    printf("Digite o numero do dia semana: \n");
    scanf("%d", &dia_semana);

    switch(dia_semana){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n\n");
            break;
        default:
            printf ("Error!!!\n\n");
            break;

    }

    printf("Exercicio 2\n\n");
    int mes_ano;
    printf("Digite um mes do ano: ");
    scanf("%d", &mes_ano);
        
        switch(mes_ano){
            case 1: 
                printf("Janeiro\n");
                printf("Mes com 31 dias\n");
                break;
            case 2:
                printf("Fevereiro");
                printf("Mes com 28 ou 29 dias");
                break;
            case 3:
                printf("Marco\n");
                printf("Mes com 31 dias\n");
                break;
            case 4:
                printf("Abril\n");
                printf("Mes com 30 dias\n");
                break;
            case 5:
                printf("Maio\n");
                printf("Mes com 31 dias\n");
                break;
            case 6:
                printf("Junho\n");
                printf("Mes com 30 dias\n");
                break;
            case 7:
                printf("Julho\n");
                printf("Mes com 31 dias\n");
                break;
            case 8:
                printf("Agosto\n");
                printf("Mes com 31 dias\n");
                break;
            case 9:
                printf("Setembro\n");
                printf("Mes com 30 dias\n");
                break;
            case 10:
                printf("Outubro\n");
                printf("Mes com 31 dias\n");
                break;
            case 11:
                printf("Novembro");
                printf("Mes com 30 dias\n");
                break;
            case 12:
                printf("Dezembro\n");
                printf("Mes com 31 dias\n\n");
                break;
            default:
                printf ("Error!!!\n\n");
                break;

        }

    printf("Exercicio 3\n\n");
    int codigo_lanche;
    printf("---Ola, seja bem vindo ao Dois Hermanos lanches!!---\n\n");
    printf("# -- Cardapio Dois Hermanos lanches -- #\n\n");
    printf("# 1 - XSalada\n");
    printf("# 2 - XBacon\n");
    printf("# 3 - XBacon Egg\n");
    printf("# 4 - XTudao\n");
    printf("# 5 - Dogao simples\n");
    printf("# 6 - Dogao completo\n\n");
    printf("Digite o numero do lanche desejado: ");
    scanf("%d", &codigo_lanche);
    switch(codigo_lanche){
        case 1:
            printf ("XSalada!!\n");
            printf("Fez uma otima escolha, segue as informacoes do produto: \n");
            printf("Preco, R$: 19.00\n");
            printf("Ingredientes: Hamburguer, Salada, Presunto, Queijo, Batata.\n");
            break;
        case 2:
            printf ("XBacon!!\n");
            printf("Fez uma otima escolha, segue as informacoes do produto: \n");
            printf("Preco, R$: 25.00\n");
            printf("Ingredientes: Hamburguer, Bacon, Presunto, Queijo, Batata, Alface, Tomate, Milho.\n");
            break;
        case 3:
            printf ("XBacon Egg!!\n");
            printf("Fez uma otima escolha, segue as informacoes do produto: \n");
            printf("Preco, R$: 27.00\n");
            printf("Ingredientes: Hamburguer, Bacon, Ovo, Presunto, Queijo, Batata, Alface, Tomate, Milho.\n");
            break;
        case 4:
            printf ("XTudao!!\n");
            printf("Fez uma otima escolha, segue as informacoes do produto: \n");
            printf("Preco, R$: 34.00\n");
            printf("Ingredientes: Hamburguer, Bacon, Calabresa, Frango, Ovo, Presunto, Queijo, Batata, Alface, Tomate, Milho.\n");
            break;
        case 5:
            printf ("Dogao simples!!\n");
            printf("Fez uma otima escolha, segue as informacoes do produto: \n");
            printf("Preco, R$: 17.00\n");
            printf("Ingredientes: Molho, Salshicha, Milho, Alface, Batata.\n");
            break;
        case 6:
            printf ("Dogao Loko!!\n");
            printf("Fez uma otima escolha, segue as informacoes do produto: \n");
            printf("Preco, R$: 24.00\n");
            printf("Ingredientes: Molho, Salshicha, Carne, Frango, Bacon, Queijo, Caabresa, Catupiry, Milho, Alface, Batata.\n\n");
            break;
    }

    printf("Exercicio 4\n\n");
    int codigo_produto;
    printf("// Lista de auxilio para os produtos //\n");
    printf("--- 1 a 10  --> Alimento nao-perecivel ---\n");
    printf("--- 11 a 20 --> Alimento perecivel      ---\n");
    printf("--- 21 a 30 --> Vestuario               ---\n");
    printf("--- 31 a 40 --> Eletronicos             ---\n\n");
    printf("Digite o codigo do produto:  \n");
    scanf("%d", &codigo_produto);
    switch(codigo_produto){
        case 1 ... 10:
            printf("Voce escolheu a opcao: Alimento nao-perecivel");
            break;
        case 11 ... 20:
            printf("Voce escolheu a opcao: Alimento perecivel");
            break;
        case 21 ... 30:
            printf("Voce escolheu a opcao: Vestuario");
            break;
        case 31 ... 40:
            printf("Voce escolheu a opcao: Eletronicos");
            break;
        default:
            printf("Opcao invalida, escolha outra porvafor");
            break;

        
    }

    int forma;
    float lado1, lado2, lado3, lado4, base, altura, basemenor, basemaior;
    float pi = 3.14, raio;
    pi = 3.14;

    printf("** Segue os numeros para poder calcular: **\n");
    printf("** 1 - Quadrado   ** \n");
    printf("** 2 - Retangulo  ** \n");
    printf("** 3 - Triangulo  ** \n");
    printf("** 4 - Circulo    ** \n");
    printf("** 5 - Trapezio   ** \n");
    scanf("%d", &forma);

    switch(forma){
        case 1:
            printf("// Quadrado //\n");
            printf("Informe o primeiro lado: \n");
            scanf("%f", &lado1);
            printf("Informe o segundo lado: \n");
            scanf("%f", &lado2);
            printf("A area foi de: %.2f\n", lado1 * lado2);
            printf("O perimetro foi de: %.2f\n\n", 4 * lado1);
            break;

        case 2:
            printf("// Retangulo //\n");
            printf("Informe a base: \n");
            scanf("%f", &base);
            printf("Informe a altura: \n");
            scanf("%f", &altura);
            printf("A area foi de: %.2f\n", base * altura);
            printf("O perimetro foi de: %.2f\n\n", 2 * (base + altura));
            break;

        case 3:
            printf("// Triangulo //\n");
            printf("Informe a base: \n");
            scanf("%f", &base);
            printf("Informe a altura: \n");
            scanf("%f", &altura);
            printf("Informe um lado: \n");
            scanf("%f", &lado1);
            printf("A area foi de: %.2f\n", (base * altura)/2);
            printf("O perimetro foi de: %.2f\n\n", lado1 * 3);
            break;

        case 4:
            printf("// Circulo //\n");
            printf("Informe o raio: \n");
            scanf("%f", &raio);
            printf("A area foi de: %.2f\n", pi * (raio * raio));
            printf("O perimetro foi de: %.2f\n\n", 2 * pi * raio);
            break;

        case 5:
            printf("// Trapezio //\n");
            printf("Informe a base maior: \n");
            scanf("%f", &basemaior);
            printf("Informe a base menor: \n");
            scanf("%f", &basemenor);
            printf("Informe a altura: \n");
            scanf("%f", &altura);
            printf("Informe um lado: \n");
            scanf("%f", &lado1);
            printf("A area foi de: %.2f\n", ((basemaior + basemenor) * altura) / 2);
            printf("O perimetro foi de: %.2f\n\n", 4 * lado1);
            break;

        default:
            printf("Opcao invalida, escolha outra porvafor");
            break;
        
    }

    return 0;
    }