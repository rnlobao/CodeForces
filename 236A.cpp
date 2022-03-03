#include <iostream>
using namespace std;

int main() {
    string nome;
    cin >> nome;
    string nomebase;
    for (int i = 0; i < nome.length(); i++) {
        if(nomebase.find(nome[i])) {
            nomebase.push_back(nome[i]);
        }
    }
    cout << nomebase << endl;
    return 0;
}