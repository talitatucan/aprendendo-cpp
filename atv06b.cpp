/*6) Faça um programa que calcule a área de um triângulo, considerando a fórmula
área=base*altura/2.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float base;
    float altura;
    float area;

    cout << "Insira o valor da base do triângulo: ";
    cin >> base;
    cout << "Insira o valor da altura do triângulo: ";
    cin >> altura;
    area = (base * altura)/2;
    cout << "O valor da área do triângulo é igual a: " <<area << "\n";
}
