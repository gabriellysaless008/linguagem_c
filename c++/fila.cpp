#include <iostream>
using namespace std;
#include <queue>

// Fila(queue) é ma estrutura que sgue uma regra.
// FIFO - first in first out.
// fila -> o primeiro a entrar é o primeiro a sair.

// push() -> adiciona um elemnto no final da fila.
// pop() -> remove o primeiro elemento da fila.
// front() -> consulta o primeiro elemento.
// back() -> consukta o último elemento.
// empty() -> verifica se a fila está vazia
// size() -> retorna a quantidade de elementos.


int main(){
    queue<string> fila;//fila é o nome da variável(fila)
   
    if(fila.empty()){
        cout << "Fila vazia" << endl;
    } else{
        cout << "Fila contem elementos" << endl;
    }
    
    fila.push("Ruby");
    fila.push("Brayan");
    fila.push("Millenna");

    cout << "Primeiro elemento: " << fila.front() << endl;
    cout << "ultimo elemento: " << fila.back() << endl;
    cout << "Tamanho da fila: " << fila.size() << endl;

    fila.pop();
    cout << "Primeiro elemento: " << fila.front() << endl;
    return 0;
}