#include <iostream>
using namespace std;

int main() {
    int a=5, b=6, c=7;
    int temp;

    temp = b;
    b = a;
    a = c;
    c = temp;

    cout << a << "\n";
    cout << b << "\n";
    cout << c;
    return 0;
}