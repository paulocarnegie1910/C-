#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;

int main(){
int n1;
int n2;
cout << "Insira o primeiro numero: ";
cin >> n1;
cout << "Insira o segundo numero: ";
cin >> n2;
int mult = n1*n2;
int som = n1+n2;
int sub = n1-n2;
int div = n1/n2;
cout << "O resultado da multiplicacao eh: "<< mult;
cout << "\nO resultado da soma eh: "<< som;
cout << "\nO resultado da subtracao eh: "<< sub;
cout << "\nO resultado divisao eh: "<< div;
}