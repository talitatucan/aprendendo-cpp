/*04. Programe um software que recebe três números, para uma função e ela retorna o maior deles. Faça outra função que recebe os mesmos números e retorna o menor deles.*/

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

float maiorNumero(float numero01, float numero02, float numero03);
float menorNumero(float numero01, float numero02, float numero03);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float numero01, numero02, numero03, resultMaiorNum, resultMenorNum;

    cout << "Insira o valor de um número: ";
    cin >> numero01;
    cout << "Insira o valor de um número: ";
    cin >> numero02;
    cout << "Insira o valor de um número: ";
    cin >> numero03;

    resultMaiorNum = maiorNumero(numero01, numero02, numero03);
    resultMenorNum = menorNumero(numero01, numero02, numero03);

    cout << "Os números são: "<< numero01 << ", " << numero02 << ", " << numero03 << ".\n\n";
    cout << "Maior número entre os três:\n" << resultMaiorNum << "\n\nE menor Número entre os três:\n" << resultMenorNum << "\n";
}

float maiorNumero(float numero01, float numero02, float numero03) {
    if(numero01 > numero02 && numero01 > numero03) {
        return numero01;
    } else if(numero02 > numero03) {
        return numero02;
    } else {
        return numero03;
    }
}

float menorNumero(float numero01, float numero02, float numero03) {
    if(numero01 < numero02 && numero01 < numero03) {
            return numero01;
    } else if(numero02 < numero03) {
        return numero02;
    } else {
        return numero03;
    }

}
