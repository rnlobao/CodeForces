#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int resposta = 0;
    string comando;
    for (int i = 0; i < n; i++) {
        cin >> comando;
        if (comando[1] == '+') {
            resposta++;
        }
        else {
            resposta--;
        }
    }

    cout << resposta << endl;
    return 0;
}