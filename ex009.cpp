#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;



int main(){
    int qtd_peixe;
    const int limite_peixe = 50;

    cout << "digite a quantidade de Kg de peixe? ";
    cin >> qtd_peixe;
    int excesso_peixe = (qtd_peixe - limite_peixe);
    
    if (excesso_peixe >= 1){
        cout << "Voce excedeu " << excesso_peixe << "Kg de peixe." << endl;
        cout << "O valor da multa eh R$ " << excesso_peixe*4;
    }
    else
    cout << "Voce naum tem que pagar multa";
}