/*1_O restaurante a quilo Bem-B�o cobra R$12,00 por quilo de refei��o. Escreva um
algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a
pagar. Assuma que a balan�a j� desconte o peso do prato.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float kg = 12.00;
    float peso;
    float valor_total;

    cout << "Qual o valor do peso do prato?";
    cin >> peso;
    valor_total = peso * kg;
    cout << "O prato ficou "<<valor_total;
    return 0;
}
