#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;



int main(){
    int dia;
    cout <<"Digite um numero de 1 a 7\n";
    cin>>dia;
    switch (dia){
        case 1:
        cout << "Domingo";
        break;
        case 2:
        cout << "Segunda";
        break;
        case 3:
        cout << "Terça";
        break;
        case 4:
        cout << "Quarta";
        break;
        case 5:
        cout << "Quinta";
        break;
        case 6:
        cout << "Sexta";
        break;
        case 7:
        cout << "Sabado";
        break;
    }
}