#include <iostream>
#include <vector>
using namespace std;

int main() {
    // if else
    // && -> e // || -> ou // != -> diferente // ! -> não
    // int x = 18;
    // if(x <= 18){
    //     cout << "Bom dia" << endl;
    // } else{
    //     cout << "Boa noite" << endl;
    // }

    // while
    // int i = 0;
    // while(i <= 10){
    //     cout << i << " ";
    //     i++;
    // }

    // for
    // for (int  i = 0; i < 10; i++){
    //     cout << i << " ";
    // }

    // vetor (array)
    //string carro[5] = {"Subaru", "Chevete", "Mercedes", "Fusca", "Corvette"};
    //cout << carro[2] << endl;

    // vetor
    vector<string> carros = {"Subaru", "Chevete", "Mercedes", "Fusca", "Corvette"};
    for(string carro : carros){
        cout << carro << endl;
    }
    cout << "############" << endl;

    carros.push_back("Caminhao"); //inserindo no final do vetor
    cout << "############" << endl;
    cout << "Elemento x: " << *(carros.begin() + 2) << endl;
    carros.insert(carros.begin() + 2, "Ferrari"); //inserindo na posição 2(depois do chevete)
    cout << "############" << endl;
    cout << "Ultimo elemento: " << *(carros.end() - 1) << endl;
    carros.erase(carros.end() - 1); //removendo o elemento da posição final do vetor - 1

    //insert inserir
    //erase remover
    //push_back inserir no final
    //push_front inserir no começo
    //pop_back remover do final
    //pop_front remover do começo
    //size tamanho do vetor
    //clear limpa o vetor
    //begin() retorna o endereço do primeiro elemento
    //end() retorna o endereço do último elemento
    //at() retorna o elemento da posição informada
    //front() retorna o primeiro elemento
    //back() retorna o último elemento
   
    for(string carro : carros){
        cout << carro << endl;
    }
   
    cout << carros[5] << endl;
    
    return 0;
}