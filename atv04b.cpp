/*4_ dendo seus produtos em 5 (cinco) presta��es sem juros. Fa�a um algoritmo que
receba um valor de uma compra e mostre o valor das presta��es.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float valor_compra;
    //poderia ter criado outra vari�vel para manter o valor total da compra salvo, por�m, n�o a necessidade nesse caso l�gicamente.

    cout << "Insira o valor da compra: ";
    cin >> valor_compra;
    valor_compra = valor_compra / 5;
    cout << "Sua compra fica dividida em 5 presta��es de: " << valor_compra << "$";
    return 0;
}
