#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c;
    int solution = 0;
    while (n--) {
        cin >> a >> b >> c;
        if (a + b + c > 1) {
            solution++;
        }
    }

    cout << solution << endl;
}