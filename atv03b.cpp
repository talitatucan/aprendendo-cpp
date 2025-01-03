/* 3_ Escrever um algoritmo que leia o nome de um aluno e as notas das três provas que
ele obteve no semestre. No final informar o nome do aluno e a sua média (aritmética).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome_aluno;
    float nota_prova01;
    float nota_prova02;
    float nota_prova03;
    float media_notas;

    cout << "Insira o nome do(a) aluno(a): ";
    getline(cin, nome_aluno);
    cout << "Insira a nota da prova 01: ";
    cin >> nota_prova01;
    cout << "Insira a nota da prova 02: ";
    cin >> nota_prova02;
    cout << "Insira a nota da prova 03: ";
    cin >> nota_prova03;
    media_notas = (nota_prova01 + nota_prova02 + nota_prova03)/3;
    cout << "O(A) aluno(a) de nome: " << nome_aluno << " obteve uma media de " << media_notas << " nas tres provas realizadas no semestre.";
    return 0;
}
