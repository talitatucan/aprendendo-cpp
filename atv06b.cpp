/*6) Fa�a um programa que calcule a �rea de um tri�ngulo, considerando a f�rmula
�rea=base*altura/2.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float base;
    float altura;
    float area;

    cout << "Insira o valor da base do tri�ngulo: ";
    cin >> base;
    cout << "Insira o valor da altura do tri�ngulo: ";
    cin >> altura;
    area = (base * altura)/2;
    cout << "O valor da �rea do tri�ngulo � igual a: " <<area << "\n";
}
