#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;

int main(){

// loop para varias compras
while (true){
    double preco_mercadoria = -1.0; //inicializa com valor diferente de zero
    double total_compra = 0.0;
    int contador_produto = 1;
    cout <<"\nLojas Tabajara\n";
//loop para receber o valor da mercadoria
while(preco_mercadoria!=0){
cout <<"Produto "<<contador_produto<< ":R$ ";
cin >>preco_mercadoria;
//se nao for 0 adiciona o total da compra
if(preco_mercadoria !=0){
    total_compra += preco_mercadoria;
    contador_produto ++;
}

}
cout <<"\nTotal: R$"<<total_compra;

double valor_dinheiro;
cout<<"\nDinheiro: R$";
cin >> valor_dinheiro;
double troco = valor_dinheiro - total_compra;
cout <<"Troco: R$ "<< troco;
//voltar ao inicio do loop para a proxima compra
cout <<"\n---------------------------------------\n";
cout << "Pressione ENTER para iniciar uma nova compra...";
cin.ignore(); //limpar o buffer do teclado
cin.get(); // espera o usuario apertar ENTER
}
return 0;
}