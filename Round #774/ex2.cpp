#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ll numberOfCases;
    cin >> numberOfCases;
    vector <int> numeros;
    for (int i = 0; i < numberOfCases; i++) {
        ll numberOfNumbers;
        cin >> numberOfNumbers;
        
        for (int j = 0; j < numberOfNumbers; j++) {
            ll number;
            cin >> number;
            numeros.push_back(number);
        }
    }
    cout >> numeros >> endl;
    return 0;
}