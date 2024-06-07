#include <iostream>
using namespace std;
int main() {

 double distancia, custo_total, custo_medio;
 cout << "Digite a distancia em quilometros: ";
 cin >> distancia;

 if (distancia <= 50) {
 custo_total = distancia * 1.75;
 } else if (distancia <= 150) {
 custo_total = 50 * 1.75 + (distancia - 50) * 1.65;
 } else {
 custo_total = 50 * 1.75 + 100 * 1.65 + (distancia - 150) * 1.50;

 custo_medio = custo_total / distancia;

 cout << "O custo total do aluguel do automovel eh: " << custo_total << "
reais" << endl;
 cout << "O custo medio por quilometro eh: " << custo_medio << " reais" <<
endl;
 return 0;
}

