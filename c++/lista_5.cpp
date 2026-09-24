//exe1

#include <iostream>
using namespace std;


int main() {
    cout << "Exercicio 1" << endl;
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

cout << "Exercicio 2" << endl;

Perfil influenciador;

influenciador.username = "@joao";
influenciador.biografia = "Criador de conteudo";
influenciador.seguidores = 1000;
    influenciador.seguindo = 300;
    influenciador.verificado = true;

    influenciador.exibirPerfil();

    influenciador.ganharSeguidor();

    influenciador.editarBiografia("Criador de conteudo sobre tecnologia");
    
    cout << "\nDepois das alteracoes:\n";

    influenciador.exibirPerfil();


    Perfil pessoal;

    pessoal.username = "@maria";
    pessoal.biografia = "Meu perfil pessoal";
    pessoal.seguidores = 200;
    pessoal.seguindo = 150;
    pessoal.verificado = false;

    cout << "\nPerfil pessoal:\n";
    pessoal.exibirPerfil();


    Perfil marca;

    marca.username = "@minha_empresa";
    marca.biografia = "Empresa de tecnologia";
    marca.seguidores = 5000;
    marca.seguindo = 50;
    marca.verificado = true;
    
    cout << "\nPerfil da marca:\n";
    marca.exibirPerfil();

    cout << "Exercicio 3" << endl;
    ContaBancaria joao;

    joao.titular = "Joao";
    joao.numeroConta = 12345;
    joao.saldo = 1000;
    joao.limiteChequeEspecial = 500;

    cout << "===== CONTA DO JOAO =====" << endl;
    joao.verSaldo();

    joao.depositar(200);

    cout << "\nDepois do deposito:" << endl;
    joao.verSaldo();

    joao.sacar(500);

    cout << "\nDepois do saque:" << endl;
    joao.verSaldo();


    ContaBancaria maria;

    maria.titular = "Maria";
    maria.numeroConta = 67890;
    maria.saldo = 2000;
    maria.limiteChequeEspecial = 1000;

    cout << "\n===== CONTA DA MARIA =====" << endl;
    maria.verSaldo();


    ContaBancaria pedro;

    pedro.titular = "Pedro";
    pedro.numeroConta = 54321;
    pedro.saldo = 500;
    pedro.limiteChequeEspecial = 300;

    cout << "\n===== CONTA DO PEDRO =====" << endl;
    pedro.verSaldo();

    cout << "Exercicio 4" << endl;
    Carro sedan("Toyota", "Corolla", 2025, 15000, 250.00);
    Carro esportivo("Ferrari", "488 GTB", 2023, 8000, 1500.00);
    Carro suv("Honda", "HR-V", 2024, 12000, 300.00);

    sedan.exibirFichaTecnica();
    sedan.viajar(350);
    cout << "Aluguel por 5 dias: R$ "
         << sedan.calcularAluguel(5) << endl;

    esportivo.exibirFichaTecnica();
    esportivo.viajar(100);
    cout << "Aluguel por 3 dias: R$ "
         << esportivo.calcularAluguel(3) << endl;

    suv.exibirFichaTecnica();
    suv.viajar(200);
    cout << "Aluguel por 7 dias: R$ "
         << suv.calcularAluguel(7) << endl;

    cout << "Exercicio 5" << endl;
        Livro fantasia(
        "Harry Potter e a Pedra Filosofal",
        "J. K. Rowling",
        264,
        39.90
    );

    Livro ficcao(
        "Duna",
        "Frank Herbert",
        680,
        59.90
    );

    Livro biografia(
        "Steve Jobs",
        "Walter Isaacson",
        624,
        69.90
    );

    fantasia.mostrarInfo();
    fantasia.emprestar();
    fantasia.emprestar();
    fantasia.devolver();

    ficcao.mostrarInfo();
    ficcao.emprestar();

    biografia.mostrarInfo();
    biografia.emprestar();
    biografia.devolver();

    cout << "Exercicio 6" << endl;
    Smartphone premium(
        "Samsung",
        "Galaxy S25 Ultra",
        512,
        12,
        80
    );

    Smartphone intermediario(
        "Xiaomi",
        "Redmi Note 14",
        256,
        8,
        65
    );

    Smartphone entrada(
        "Motorola",
        "Moto G15",
        128,
        4,
        90
    );

    premium.especificacoes();
    premium.jogar(2);
    premium.carregar(30);

    intermediario.especificacoes();
    intermediario.jogar(3);
    intermediario.carregar(20);

    entrada.especificacoes();
    entrada.jogar(1);
    entrada.carregar(50);

    cout << "Exercicio 7" << endl;
    ItemCardapio hamburguer(
        "Hamburguer Artesanal",
        32.90,
        20,
        750,
        false
    );

    ItemCardapio salada(
        "Salada Caesar",
        24.90,
        10,
        350,
        true
    );

    ItemCardapio pizza(
        "Pizza Margherita",
        45.90,
        30,
        800,
        true
    );

    ItemCardapio batata(
        "Batata Frita",
        18.90,
        15,
        500,
        true
    );

    hamburguer.exibirItem();
    hamburguer.aplicarDesconto(10);
    hamburguer.alterarTempoPreparo(25);

    salada.exibirItem();
    salada.aplicarDesconto(15);

    pizza.exibirItem();
    pizza.alterarTempoPreparo(35);

    batata.exibirItem();
    batata.aplicarDesconto(5);


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
void ganharSeguidor() {
    seguidores++;
}

void editarBiografia(string novaBio) {
    biografia = novaBio;
    }
};

class ContaBancaria {
public:
    string titular;
    int numeroConta;
    double saldo;
    double limiteChequeEspecial;

    void verSaldo() {
        cout << "Titular: " << titular << endl;
        cout << "Numero da conta: " << numeroConta << endl;
        cout << "Saldo: R$ " << saldo << endl;
        cout << "Limite do cheque especial: R$ " << limiteChequeEspecial << endl;
        cout << "Disponivel: R$ " << saldo + limiteChequeEspecial << endl;
    }

    void depositar(double valor) {
        saldo = saldo + valor;
    }

    void sacar(double valor) {
        if (valor <= saldo + limiteChequeEspecial) {
            saldo = saldo - valor;
            cout << "Saque realizado com sucesso!" << endl;
        } else {
            cout << "Saldo insuficiente!" << endl;
        }
    }
};

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

class Carro {
private:
    string marca;
    string modelo;
    int ano;
    double quilometragem;
    double precoDiaria;

public:
    Carro(string marca, string modelo, int ano, double quilometragem, double precoDiaria) {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->quilometragem = quilometragem;
        this->precoDiaria = precoDiaria;
    }

    void exibirFichaTecnica() {
        cout << "\n--- Ficha Tecnica ---" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Quilometragem: " << quilometragem << " km" << endl;
        cout << "Diaria: R$ " << precoDiaria << endl;
    }

    void viajar(double distancia) {
        quilometragem += distancia;
        cout << "Viagem realizada! Nova quilometragem: "
             << quilometragem << " km" << endl;
    }

    double calcularAluguel(int dias) {
        return dias * precoDiaria;
    }
};

class Livro {
private:
    string titulo;
    string autor;
    int paginas;
    double preco;
    bool emprestado;

public:
    Livro(string titulo, string autor, int paginas, double preco) {
        this->titulo = titulo;
        this->autor = autor;
        this->paginas = paginas;
        this->preco = preco;
        emprestado = false;
    }

    void mostrarInfo() {
        cout << "\n--- Informacoes do Livro ---" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Paginas: " << paginas << endl;
        cout << "Preco: R$ " << preco << endl;
        cout << "Status: "
             << (emprestado ? "Emprestado" : "Disponivel") << endl;
    }

    void emprestar() {
        if (emprestado) {
            cout << "O livro \"" << titulo
                 << "\" ja esta emprestado!" << endl;
        } else {
            emprestado = true;
            cout << "O livro \"" << titulo
                 << "\" foi emprestado com sucesso!" << endl;
        }
    }

    void devolver() {
        if (emprestado) {
            emprestado = false;
            cout << "O livro \"" << titulo
                 << "\" foi devolvido!" << endl;
        } else {
            cout << "O livro \"" << titulo
                 << "\" ja esta disponivel." << endl;
        }
    }
};

class Smartphone {
private:
    string marca;
    string modelo;
    int armazenamento;
    int ram;
    double bateria;

public:
    Smartphone(string marca, string modelo, int armazenamento,
               int ram, double bateria) {
        this->marca = marca;
        this->modelo = modelo;
        this->armazenamento = armazenamento;
        this->ram = ram;
        this->bateria = bateria;
    }

    void especificacoes() {
        cout << "\n--- Especificacoes ---" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Armazenamento: " << armazenamento << " GB" << endl;
        cout << "Memoria RAM: " << ram << " GB" << endl;
        cout << "Bateria atual: " << bateria << "%" << endl;
    }

    void jogar(double horas) {
        double consumo = horas * 15;

        bateria -= consumo;

        if (bateria < 0) {
            bateria = 0;
        }

        cout << "Jogou por " << horas << " horas." << endl;
        cout << "Bateria restante: " << bateria << "%" << endl;
    }

    void carregar(double porcentagem) {
        bateria += porcentagem;

        if (bateria > 100) {
            bateria = 100;
        }

        cout << "Celular carregado!" << endl;
        cout << "Bateria atual: " << bateria << "%" << endl;
    }
};

class ItemCardapio {
private:
    string nome;
    double preco;
    int tempoPreparo;
    int calorias;
    bool vegetariano;

public:
    ItemCardapio(string nome, double preco, int tempoPreparo,
                 int calorias, bool vegetariano) {
        this->nome = nome;
        this->preco = preco;
        this->tempoPreparo = tempoPreparo;
        this->calorias = calorias;
        this->vegetariano = vegetariano;
    }

    void exibirItem() {
        cout << "\n--- Item do Cardapio ---" << endl;
        cout << "Nome: " << nome << endl;
        cout << fixed << setprecision(2);
        cout << "Preco: R$ " << preco << endl;
        cout << "Tempo de preparo: " << tempoPreparo << " minutos" << endl;
        cout << "Calorias: " << calorias << " kcal" << endl;

        if (vegetariano) {
            cout << "*** VEGETARIANO ***" << endl;
        } else {
            cout << "Nao vegetariano" << endl;
        }
    }

    void aplicarDesconto(double porcentagem) {
        preco -= preco * (porcentagem / 100);

        cout << "Desconto de " << porcentagem
             << "% aplicado!" << endl;
        cout << "Novo preco: R$ " << preco << endl;
    }

    void alterarTempoPreparo(int novoTempo) {
        tempoPreparo = novoTempo;

        cout << "Novo tempo de preparo: "
             << tempoPreparo << " minutos" << endl;
    }
};