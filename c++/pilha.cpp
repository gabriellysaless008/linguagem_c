#include <iostream>
using namespace std;
#include <stack> // Biblioteca para pilha //
// Pilha(stack) é uma estrutura que segue uma regra //
// *LIFO - last in first out - ultimo a entrar é o primeiro a sair //

int main(){
    stack<int> pilha; // Criando uma pilha de inteiros //
    // push() - Inserir elemento no topo da pilha //
    pilha.push(10);
    pilha.push(20);
    pilha.push(30); // <-- topo da pilha //
    // top() - Retorna o elemento do topo da pilha //
    cout << "Topo: " <<pilha.top() << endl;
    // pop() - Remover o elemnto do topo da pilha //
    pilha.pop(); //desempilha o elemento do topo da pilha
    cout << "Topo: " <<pilha.top() << endl;
    //empty() - retorna se a pilha está vazia ou não
    if(pilha.empty()){
        cout << "Pilha vazia" << endl;
    } else{
        cout << "Pilha contem elementos" << endl;
    }
    //size() - retorna o tamanho da pilha
    cout << "Tamanho da pilha: " << pilha.size() << endl;
    return 0;
} 
