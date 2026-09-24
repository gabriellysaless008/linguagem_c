//exe1

#include <iostream>
using namespace std;

class Produto{
public:
string nome;
int barcode;
double preco;
int qtdEstoque;
string categoria;

void exibirProduto(){
cout << "Nome: " << nome << endl;
cout << "Codigo de barras: " << barcode << endl;
cout << "Preço: " << preco << endl;
cout << "Quantidade em estoque: " << qtdEstoque << endl;
cout << "Categoria: " << categoria << endl;
};
void atualizarProduto(){
cout << "Insira o novo preço: " << endl;
cin >> preco;
}
void venderProduto(int quantidadeVendida){

}
};
int main() {
Produto produto1;
produto1.nome = "Camiseta";
produto1.barcode = 123456789;
produto1.preco = 29.99;
produto1.qtdEstoque = 50;
produto1.categoria = "Vestuário";

produto1.exibirProduto();

produto1.atualizarProduto();

produto1.exibirProduto();
return 0;
}

class Perfil{
public:
string username;
string biografia;
int seguidores;
int seguindo;
bool verificado;

void exibirPerfil(){
cout << "Nome de perfil: " << username << endl;
cout << "Biografia: " << biografia << endl;
cout << "Seguidores: " << seguidores << endl;
cout << "Seguindo: " << seguindo << endl;
cout << "Verificado: " << verificado << endl;
}
}