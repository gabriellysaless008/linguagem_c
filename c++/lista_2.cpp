#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "exercicio 2 \n\n" << endl;
    vector<string> fila = {"Ana", "Bruno", "Carlos", "Daniel"};

    cout << "Fila antes das alteracoes:\n";
    for (int i = 0; i < fila.size(); i++) {
        cout << i + 1 << "o cliente: " << fila[i] << "\n";
    }

    fila.insert(fila.begin() + 1, "VIP - Roberto");

    fila.pop_back();

    cout << "\nFila depois das alteracoes:\n";
    for (int i = 0; i < fila.size(); i++) {
        cout << i + 1 << "o cliente: " << fila[i] << "\n";
    }

    cout << "exercicio 3 \n\n" << endl;
    std::vector<std::string> lista = {"Ana", "Carlos", "Beto", "Diana"};

    *(lista.begin() + 2) = "Roberto";

    for (const auto& nome : lista) {
        std::cout << nome << " ";
    }

    cout << "exercicio 4 \n\n" << endl;
    vector<string> carros;
    string novoCarro;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome de um carro: ";
        cin >> novoCarro;
        
        carros.push_back(novoCarro);

        cout << "Ultimo elemento com .back(): " << carros.back() << endl;
        cout << "Ultimo elemento com *(end() - 1): " << *(carros.end() - 1) << endl;

        cout << "Deseja continuar inserindo? (s/n): ";
        cin >> continuar;
    }

    cout << "exercicio 5 \n\n" << endl;
    vector<string> produtos = {"Camiseta", "Calça", "Tênis", "Boné"};

    cout << "Quantidade inicial de itens: " << produtos.size() << endl;

    produtos.clear();

    cout << "O vetor esta vazio? " << (produtos.empty() ? "Sim" : "Nao") << endl;
    cout << "Tamanho atualizado do vetor: " << produtos.size() << endl;

    cout << "exercicio 6 \n\n" << endl;
    vector<float> notas(4);
    float soma = 0.0f;

    for (int i = 0; i < 4; i++) {
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    for (float nota : notas) {
        soma += nota;
    }

    float media = soma / 4.0f;

    cout << "A media aritmetica e: " << media << endl;

    cout << "exercicio 7 \n\n" << endl;
    vector<string> cidades = {"Curitiba", "São Paulo", "Rio de Janeiro", "Belo Horizonte", "Salvador", "Curitiba"};
    
    string busca;
    bool encontrada = false;

    cout << "Digite o nome de uma cidade: ";
    getline(cin, busca);

    for (int i = 0; i < cidades.size(); i++) {
        if (cidades[i] == busca) {
            encontrada = true;
            break;
    }

    if (encontrada) {
        cout << "A cidade " << busca << " esta na lista!" << endl;
    } else {
        cout << "A cidade " << busca << " NAO esta na lista!" << endl;
    }

    cout << "exercicio 8 \n\n" << endl;
    vector<string> original = {"A", "B", "C", "D", "E"};
    int tamanho = original.size();
    vector<string> invertido(tamanho);

    for (int i = 0; i < tamanho; i++) {
        invertido[i] = original[tamanho - 1 - i];
    }

    cout << "Vetor invertido: {";
    for (int i = 0; i < tamanho; i++) {
        cout << "\"" << invertido[i] << "\"";
        if (i < tamanho - 1) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}

}