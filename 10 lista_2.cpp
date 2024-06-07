#include <iostream>
#include <string>
using namespace std;
int main() {
 string palavra;
 cout << "Digite uma palavra com 5 letras: ";
 cin >> palavra;

 if (palavra.length() != 5) {
 cout << "Por favor, digite uma palavra com 5 letras.\n";
 return 1;
 }

 int conta_a = 0, conta_e = 0, conta_i = 0, conta_o = 0, conta_u = 0;
 for (int i = 0; i < palavra.length(); ++i) {
 char letra = palavra[i];
 if (letra == 'a') {
 conta_a++;
 } else if (letra == 'e') {
 conta_e++;
 } else if (letra == 'i') {
 conta_i++;
 } else if (letra == 'o') {
 conta_o++;
 } else if (letra == 'u') {
 conta_u++;
 }
 }
 cout << "Quantidade de vogais na palavra:\n";
 cout << "a: " << conta_a << endl;
 cout << "e: " << conta_e << endl;
 cout << "i: " << conta_i << endl;
 cout << "o: " << conta_o << endl;
 cout << "u: " << conta_u << endl;

 for (int i = 0; i < palavra.length(); ++i) {
 char& letra = palavra[i];
 if (letra == 'a') {
 letra = 'i';
 } else if (letra == 'e') {
 letra = 'o';
 } else if (letra == 'i') {
 letra = 'u';
 }
 }
 cout << "Palavra criptografada: " << palavra << endl;
 return 0;
}
