#include <iostream>

using namespace std;

int main() {
    string name;
    getline(cin, name);
    char first = toupper(name[0]);
    name[0] = first;
    cout << name << endl;
    return 0;
}