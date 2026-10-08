#include <iostream>
#include <string>
using namespace std;

// exercicio 1
class Personagem {
public:
string nome;
int vida;

void mostrarPersonagem() {
cout << "Nome: " << nome << endl;
cout << "Vida: " << vida << endl;
}
};

class Guerreiro : public Personagem {
public:
int forca;

void atacarComEspada() {
cout << nome << " atacou com espada!" << endl;
}
};

class Mago : public Personagem {
public:
int magia;

void atacarComMagia() {
cout << nome << " atacou com Magia!" << endl;
}
};

// exercicio 2
class Item {
public:
string nome_item;
float peso;
string raridade;

void usar() {
cout << "Usando o item " << nome_item << "!" << endl;
}
};

class Arma : public Item {
public:
int dano;

void usar() {
cout << "Equipou " << nome_item << " causando " << dano << " de dano!" << endl;
}
};

class Pocao : public Item {
public:
int cura_pontos;

void usar() {
cout << "Usou " << nome_item << " e recuperou " << cura_pontos << " de vida!" << endl;
cout << "O item " << nome_item << " foi removido do inventario." << endl;
}
};

// exericio 3
class Produto {
public:
int id_codigo;
string nome;
float preco;
int quantidade_estoque;

void exibir_detalhes() {
cout << "ID: " << id_codigo << " Nome: " << nome 
<< " Preco: R$ " << preco << " Estoque: " << quantidade_estoque << endl;
}

float calcular_desconto(float porcentagem) {
return preco - (preco * (porcentagem / 100));
}
};

class ProdutoPerecivel : public Produto {
public:
string data_validade;

float calcular_desconto(float porcentagem, bool perto_vencimento) {
if (perto_vencimento) {
porcentagem = porcentagem + 10;
}
return preco - (preco * (porcentagem / 100));
}
};

class ProdutoEletronico : public Produto {
public:
int meses_garantia;

void exibir_detalhes() {
cout << "ID: " << id_codigo << "Nome: " << nome 
<< "Preco: R$ " << preco << " Estoque: " << quantidade_estoque 
<< "Garantia: " << meses_garantia << " meses" << endl;
}
};


// exercicio 4
class Funcionario {
public:
string cpf;
string nome;
float salario_base;

float calcular_salario_liquido() {
return salario_base;
}
};

class OperadorCaixa : public Funcionario {
public:
float adicional_quebra_de_caixa;

float calcular_salario_liquido() {
return salario_base + adicional_quebra_de_caixa;
}
};

class Gerente : public Funcionario {
public:
float bonus_meta_atingida;

float calcular_salario_liquido() {
return salario_base + bonus_meta_atingida;
}
};

int main() {
    cout << "exercicio 1\n" << endl;
    Guerreiro guerreiro;
    guerreiro.nome = "Arthur";
    guerreiro.vida = 100;
    guerreiro.forca = 60;
    guerreiro.mostrarPersonagem();
    guerreiro.atacarComEspada();

    Mago mago;
    mago.nome = "Merlin";
    mago.vida = 80;
    mago.magia = 80;
    mago.mostrarPersonagem();
    mago.atacarComMagia();

    cout << "\nexercicio 2\n" << endl;
    Arma espada;
    espada.nome_item = "Espada de Aco";
    espada.peso = 4.5;
    espada.raridade = "Rara";
    espada.dano = 50;
    espada.usar();

    Pocao pocao;
    pocao.nome_item = "Pocao de Vida";
    pocao.peso = 0.5;
    pocao.raridade = "Comum";
    pocao.cura_pontos = 30;
    pocao.usar();

    cout << "\nexercicio 3\n" << endl;
    ProdutoPerecivel leite;
    leite.id_codigo = 101;
    leite.nome = "Leite Integral";
    leite.preco = 5.0;
    leite.quantidade_estoque = 20;
    leite.data_validade = "20/10/2026";
    leite.exibir_detalhes();
    cout << "Preco com desconto (perto do vencimento): R$ " << leite.calcular_desconto(10, true) << endl;

    ProdutoEletronico tv;
    tv.id_codigo = 202;
    tv.nome = "Televisao 50 polegadas";
    tv.preco = 2500.0;
    tv.quantidade_estoque = 5;
    tv.meses_garantia = 12;
    tv.exibir_detalhes();

    cout << "\nexercicio 4" << endl;
    OperadorCaixa caixa;
    caixa.nome = "Ana";
    caixa.cpf = "111.222.333-44";
    caixa.salario_base = 2000.0;
    caixa.adicional_quebra_de_caixa = 200.0;
    cout << "Salario da " << caixa.nome << ": R$ " << caixa.calcular_salario_liquido() << endl;

    Gerente gerente;
    gerente.nome = "Carlos";
    gerente.cpf = "555.666.777-88";
    gerente.salario_base = 5000.0;
    gerente.bonus_meta_atingida = 1500.0;
    cout << "Salario do " << gerente.nome << ": R$ " << gerente.calcular_salario_liquido() << endl;

    return 0;
}