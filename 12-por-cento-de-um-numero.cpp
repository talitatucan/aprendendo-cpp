#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// 09. Faça um programa que recebe um valor do usuário e calcula 12% desse total
//atividade do site: https://www.cmmprogressivo.net/2019/10/exercicios-basicos-de-cpp.html

double porcento12(double valor_usuario) {
    double total;
    total = valor_usuario * 0.12;
    return total;
}

int main() {
    double valor_usuario;

    cout << "Insira um valor para calcular a porcentagem de 12% dele: ";
    cin >> valor_usuario;
    cout << valor_usuario << " * 0.12 = " << porcento12(valor_usuario);
    
    return 0;
}