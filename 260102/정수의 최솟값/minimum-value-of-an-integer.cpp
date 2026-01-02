#include <iostream>

using namespace std;

int a, b, c;

void d(int a, int b, int c){
    if(a<=b&&a<=c){
        cout << a;
    }
    else if(b<=a&&b<=c){
        cout << b;
    }
    else if(c<=a&&c<=b){
        cout << c;
    }
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    d(a,b,c);

    return 0;
}