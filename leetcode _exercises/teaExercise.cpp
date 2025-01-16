#include <iostream>
using namespace std;

int main() {
    int T; // Tipo de chá correto
    int respostas[5]; // Respostas dos participantes

    // Ler o tipo de chá e as respostas
    cin >> T;
    for (int i = 0; i < 5; i++) {
        cin >> respostas[i];
    }

    // Contar o número de respostas corretas
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (respostas[i] == T) {
            count++;
        }
    }

    // Exibir o número de respostas corretas
    cout << count << endl;

    return 0;
}
