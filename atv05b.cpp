/* 5_ Faça um programa para calcular a área de uma circunferência, considerando a
fórmula área = pi * raio*raio.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float pi = 3.14;
    float valor_raio;
    float area_circunferencia;

    cout << "Insira o valor do raio da circunferência que quer calcular a área: ";
    cin >> valor_raio;
    area_circunferencia = pi * valor_raio * valor_raio;
    cout << "O valor da área da circunferência é: " << area_circunferencia << "\n";
    return 0;
}
