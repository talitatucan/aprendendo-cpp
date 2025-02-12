#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// 07. Faça um programa que pergunte o ano atual e sua idade, em seguida exibe seu ano de nascimento.
// atividade de cmmprogressivo: https://www.cmmprogressivo.net/2019/10/exercicios-basicos-de-cpp.html

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int idade;
    int ano_atual;
    int ano_nascimento;
    char faz_aniversario_ainda;
    bool resposta;
    char calcular_novamente;
    bool resposta_calc_novamente;
    bool idade_invalida;
    bool ano_invalido;

    do {
        do {
            cout << "Qual é a sua idade atual? ";
            cin >> idade;

            if(cin.fail()) {
                cout << "Entrada inválida. Insira um número inteiro positivo.\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                idade_invalida = 1;
            } else {
                idade_invalida = 0;
            }
        } 
        while(idade_invalida == 1);

        do {
            cout << "Qual é o ano atual? ";
            cin >> ano_atual;

            if(cin.fail()) {
                cout << "Entrada inválida. Insira um número inteiro positivo.\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                ano_invalido = 1;                
            } else {
                ano_invalido = 0;
            }
        }
        while(ano_invalido == 1);

        do {
            cout << "Ainda vai fazer aniversário esse ano? (s/n)\n";
            cin >> faz_aniversario_ainda;
            
            if(faz_aniversario_ainda == 's' || faz_aniversario_ainda == 'S') {
                resposta = true;
            } else if(faz_aniversario_ainda == 'n' || faz_aniversario_ainda == 'N') {
                resposta = false;
            } else {
                cout << "Entrada Inválida. Lembre-se: s = Sim, n = Não\n";
            }
        } 
        while(faz_aniversario_ainda != 's' && faz_aniversario_ainda != 'n' && 
            faz_aniversario_ainda != 'S' && faz_aniversario_ainda != 'N');

        if(resposta == true) {
            ano_atual--;
            ano_nascimento = ano_atual - idade;
            ano_atual++;
        } else {
            ano_nascimento = ano_atual - idade;
        }

        cout << "Seu ano de nascimento é: " << ano_nascimento << ".\n";
        cout << "Sua idade: " << idade << " anos.\ne o ano atual é: " << ano_atual << ".\n^^\n\n";

        if(idade == 0) {
            cout << "0 anos né... \n\n";
        } else if(idade > 0 && idade <= 17) {
            cout << "Volta pra escola lek.\n\n";
        } else if(idade >= 70 && idade <= 99) {
            cout << "Tem história em...\n\n";
        } else if(idade >= 121) {
            cout << "Vai morrer não amigo? \n\n";
        } else {
            cout << "\n\naha\n\n";
        }

        do {
            cout << "Deseja Calcular o ano em que outra pessoa nasceu? (s/n): ";
            cin >> calcular_novamente;

            if(calcular_novamente == 's' || calcular_novamente == 'S') {
                    resposta_calc_novamente = true;
                } else if (calcular_novamente == 'n' || calcular_novamente == 'N') {
                    resposta_calc_novamente = false;
                    cout << ".\n.\n.\n.\n.\nEntão flws.\n";
                } else {
                    cout << "Entrada inválida. Lembra ae po: s = Sim, n = Não. Quase o megamente vc.\n\n";
            }
        }
        while(calcular_novamente != 's' && calcular_novamente != 'n'
        && calcular_novamente != 'S' && calcular_novamente != 'N');
}
while(resposta_calc_novamente == true);

    return 0;
}