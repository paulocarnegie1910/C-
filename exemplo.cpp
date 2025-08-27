#include <iostream>
using namespace std;

int main() {
    int votos[3] = {0, 0, 0};
    int voto;
    int totalVotos = 0;

    cout << "Sistema de Votação\n";
    cout << "Candidatos:\n";
    cout << "1 - Candidato A\n";
    cout << "2 - Candidato B\n";
    cout << "3 - Candidato C\n";
    cout << "Digite 0 para encerrar a votação.\n";

    while (true) {
        cout << "Digite o número do candidato (1-3) ou 0 para sair: ";
        cin >> voto;
        if (voto == 0) break;
        if (voto >= 1 && voto <= 3) {
            votos[voto - 1]++;
            totalVotos++;
        } else {
            cout << "Voto inválido!\n";
        }
    }

    cout << "\nResultado da votação:\n";
    cout << "Candidato A: " << votos[0] << " votos\n";
    cout << "Candidato B: " << votos[1] << " votos\n";
    cout << "Candidato C: " << votos[2] << " votos\n";

    if (totalVotos == 0) {
        cout << "Nenhum voto registrado.\n";
    } else {
        int vencedor = 0;
        for (int i = 1; i < 3; i++) {
            if (votos[i] > votos[vencedor]) vencedor = i;
        }
        cout << "Vencedor: Candidato " << char('A' + vencedor) << endl;
    }

    return 0;
}