/* 2_ A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade
de broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia,
o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos). Voc� foi
contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados.
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

    cout << "Insira a quantidade de p�ozinhos vendidos: ";
    cin >> qnt_pao_vendido;
    cout << "Insira a quantidade de broas vendidas: ";
    cin >> qnt_broa_vendida;
    valor_total = pao * qnt_pao_vendido;
    valor_total += broa * qnt_broa_vendida;
    cout << "O valor total de p�es e broas vendidas � igual a: " << valor_total << "$";
}
