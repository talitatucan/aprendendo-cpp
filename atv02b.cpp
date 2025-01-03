/* 2_ A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade
de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia,
o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos). Você foi
contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo
para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float pao = 0.12;
    float broa = 1.50;
    int qnt_pao_vendido;
    int qnt_broa_vendida;
    float valor_total;

    cout << "Insira a quantidade de pãozinhos vendidos: ";
    cin >> qnt_pao_vendido;
    cout << "Insira a quantidade de broas vendidas: ";
    cin >> qnt_broa_vendida;
    valor_total = pao * qnt_pao_vendido;
    valor_total += broa * qnt_broa_vendida;
    cout << "O valor total de pães e broas vendidas é igual a: " << valor_total << "$";
}
