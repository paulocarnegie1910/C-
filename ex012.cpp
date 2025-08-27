#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;


int main(){
    int votocandidato1 = 0;
    int votocanditato2 = 0;
    int votocandidato3 = 0;
    int totalvotos = 0;

    cout << "urna eletronica";
    cout << "\nLule 1 - Quantidade de votos: "<< votocandidato1;
    cout << "\nBolsonabo 2 - Quantidade de votos: "<< votocanditato2;
    cout << "\nXandao 3 - Quantidade de votos: "<< votocandidato3;
    while(totalvotos < 10){
        int voto;
        totalvotos++;
        cout << "\nDigite o numero do candidato (1-3) ou 0 para sair: ";
        cin >> voto;
        if(voto == 1) votocandidato1++;
        else if(voto == 2) votocanditato2++;
        else if(voto == 3) votocandidato3++;
        else if(voto == 0) break;
        else cout << "voto invalido";
    }
    cout << "\nResultado da votacao:\n";
    cout << "\nLule - Quantidade de votos: "<< votocandidato1;
    cout << "\nBolsonabo - Quantidade de votos: "<< votocanditato2;
    cout << "\nXandao - Quantidade de votos: "<< votocandidato3;
    if(totalvotos == 0){
        cout << "\nNenhum voto registrado.\n";
    }else{
        int vencedor = 0;
        if(votocandidato1 > votocanditato2 && votocandidato1 > votocandidato3) vencedor = 1;
        else if(votocanditato2 > votocandidato1 && votocanditato2 > votocandidato3) vencedor = 2;
        else if(votocandidato3 > votocanditato2 && votocandidato3 > votocandidato1) vencedor = 3;
        cout << "\nVencedor: Candidato " << vencedor << endl;
        }
}