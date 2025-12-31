#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    cin >> a;
    if(a=='z'){
        a=96;
    }
    cout << char(a+1);
    return 0;
}