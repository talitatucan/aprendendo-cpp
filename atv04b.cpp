/*4_ dendo seus produtos em 5 (cinco) prestações sem juros. Faça um algoritmo que
receba um valor de uma compra e mostre o valor das prestações.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float valor_compra;
    //poderia ter criado outra variável para manter o valor total da compra salvo, porém, não a necessidade nesse caso lógicamente.

    cout << "Insira o valor da compra: ";
    cin >> valor_compra;
    valor_compra = valor_compra / 5;
    cout << "Sua compra fica dividida em 5 prestações de: " << valor_compra << "$";
    return 0;
}
