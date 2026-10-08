#include <iostream>
using namespace std;

class Personagem{
public:
string nome;
int vida;

void mostrarPersonagem(){
cout << "Nome: " << nome << endl;
cout << "Vida: " << vida << endl;
}
};
class Guerreiro : public Personagem{
public:
int forca;

void atacarComEspada(){
cout << nome << " atacou com espada!" << endl;
}
};

class Mago : public Personagem{
public:
int magia;

void atacarComMagia(){
cout << nome << " atacou com Magia!" << endl;
}
};

int main() {
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


return 0;
}