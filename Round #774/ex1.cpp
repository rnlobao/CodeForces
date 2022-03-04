#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    ll n, s;
    while (t--) {
        cin >> n >> s;
        cout << s / (n*n) << endl;
    }
    return 0;
}