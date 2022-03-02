#include <iostream>
#include <execution>
using namespace std;

int main() {
    string soma, nova_soma;
    cin >> soma;
    for (int i = 0; i < soma.size(); i++) {
        if (soma[i] == '+') {
            continue;
        }
        else {
            nova_soma.push_back(soma[i]);
        }
    }
    sort(nova_soma.begin(), nova_soma.end());

    cout << nova_soma[0];

    for (int i = 1; i < nova_soma.length(); i++) {
        cout << '+' << nova_soma[i];
    }
    cout  << endl;
    return 0;
}