#include <iostream>
using namespace std;

int main(){
    //int -> números inteiros
    //idade, quantidade..
   
    int idade = 35;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "voce tem " << idade << " anos" << endl;
   
    //float/double -> número com vírgula(ponto)
    //altura, preço...
   
    double altura = 1.74;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << "Sua altura e " << altura << endl;
   

    //char -> caractere único
    //uma letra/simbolo

    char letra = 'A';
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "A letra digitada foi -> " << letra << endl;

    //bool -> sim ou não
    //true(1) or false(0)
   
    bool ligado = true;
    cout << ligado << endl;
    cout << "Digite 1 ligado ou 0 desligado" << endl;
    cin >> ligado;
    cout << ligado << endl;
   
    //string -> palavras ou frases
    //nome, endereço, cidade

    string nome = "Alexandre";
    cout << nome << endl;
    cout << "Digite seu nome: ";
    //cin >> nome;(Recebe até o espaço)
    getline(cin, nome);//recebe tudo que é digitado
    cout << nome << endl;
    return 0;
}

/*
    Tipos de dados
    tipos de dados definem qual tipo de informaçào
    uma variável pode armazenar...
   
    Variável
    Uma variável é um espaço na memória
    que recebe um tipo de informação
*/
