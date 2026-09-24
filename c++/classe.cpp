#include <iostream>
using namespace std;

class Personagem{
    public:
        string nome;
        int vida;
        int mana;
        int ataque;
        int defesa;
        string ataqueEsp;

        void mostrarStatus(){
            cout << "Nome: " << nome << endl;
            cout << "Vida: " << vida << endl;
            cout << "Mana: " << mana << endl;
            cout << "Ataque: " << ataque << endl;
            cout << "Defesa: " << defesa << endl;
            cout << "Ataque Especial: " << ataqueEsp << endl;
        }
};

int main() {
    Personagem Gabi;
    Gabi.nome = "Gabi Ruby";
    Gabi.vida = 100;
    Gabi.mana = 60;
    Gabi.ataque = 30;
    Gabi.defesa = 30;
    Gabi.ataqueEsp = "Bola de fogo!!!";
    Gabi.mostrarStatus();
    Personagem Igor;
    Igor.nome = "Igor Meret";
    Igor.vida = 80;
    Igor.mana = 80;
    Igor.ataque = 20;
    Igor.defesa = 20;
    Igor.ataqueEsp = "Raios Sombrios!!!";
    Igor.mostrarStatus();
    return 0;
}