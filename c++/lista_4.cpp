#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    cout << "--- 1 Banco ---" << endl;
    queue<string> banco;
    banco.push("Ana");
    banco.push("Carlos");
    banco.push("Mariana");
    banco.push("Pedro");
    banco.push("Lucas");

    while (!banco.empty()) {
        cout << "Atendendo: " << banco.front() << endl;
        banco.pop();
    }

    cout << "\n--- 2 Supermercado ---" << endl;
    queue<string> mercado;
    mercado.push("João");
    mercado.push("Beatriz");
    cout << "Atendendo: " << mercado.front() << endl;
    mercado.pop();
    cout << "Esperando: " << mercado.size() << endl;


    cout << "\n--- 3 Cantina ---" << endl;
    queue<string> cantina;
    cantina.push("Sofia");
    cantina.push("Mateus");
    cout << "Atendendo: " << cantina.front() << endl;
    cantina.pop();
    cout << "Esperando: " << cantina.size() << endl;

    cout << "\n--- 4 Restaurante ---" << endl;
    queue<string> restaurante;
    restaurante.push("Familia Silva");
    cout << "Chamando para mesa: " << restaurante.front() << endl;
    restaurante.pop();

    cout << "\n--- 5 Medico ---" << endl;
    queue<string> medico;
    medico.push("Fernanda");
    cout << "Proximo paciente: " << medico.front() << endl;
    medico.pop();

    cout << "\n--- 6 Impressao ---" << endl;
    queue<string> impressora;
    impressora.push("prova.docx");
    impressora.push("fototurma.png");
    impressora.push("provaparana.txt");

    while (!impressora.empty()) {
        cout << "Imprimindo: " << impressora.front() << endl;
        impressora.pop();
    }

    cout << "\n--- 7 Onibus ---" << endl;
    queue<string> onibus;
    onibus.push("Marcos");
    onibus.push("Leticia");

    while (!onibus.empty()) {
        cout << "Embarcando: " << onibus.front() << endl;
        onibus.pop();
    }

    cout << "\n--- 8 Cinema ---" << endl;
    queue<string> cinema;
    cinema.push("Thiago");
    cinema.push("Camila");

    cout << "Proximo: " << cinema.front() << endl;
    cout << "Atendendo: " << cinema.front() << endl;
    cinema.pop();
    cout << "Esperando: " << cinema.size() << endl;

    return 0;
}