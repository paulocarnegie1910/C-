#include <iostream> // para entrada e saida de dados
#include <iomanip> // para formatar a saida numeros reais
using namespace std;

int main(){
double nota1;
double nota2;
double nota3;
double nota4;
cout << "Insira a nota do 1 Bimestre: ";
cin >> nota1;
cout << "Insira a nota do 2 Bimestre: ";
cin >> nota2;
cout << "Insira a nota do 3 Bimestre: ";
cin >> nota3;
cout << "Insira a nota do 4 Bimestre: ";
cin >> nota4;

double media = (nota1+nota2+nota3+nota4)/4;
cout << "Media do aluno(a) eh: " <<media;
if(media<6){
    cout << "\n------Aluno Reprovado------";    
}else
    cout << "\n------Aluno Reprovado------"; 
}
// cout mostra na tela
// cin entrada de dados