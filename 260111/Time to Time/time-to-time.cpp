#include <iostream>
#include <cmath>
using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.
    int case1 = 60*a+b;
    int case2 = 60*c+d;

    cout << case2-case1;

    return 0;
}