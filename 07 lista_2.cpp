#include <iostream>
using namespace std;

int main() {
 int num;
 bool primo = true;
 std::cout << "Digite um numero: ";
 std::cin >> num;
 if (num <= 1) {
 primo = false;
 } else {
 for (int i = 2; i * i <= num; ++i) {
 if (num % i == 0) {
 primo = false;
 break;
 }
 }
 }
 if (primo) {
 std::cout << num << " eh um numero primo." << std::endl;
 } else {
 std::cout << num << " nao eh um numero primo." << std::endl;
 }
 return 0;
}
