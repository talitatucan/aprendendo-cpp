/*
1. Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura. Crie os métodos públicos  necessários para sets e gets e também um métodos para imprimir os dados de uma pessoa. 
*/

#include <iostream>
#include <windows.h>

using namespace std;

class pessoa {
    private:
    string nome;
    int idade;
    float altura;

    public:
    // setters
    void setNome(string inserirNome) {
        nome = inserirNome;
    }
    void setIdade(int inserirIdade) {
        idade = inserirIdade;
    }
    void setAltura(float inserirAltura) {
        altura = inserirAltura;
    }

    // getters
    string getNome() {
        return nome;
    }
    int getIdade() {
        return idade;
    }
    float getAltura() {
        return altura;
    }
    // método para imprimir os dados de uma pessoa
    void imprimir() {
        cout << "Confira seus dados:\n\nSeu nome: " << nome << ".\n";
        cout << "Sua idade: " << idade << " anos de idade.\n";
        cout << "Sua altura: " << altura << " cm\n";
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string nome;
    int idade;
    float altura;

    pessoa objeto;

    cout << "Insira seu nome: ";
    cin >> nome;
    objeto.setNome(nome);

    cout << "Insira sua idade: ";
    cin >> idade;
    objeto.setIdade(idade);

    cout << "Insira sua altura (em centimetros): ";
    cin >> altura;
    objeto.setAltura(altura);

    objeto.imprimir();

    return 0;
}