/* 5_ Fa�a um programa para calcular a �rea de uma circunfer�ncia, considerando a
f�rmula �rea = pi * raio*raio.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float pi = 3.14;
    float valor_raio;
    float area_circunferencia;

    cout << "Insira o valor do raio da circunfer�ncia que quer calcular a �rea: ";
    cin >> valor_raio;
    area_circunferencia = pi * valor_raio * valor_raio;
    cout << "O valor da �rea da circunfer�ncia �: " << area_circunferencia << "\n";
    return 0;
}
