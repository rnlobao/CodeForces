#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll a;
    string b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < a; i++) {
        if (b[i] == b[i-1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}