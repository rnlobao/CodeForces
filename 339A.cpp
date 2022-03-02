#include <iostream>
using namespace std;

int main() {
    string soma;
    cin >> soma;
    int todosnumeros[1000];
    for (int i = 0; i < soma.size(); i++) {
        if (soma[i] == '+') {
            continue;
        }
        else {
            todosnumeros[i] = soma[i];
        }
    }

    sort(todosnumeros, todosnumeros)
    cout << soma << endl;
    return 0;
}