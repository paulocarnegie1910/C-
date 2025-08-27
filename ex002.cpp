#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;

int main(){
double idade;
cout << "Insira sua Idade: ";
cin >> idade;
if(idade >= 16){
    cout << "Pode Votar";
}else{
    cout << "Nao pode Votar";
} 
}