#include <iostream>
using namespace std;
double pi()
{
 return 3.14159;
}
int main()
{

 double raio;
 cout << "Qual é o raio da circunferência? ";
 cin >> raio;

 double area = (raio*raio) * pi();
 cout << "A área da circunferência é: " << area << endl;
 return 0;

}
