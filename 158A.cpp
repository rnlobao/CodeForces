#include <iostream>

using namespace std;

int main() {
    int participantes, base;
    cin >> participantes >> base;
    base--;
    int notas[participantes];

    for (int i = 0; i < participantes; i++) {
        cin >> notas[i];
    }
    int solucao = 0;
    for (int i = 0; i < participantes; i++) {
        if (notas[i] >= notas[base] && notas[i] != 0) {
            solucao++;
        }
    }
    cout << solucao << endl;
    return 0;
}