#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;
    int c=a;
    for(int i=a; i<=b; i++){
        c*=a;
    }
    cout << c;
    return 0;
}