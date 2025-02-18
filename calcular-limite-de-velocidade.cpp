/*
14. Na cidade de C++lândia há uma tolerância de 15% do limite de velocidade, para não se levar uma multa. Faça um programa que pede ao usuário a velocidade máxima de uma via e calcula até que velocidade o carro pode transitar sem ser multado. Seu código vai ser embarcado no sistema de GPS do carro, para avisar o limite de velocidade que o carro deve percorrer.
*/

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

float calculo_limite_velocidade(float velocidade_maxima_via) {
    float velocidade_maxima_permitida = (velocidade_maxima_via * 0.15) + velocidade_maxima_via;
    return velocidade_maxima_permitida;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float velocidade_maxima_via;
    char novo_calculo;
    bool calcular_novamente;

    do {
        cout << "\nQual a velocidade máxima da via em km/h? ";
        cin >> velocidade_maxima_via;

        cout << "Velocidade máxima em que se pode percorrer a via além do limite: " << calculo_limite_velocidade(velocidade_maxima_via) << "km/h.\n\n";



        do {
            cout << "Realizar um novo cálculo?(s/n) ";
            cin >> novo_calculo;

            if(novo_calculo == 's' || novo_calculo == 'S') {
                calcular_novamente = true;
            } else if (novo_calculo == 'n' || novo_calculo == 'N') {
                calcular_novamente = false;
                cout << ".\n.\n.\n.\n.\nViaje com segurança e evite ter uma má viagem.\n\n";
            } else {
                cout << "Entrada inválida. Insira \"s\" para sim ou \"n\" para não.\n\n";
            }
        }
        while(novo_calculo != 's' && novo_calculo != 'S' 
            && novo_calculo != 'n' && novo_calculo != 'N');
    }
    while(calcular_novamente == true);
    return 0;
}