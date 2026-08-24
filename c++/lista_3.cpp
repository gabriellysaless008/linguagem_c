#include <iostream>
using namespace std;
#include <stack>


int main() {
    cout << "Exercicio 1" << endl;
    stack<int> pilha1;

    if (pilha1.empty()) {
        cout << "Pilha vazia!" << endl;
    } else {
        cout << "Topo: " << pilha1.top() << endl;
    }

    pilha1.push(10);

    if (pilha1.empty()) {
        cout << "Pilha vazia!" << endl;
    } else {
        cout << "Topo: " << pilha1.top() << endl;
    }

    cout << "\nExercicio 2" << endl;
    stack<int> pilha2;
    pilha2.push(5);

    if (!pilha2.empty()) {
        pilha2.pop();
        cout << "Elemento removido!" << endl;
    } else {
        cout << "Alerta: Pilha vazia, nao da para desempilhar!" << endl;
    }

    if (!pilha2.empty()) {
        pilha2.pop();
        cout << "Elemento removido!" << endl;
    } else {
        cout << "Alerta: Pilha vazia, nao da para desempilhar!" << endl;
    }

    cout << "\nExercicio 3" << endl;
    stack<string> voltar;
    stack<string> avancar;
    string atual = "site1.com";

    voltar.push(atual);
    atual = "site2.com";
    while (!avancar.empty()) avancar.pop();

    if (!voltar.empty()) {
        avancar.push(atual);
        atual = voltar.top();
        voltar.pop();
    }

    if (!avancar.empty()) {
        voltar.push(atual);
        atual = avancar.top();
        avancar.pop();
    }

    cout << "Pagina atual: " << atual << endl;

    cout << "\nExercicio 4" << endl;
    string texto = "PILHA";
    stack<char> pilha4;

    for (char c : texto) {
        pilha4.push(c);
    }

    cout << "Entrada: " << texto << endl;
    cout << "Saida: ";
    while (!pilha4.empty()) {
        cout << pilha4.top();
        pilha4.pop();
    }
    cout << endl;

    cout << "\nExercicio 5" << endl;
    stack<int> p, pMin, pMax;
    int numero = 10;

    p.push(numero);
    if (pMin.empty()) {
        pMin.push(numero);
        pMax.push(numero);
    } else {
        pMin.push(min(numero, pMin.top()));
        pMax.push(max(numero, pMax.top()));
    }

    cout << "Menor: " << pMin.top() << endl;
    cout << "Maior: " << pMax.top() << endl;

    cout << "\nExercicio 6" << endl;
    stack<char> texto6, refazer;

    texto6.push('A');
    while (!refazer.empty()) refazer.pop();

    if (!texto6.empty()) {
        refazer.push(texto6.top());
        texto6.pop();
        cout << "Desfeito!" << endl;
    }

    if (!refazer.empty()) {
        texto6.push(refazer.top());
        refazer.pop();
        cout << "Refeito!" << endl;
    }

    return 0;
}