#include <iostream>
using namespace std;

int main() {
    string nome;
    cin >> nome;
    int count = 0;
    sort(nome.begin(), nome.end());
    for (int i = 0; i < nome.size(); i++) {
        if (nome[i] != nome [i-1]) {
            count++;
        }
    }

    if (count % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}   