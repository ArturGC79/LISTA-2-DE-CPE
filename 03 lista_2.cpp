#include <iostream>
using namespace std;
double pi()
{
 return 3.14159;
}
int main()
{

 double raio;
 cout << "Qual � o raio da circunfer�ncia? ";
 cin >> raio;

 double area = (raio*raio) * pi();
 cout << "A �rea da circunfer�ncia �: " << area << endl;
 return 0;

}
