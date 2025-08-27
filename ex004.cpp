#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;



int main(){
double preco_unitario;
const int max_itens =50;
//imprime o cabeçalho da tabela
cout <<" Insira o valor do paun: ";
cin >> preco_unitario;
cout<<"\nPanificadora Paun de ontem - tabela de precos\n";
//loop para gerar a tabela de preços de 1 até 50 intens
for (int i =1;i<= max_itens;i++){
//calcula o valor total para "i" itens
double valor_total = i * preco_unitario;
cout<< i << "- R$ " << valor_total <<"\n";
}
return 0; //indica que o programa foi executado
}