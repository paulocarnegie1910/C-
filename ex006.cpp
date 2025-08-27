#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;


int main(){
    double num1,num2;
    char operacao;
    cout <<"Digite o primeiro numero: \n";
    cin >> num1;
    cout <<"Digite a operacao: \n";
    cin >> operacao;
    cout <<"Digite o segundo numero: \n";
    cin>>num2;
    switch (operacao){
        case '+':
        cout <<"Resultado: " << num1 + num2 << endl;
        break;
        case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break;
        case '/':
        if(num2!=0){
        cout << "Resultado: " << num1 / num2 << endl;
        }else{
        cout<<"Erro! Divisao por zero nao eh permitida"<< endl;
        }
        break;
        case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
        default:
        cout<<"Erro Operacao invalida"<<endl;
        break;
    };
return 0;
}