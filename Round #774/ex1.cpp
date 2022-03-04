#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, s;
    for (int i = 0; i < t; i++) {
        cin >> n >> s;
        if (s == 0) {
            cout << 0 << endl;
        }
        else {
            int meuValor = n*n;
            int restoDaDivisao = s % meuValor;
            if (restoDaDivisao == 0) {
                cout << s / meuValor << endl;
            }
            else {
                int teste = s - restoDaDivisao;
                cout << teste / meuValor << endl;
            }
        }

    }
    return 0;
}