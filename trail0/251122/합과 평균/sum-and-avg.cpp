#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >> a >> b;

    double total = a+b;
    cout << fixed;
    cout.precision(1);
    cout << a+b << " " << total/2;
    return 0;
}