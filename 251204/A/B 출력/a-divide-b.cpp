#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    double c;
    cin >> a >> b;
    c=a/b;
    a%=b;
    cout << c << '.';
    for(int i=0; i<20; i++){
        a*=10;
        c=a/b;
        a%=b;
        cout << c;
    }
    return 0;
}