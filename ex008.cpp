#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;



int main(){
const double preco_un = 1.99;
const int max_itens = 50;
cout <<"Lojas quase dois - tabela de precos";
for(int i =1;i<= max_itens; i++){
    double valor_total = i * preco_un;
    cout << i << " - R$" << valor_total << endl;
}
return 0;
}
