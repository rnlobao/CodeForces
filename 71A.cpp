#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string words[n];
    
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (int i = 0; i < n; i++) {
        if (words[n].length() > 10) {
            cout << "opa" <<endl;
        }
    }





    return 0;
}