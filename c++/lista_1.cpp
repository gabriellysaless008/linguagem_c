#include <iostream>
using namespace std;

int main(){
    cout << "exercicio 1 \n\n" << endl;
    string nome1;
    cout << "Digite seu nome: ";
    getline(cin, nome1);
    cout << "Bem-vindo(a), " << nome1 << "!" << endl;

    cout << "exercicio 2 \n\n" << endl;
    int idade2;
    cout << "Digite sua idade: ";
    cin >> idade2;
    cout << "Voce tem " << idade2 << " anos" << endl;

    cout << "exercicio 3 \n\n" << endl;
    float altura3;
    cout << "Digite sua altura: ";
    cin >> altura3;
    cout << "Sua altura e " << idade2 << " metros" << endl;

    cout << "exercicio 4 \n\n" << endl;
    float salario4;
    cout << "Digite seu salario: ";
    cin >> salario4;
    cout << "Seu salario e " << salario4 << " R$" << endl;

    cout << "exercicio 5 \n\n" << endl;
    char letra5;
    cout << "Digite uma letra: ";
    cin >> letra5;
    cout << "A letra que voce digitou " << letra5 << " !" << endl;

    cout << "exercicio 6\n\n" << endl;
    bool aprovado6;
    cout << "Digite 1 para aprovado ou 0 para reprovado: ";
    cin >> aprovado6;
    cout << "Status: " << aprovado6 << endl;

    cout << "exercicio 7\n\n" << endl;
    string nome7;
    int idade7;
    float altura7;
    
    cout << "Digite seu nome: ";
    cin.ignore();
    getline(cin, nome7);
    cout << "Digite sua idade: ";
    cin >> idade7;
    cout << "Digite sua altura: ";
    cin >> altura7;
    
    cout << "cadastro\n" << endl;
    cout << "Nome: " << nome7 << endl;
    cout << "Idade: " << idade7 << " anos" << endl;
    cout << "Altura: " << altura7 << " metros" << endl;



    cout << "exercicio 8\n\n" << endl;
    string nome8;
    int idade8;
    float altura8, salario8;
    char sexo8;
    
    cout << "Digite seu nome completo: ";
    cin.ignore();
    getline(cin, nome8);
    cout << "Digite sua idade: ";
    cin >> idade8;
    cout << "Digite sua altura: ";
    cin >> altura8;
    cout << "Digite seu salario: R$ ";
    cin >> salario8;
    cout << "Digite seu sexo (M/F): ";
    cin >> sexo8;
    
    cout << "cadastro\n" << endl;
    cout << "Nome: " << nome8 << endl;
    cout << "Idade: " << idade8 << " anos" << endl;
    cout << "Altura: " << altura8 << " metros" << endl;
    cout << "Salario: R$ " << salario8 << endl;
    cout << "Sexo: " << sexo8 << endl;



    cout << "exercicio 9\n\n" << endl;
    string modelo9;
    int ano9;
    float valor9;
    char categoria9;
    
    cout << "Digite o modelo do veiculo: ";
    cin.ignore();
    getline(cin, modelo9);
    cout << "Digite o ano de fabricacao: ";
    cin >> ano9;
    cout << "Digite o valor do veiculo: R$ ";
    cin >> valor9;
    cout << "Digite a categoria (A, B ou C): ";
    cin >> categoria9;
    
    cout << "\ndados veiculo" << endl;
    cout << "Modelo: " << modelo9 << endl;
    cout << "Ano: " << ano9 << endl;
    cout << "Valor: R$ " << valor9 << endl;
    cout << "Categoria: " << categoria9 << endl;



    cout << "exercicio 10\n\n" << endl;
    string nome10, turma10;
    int idade10;
    float altura10, media10;
    bool matriculado10;
    
    cout << "Digite o nome completo: ";
    cin.ignore();
    getline(cin, nome10);
    cout << "Digite a idade: ";
    cin >> idade10;
    cout << "Digite a altura: ";
    cin >> altura10;
    cout << "Digite a media final: ";
    cin >> media10;
    cout << "Digite a turma: ";
    cin.ignore();
    getline(cin, turma10);
    cout << "Digite 1 para matriculado ou 0 para nao matriculado: ";
    cin >> matriculado10;
    
    cout << "perfil aluno\n" << endl;
    cout << "Nome: " << nome10 << endl;
    cout << "Idade: " << idade10 << " anos" << endl;
    cout << "Altura: " << altura10 << " metros" << endl;
    cout << "Media final: " << media10 << endl;
    cout << "Turma: " << turma10 << endl;
    cout << "Matriculado: " << (matriculado10 ? "Sim" : "Nao") << endl;

    return 0;


}