#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
        }
    }

    int l, c;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == 1) {
                l = i; // linha
                c = j; // coluna
            }
        }
    }
    int resp1 = l-2, resp2 = c-2;
    if (resp1 < 0) {
        resp1 *= - 1;
    }
    if (resp2 < 0) {
        resp2 *= -1;
    }
    cout << resp1+resp2 << endl;
    return 0;
}