#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;

    cout << bool(a >= b) << "\n";
    cout << bool(a > b) << "\n";
    cout << bool(a <= b) << "\n";
    cout << bool(a < b) << "\n";
    cout << bool(a == b) << "\n";
    cout << bool(a != b) << "\n";

    return 0;
}