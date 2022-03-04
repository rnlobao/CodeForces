#include <iostream>
#include <string>
using namespace std;

int main() {
    string primeira, segunda;
    cin >> primeira >> segunda;

    for (int i = 0; i < primeira.length(); i++) {
        primeira[i] = tolower(primeira[i]);
        segunda[i] = tolower(segunda[i]);
    }
    
    if (primeira > segunda) {
        cout << 1 << endl;
    }

    if (primeira < segunda) {
        cout << -1 << endl;
    }

    if (primeira == segunda) {
        cout << 0 << endl;
    }
    return 0;
}