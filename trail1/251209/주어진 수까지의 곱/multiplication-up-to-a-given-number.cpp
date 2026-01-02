#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c=1;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        c*=i;
    }
    cout << c;
    return 0;
}