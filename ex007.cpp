#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;


int main(){
    double velocidademax;
    const double tolelerancia = 0.15;
    cout << "digite a velocidade maxima da via: ";
    cin >> velocidademax;
    double velocidadet = velocidademax * (1+tolelerancia);
    cout <<"voce pode transitar ate " << velocidadet << "KM/H sem ser multado." <<endl;
    return 0;

}