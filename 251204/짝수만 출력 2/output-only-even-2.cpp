#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int b, a;
    cin >> b >> a;
    while(b>=a){
        cout << b << " ";
        b-=2;
    }
    return 0;
}