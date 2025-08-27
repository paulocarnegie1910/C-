#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;



int main(){
    double pesoPeixes;
    const double limitePeso = 50.0;
    const double valorMulta = 4.00;
    cout <<"Digite o peso total dos peixes em KG: ";
    cin >> pesoPeixes;
    //variavel para o excesso e multa
    double excesso = 0.0;
    double multa = 0.0;
    //verifica o excesso do peso
    if(pesoPeixes > limitePeso){
        excesso = pesoPeixes - limitePeso;
        multa = excesso * valorMulta;
    }
    cout << "\n ---- Relatorio de Pesca ----"<< endl;
    cout << "\n Peso total dos peixes: "<< pesoPeixes <<"Kg";
    cout << "\n Limite regulamentar: " << limitePeso <<"Kg";
    if (excesso > 0){
        cout <<"\n Excesso de peso: "<< excesso << "Kg";
        cout <<"\n Valor da multa a ser paga: R$" << multa;
    }
    else{
        cout << "\n Nao houve excesso de peso. Nenhuma multa a ser paga.\n";
    }
}